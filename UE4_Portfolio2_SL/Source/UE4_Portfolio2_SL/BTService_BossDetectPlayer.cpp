#include "BTService_BossDetectPlayer.h"
#include "AI_Base.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "DrawDebugHelpers.h"
#include "define.h"



UBTService_BossDetectPlayer::UBTService_BossDetectPlayer()
{
	NodeName = TEXT("DetectPlayer");
	Interval = 0.5f;
	RandomDeviation = 0.0f;

	DetectRadius = 1000.0f;
}

void UBTService_BossDetectPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);


	// ����ϴ� ĳ���� ��������
	auto ControllingPawn = Cast<ACharacter>(OwnerComp.GetAIOwner()->GetPawn());
	if (ControllingPawn == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("AI Owner is Missing"));
		return;
	}

	// World ��������
	UWorld* World = ControllingPawn->GetWorld();
	if (World == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("World is Missing"));
		return;
	}


	// Ž�� �߽ɺ�
	FVector Center = ControllingPawn->GetActorLocation();


	TArray<FOverlapResult> OverlapResults;
	// ���ܻ���(AI�� �����ϴ� ĳ���� ����)
	FCollisionQueryParams CollisionQueryParam(NAME_None, false, ControllingPawn);
	//FCollisionQueryParams CollisionQueryParam = FCollisionQueryParams::DefaultQueryParam;

	CollisionQueryParam.AddIgnoredActor(ControllingPawn);
	bool bResult = World->OverlapMultiByChannel(
		OverlapResults,
		Center,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel4, // DetectPlayer
		FCollisionShape::MakeSphere(DetectRadius),
		CollisionQueryParam
	);


	bool IsTargetFind = false;

	// ������ ���� �ִ���
	if (bResult == true)
	{
		for (int i = 0; i < OverlapResults.Num(); i++) // ������ ��ϵ� ��ȸ
		{
			APlayerCharacter* pPlayerCharacter = Cast<APlayerCharacter>(OverlapResults[i].GetActor());
			// ������ ����� �÷��̾� Ŭ������, �÷��̾ �����ϰ� �ִٸ�
			if (pPlayerCharacter != nullptr && pPlayerCharacter->GetController()->IsPlayerController() == true)
			{
				// �԰��� Ȱ��ȭ �ϴ� �ڵ�
				ControllingPawn->GetCharacterMovement()->bOrientRotationToMovement = true;

				float Dist = ControllingPawn->GetDistanceTo(pPlayerCharacter);
				GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::SanitizeFloat(Dist));

				OwnerComp.GetBlackboardComponent()->SetValueAsObject(AAI_Base::TargetKey, pPlayerCharacter);

				DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Red, false, 0.2f);
				DrawDebugPoint(World, pPlayerCharacter->GetActorLocation(), 50.0f, FColor::Red, false, 0.2f);
				DrawDebugLine(World, ControllingPawn->GetActorLocation(), pPlayerCharacter->GetActorLocation(), FColor::Red, false, 0.2f);

				IsTargetFind = true;
			}
		}
	}

	// �÷��̾ �������� �ʾҴٸ�
	if (IsTargetFind == false)
	{
		// �÷��̾ ��ϵǾ� ������! (ex. �������� �÷��̾� ����)
		if (OwnerComp.GetBlackboardComponent()->GetValueAsObject("Target") != nullptr)
		{
			// IsTargetFind ������ true(��·�� ã�����ϱ�)
			IsTargetFind = true;
			ControllingPawn->GetCharacterMovement()->bOrientRotationToMovement = false;

			// BB�� Target ���� �ʱ�ȭ���� �ʰ� �Ѿ��.
		}
		else
		{
			// BB�� Target ���� �ʱ�ȭ
			OwnerComp.GetBlackboardComponent()->SetValueAsObject(AAI_Base::TargetKey, nullptr);

			ControllingPawn->GetCharacterMovement()->bOrientRotationToMovement = true;
		}

		//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Target Is Not Exist"));
	}
	//// �÷��̾ �����ƴٸ�
	//else if (IsTargetFind == true)
	//{
	//	// �԰��� Ȱ��ȭ �ϴ� �ڵ�
	//	ControllingPawn->GetCharacterMovement()->bOrientRotationToMovement = true;		

	//	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Target Is Exist"));
	//}

	DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Green, false, 0.2f);
}
