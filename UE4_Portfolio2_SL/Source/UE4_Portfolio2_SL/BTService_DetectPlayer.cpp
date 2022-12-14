#include "BTService_DetectPlayer.h"
#include "AI_SkeletonWarrior.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "DrawDebugHelpers.h"
// 헤더파일 주의!


UBTService_DetectPlayer::UBTService_DetectPlayer()
{
	NodeName = TEXT("DetectPlayer");
	Interval = 0.5f;
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

	// 탐지 중심부
	FVector Center = ControllingPawn->GetActorLocation();
	// 탐지 범위
	float DetectRadius = 500.0f;

	TArray<FOverlapResult> OverlapResults;
	// 제외사항(AI가 조종하는 캐릭터 본인)
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

	if (OverlapResults.Num() > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Target is Exist"));
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::FromInt(OverlapResults.Num()));

		for (int i = 0; i < OverlapResults.Num(); i++)
		{
			APlayerCharacter* pPlayerCharacter = Cast<APlayerCharacter>(OverlapResults[i].GetActor());
			if (pPlayerCharacter != nullptr && pPlayerCharacter->GetController()->IsPlayerController() == true)
			{
				OwnerComp.GetBlackboardComponent()->SetValueAsObject(AAI_SkeletonWarrior::TargetKey, pPlayerCharacter);
				DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Red, false, 0.2f);
				DrawDebugPoint(World, pPlayerCharacter->GetActorLocation(), 50.0f, FColor::Red, false, 0.2f);
				DrawDebugLine(World, ControllingPawn->GetActorLocation(), pPlayerCharacter->GetActorLocation(), FColor::Red, false, 0.2f);
				return;
			}
		}
	}
	else
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(AAI_SkeletonWarrior::TargetKey, nullptr);
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("bResult is false"));
	}

	DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Green, false, 0.2f);
}