#include "BTService_DetectPlayer.h"
#include "AI_Base.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "DrawDebugHelpers.h"
#include "define.h"
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


	auto ControllingPawn = Cast<ACharacter>(OwnerComp.GetAIOwner()->GetPawn());
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

	// �������� �ൿ�� ������ Ȯ������ �����Ѵ�.
	float tmp = FMath::FRandRange(0.0f, 1.0f);
	OwnerComp.GetBlackboardComponent()->SetValueAsFloat(AAI_Base::PercentKey, tmp);

	// Ž�� �߽ɺ�
	FVector Center = ControllingPawn->GetActorLocation();
	// Ž�� ����
	float DetectRadius = 600.0f;

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

	if (bResult == true) // ������ ���� �ִ���
	{
		for (int i = 0; i < OverlapResults.Num(); i++) // ������ ��ϵ� ��ȸ
		{
			APlayerCharacter* pPlayerCharacter = Cast<APlayerCharacter>(OverlapResults[i].GetActor());
			// ������ ����� �÷��̾� Ŭ������, �÷��̾ �����ϰ� �ִٸ�
			if (pPlayerCharacter != nullptr && pPlayerCharacter->GetController()->IsPlayerController() == true)
			{
				FVector OwnerForward = OwnerComp.GetAIOwner()->GetPawn()->GetActorForwardVector();
				FVector TargetDir = OwnerComp.GetAIOwner()->GetPawn()->GetActorLocation() - pPlayerCharacter->GetActorLocation();
				float Dot = FVector::DotProduct(OwnerForward, TargetDir);
				float AcosAngle = FMath::Acos(Dot);
				float AngleDegree = FMath::RadiansToDegrees(AcosAngle);

				//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Dot: ") + FString::SanitizeFloat(AngleDegree));

				// �þ߰� 140���� ������ ����
				if (AngleDegree >= 140.0f)
				{
					OwnerComp.GetBlackboardComponent()->SetValueAsObject(AAI_Base::TargetKey, pPlayerCharacter);

					DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Red, false, 0.2f);
					DrawDebugPoint(World, pPlayerCharacter->GetActorLocation(), 50.0f, FColor::Red, false, 0.2f);
					DrawDebugLine(World, ControllingPawn->GetActorLocation(), pPlayerCharacter->GetActorLocation(), FColor::Red, false, 0.2f);

					IsTargetFind = true;
				}
			}
		}
	}

	// �÷��̾ �������� �ʾҴٸ�
	if (IsTargetFind == false)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(AAI_Base::TargetKey, nullptr);
		
		ControllingPawn->GetCharacterMovement()->bOrientRotationToMovement = true;
		ControllingPawn->GetCharacterMovement()->MaxWalkSpeed = 200.0f;

		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Target Is Not Exist"));
	}
	// �÷��̾ �����ƴٸ�
	else if (IsTargetFind == true)
	{
		ControllingPawn->GetCharacterMovement()->bOrientRotationToMovement = false;
		ControllingPawn->GetCharacterMovement()->MaxWalkSpeed = 75.0f;

		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Target Is Exist"));
	}

	DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Green, false, 0.2f);
}