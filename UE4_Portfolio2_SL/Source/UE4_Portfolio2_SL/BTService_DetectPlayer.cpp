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

	ViewingAngle = 140.0f;
}

void UBTService_DetectPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);


	// 사용하는 캐릭터 가져오기
	auto ControllingPawn = Cast<ACharacter>(OwnerComp.GetAIOwner()->GetPawn());
	if (ControllingPawn == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("AI Owner is Missing"));
		return;
	}

	// World 가져오기
	UWorld* World = ControllingPawn->GetWorld();
	if (World == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("World is Missing"));
		return;
	}

	// 탐지 중심부
	FVector Center = ControllingPawn->GetActorLocation();


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

	// 감지된 것이 있는지
	if (bResult == true) 
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
				if (AngleDegree >= ViewingAngle)
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
		// 플레이어가 기록되어 있으면! (ex. 뒤잡으로 플레이어 감지)
		if (OwnerComp.GetBlackboardComponent()->GetValueAsObject("Target") != nullptr)
		{
			// IsTargetFind 변수를 true(어쨌든 찾았으니까)
			IsTargetFind = true;
			ControllingPawn->GetCharacterMovement()->bOrientRotationToMovement = false;
			ControllingPawn->GetCharacterMovement()->MaxWalkSpeed = 75.0f;

			// BB의 Target 값을 초기화하지 않고 넘어간다.
		}
		else
		{
			// BB의 Target 값을 초기화
			OwnerComp.GetBlackboardComponent()->SetValueAsObject(AAI_Base::TargetKey, nullptr);

			ControllingPawn->GetCharacterMovement()->bOrientRotationToMovement = true;
			ControllingPawn->GetCharacterMovement()->MaxWalkSpeed = 200.0f;
		}

		//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Target Is Not Exist"));
	}
	// 플레이어가 감지됐다면
	else if (IsTargetFind == true)
	{
		ControllingPawn->GetCharacterMovement()->bOrientRotationToMovement = false;
		ControllingPawn->GetCharacterMovement()->MaxWalkSpeed = 75.0f;

		//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Target Is Exist"));
	}

	DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Green, false, 0.2f);
}