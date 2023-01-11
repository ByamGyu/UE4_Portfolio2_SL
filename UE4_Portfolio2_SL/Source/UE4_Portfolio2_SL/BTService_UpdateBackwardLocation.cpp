#include "BTService_UpdateBackwardLocation.h"
#include "AI_Base.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"



UBTService_UpdateBackwardLocation::UBTService_UpdateBackwardLocation()
{
	NodeName = TEXT("UpdateBackwardLocation");
	Interval = 0.5f;
	RandomDeviation = 0.0f;

	MoveRightDistance = 250.0f;
	MoveBackDistance = 25.0f;
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

	// BackwarLocation 결정하는 부분
	FVector CurLoc = ControllingPawn->GetActorLocation();
	FVector RightDir = ControllingPawn->GetActorRightVector();
	FVector BackwardDir = ControllingPawn->GetActorForwardVector() * (-1);
	FVector NextLocation;

	int32 tmp = FMath::RandRange(0, 2);
	if (tmp == 0) // 오른쪽
	{
		NextLocation = CurLoc + (RightDir) *MoveRightDistance + BackwardDir * MoveBackDistance;
	}
	else if(tmp == 1) // 왼쪽
	{
		NextLocation = CurLoc - (RightDir) *MoveRightDistance + BackwardDir * MoveBackDistance;
	}
	else if (tmp == 2) // 뒤
	{
		NextLocation = CurLoc + (BackwardDir * MoveBackDistance * 10);
	}

	// BB에 다음 위치 저장하기
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Set Backward Pos"));
	OwnerComp.GetBlackboardComponent()->SetValueAsVector(AAI_Base::BackwardPosKey, NextLocation);
}