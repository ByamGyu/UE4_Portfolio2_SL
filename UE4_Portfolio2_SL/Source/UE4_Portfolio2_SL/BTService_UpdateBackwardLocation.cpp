#include "BTService_UpdateBackwardLocation.h"
#include "AI_SkeletonWarrior.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
// 헤더파일 주의!


UBTService_UpdateBackwardLocation::UBTService_UpdateBackwardLocation()
{
	NodeName = TEXT("UpdateBackwardLocation");
	Interval = 0.5f;
	RandomDeviation = 0.0f;
}

void UBTService_UpdateBackwardLocation::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
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

	FVector CurLoc = ControllingPawn->GetActorLocation();
	FVector BackwardDirection = ControllingPawn->GetActorForwardVector() * (-1);
	FVector BackwardLocation = CurLoc + (BackwardDirection * 300);
	
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Set Backward Value"));
	OwnerComp.GetBlackboardComponent()->SetValueAsVector(AAI_SkeletonWarrior::BackwardPosKey, BackwardLocation);

}