#include "BTService_DetectPlayer.h"
#include "AI_Base.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "DrawDebugHelpers.h"
#include "define.h"
// 헤더파일 주의!



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

	// 앞으로의 행동을 결정할 확률값을 지정한다.
	float tmp = FMath::FRandRange(0.0f, 1.0f);
	OwnerComp.GetBlackboardComponent()->SetValueAsFloat(AAI_Base::PercentKey, tmp);

	// 탐지 중심부
	FVector Center = ControllingPawn->GetActorLocation();
	// 탐지 범위
	float DetectRadius = 600.0f;

	TArray<FOverlapResult> OverlapResults;
	// 제외사항(AI가 조종하는 캐릭터 본인)
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

	if (bResult == true) // 감지된 것이 있는지
	{
		for (int i = 0; i < OverlapResults.Num(); i++) // 감지된 목록들 순회
		{
			APlayerCharacter* pPlayerCharacter = Cast<APlayerCharacter>(OverlapResults[i].GetActor());
			// 감지된 목록이 플레이어 클래스고, 플레이어가 조종하고 있다면
			if (pPlayerCharacter != nullptr && pPlayerCharacter->GetController()->IsPlayerController() == true)
			{
				FVector OwnerForward = OwnerComp.GetAIOwner()->GetPawn()->GetActorForwardVector();
				FVector TargetDir = OwnerComp.GetAIOwner()->GetPawn()->GetActorLocation() - pPlayerCharacter->GetActorLocation();
				float Dot = FVector::DotProduct(OwnerForward, TargetDir);
				float AcosAngle = FMath::Acos(Dot);
				float AngleDegree = FMath::RadiansToDegrees(AcosAngle);

				//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Dot: ") + FString::SanitizeFloat(AngleDegree));

				// 시야각 140도에 있으면 감지
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

	// 플레이어가 감지되지 않았다면
	if (IsTargetFind == false)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(AAI_Base::TargetKey, nullptr);
		
		ControllingPawn->GetCharacterMovement()->bOrientRotationToMovement = true;
		ControllingPawn->GetCharacterMovement()->MaxWalkSpeed = 200.0f;

		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Target Is Not Exist"));
	}
	// 플레이어가 감지됐다면
	else if (IsTargetFind == true)
	{
		ControllingPawn->GetCharacterMovement()->bOrientRotationToMovement = false;
		ControllingPawn->GetCharacterMovement()->MaxWalkSpeed = 75.0f;

		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Target Is Exist"));
	}

	DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Green, false, 0.2f);
}