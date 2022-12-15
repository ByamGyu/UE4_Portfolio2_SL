#include "BTService_DetectPlayer.h"
#include "AI_SkeletonWarrior.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "DrawDebugHelpers.h"
// ������� ����!



UBTService_DetectPlayer::UBTService_DetectPlayer()
{
	NodeName = TEXT("DetectPlayer");
	Interval = 0.5f;
	RandomDeviation = 0.0f;
}

void UBTService_DetectPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (ControllingPawn == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("AI Owner is Missing"));
		return;
	}

	UWorld* World = ControllingPawn->GetWorld();
	if (World == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("World is Missing"));
		return;
	}

	// Ž�� �߽ɺ�
	FVector Center = ControllingPawn->GetActorLocation();
	// Ž�� ����
	float DetectRadius = 600.0f;

	TArray<FOverlapResult> OverlapResults;
	// ���ܻ���(AI�� �����ϴ� ĳ���� ����)
	// FCollisionQueryParams CollisionQueryParam(NAME_None, false, ControllingPawn);
	FCollisionQueryParams CollisionQueryParam = FCollisionQueryParams::DefaultQueryParam;

	CollisionQueryParam.AddIgnoredActor(ControllingPawn);
	bool bResult = World->OverlapMultiByChannel(
		OverlapResults,
		Center,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel4, // DetectPlayer
		FCollisionShape::MakeSphere(DetectRadius),
		CollisionQueryParam
	);	

	bool IsPlayerDetect = false; // �÷��̾ �����ƴ���

	if (bResult == true) // ������ ���� �ִ���
	{
		for (int i = 0; i < OverlapResults.Num(); i++) // ������ ��ϵ� ��ȸ
		{
			APlayerCharacter* pPlayerCharacter = Cast<APlayerCharacter>(OverlapResults[i].GetActor());
			// ������ ����� �÷��̾� Ŭ������, �÷��̾ �����ϰ� �ִٸ�
			if (pPlayerCharacter != nullptr && pPlayerCharacter->GetController()->IsPlayerController() == true)
			{
				IsPlayerDetect = true;

				OwnerComp.GetBlackboardComponent()->SetValueAsObject(AAI_SkeletonWarrior::TargetKey, pPlayerCharacter);

				// �������� �ൿ�� ������ Ȯ������ �����Ѵ�.
				float tmp = FMath::FRandRange(0.0f, 1.0f);
				OwnerComp.GetBlackboardComponent()->SetValueAsFloat(AAI_SkeletonWarrior::PercentKey, tmp);
				DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Red, false, 0.2f);
				DrawDebugPoint(World, pPlayerCharacter->GetActorLocation(), 50.0f, FColor::Red, false, 0.2f);
				DrawDebugLine(World, ControllingPawn->GetActorLocation(), pPlayerCharacter->GetActorLocation(), FColor::Red, false, 0.2f);
				
				return;
			}
		}
	}

	// �÷��̾ �����ƴٸ�
	if (IsPlayerDetect == false)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(AAI_SkeletonWarrior::TargetKey, nullptr);
		OwnerComp.GetBlackboardComponent()->SetValueAsFloat(AAI_SkeletonWarrior::PercentKey, 0.0f);
	}

	DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Green, false, 0.2f);
}