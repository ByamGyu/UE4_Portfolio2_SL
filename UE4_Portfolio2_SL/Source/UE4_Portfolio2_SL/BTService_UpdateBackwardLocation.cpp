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

	// BackwarLocation 결정하는 부분(대각선 방향을 추가할까?)
	FVector CurLoc = ControllingPawn->GetActorLocation();
	FVector RightDir = ControllingPawn->GetActorRightVector();
	FVector BackwardDir = ControllingPawn->GetActorForwardVector() * (-1);
	FVector NextLocation;

	int32 tmp = FMath::RandRange(0, 2);
	if (tmp == 0) // 오른쪽
	{
		NextLocation = CurLoc + (RightDir) * 250.0f + BackwardDir * 25.0f;
	}
	else if(tmp == 1) // 왼쪽
	{
		NextLocation = CurLoc - (RightDir) * 250.0f + BackwardDir * 25.0f;
	}
	else if (tmp == 2) // 뒤
	{
		NextLocation = CurLoc + (BackwardDir * 250);
	}

	// BB에 다음 위치 저장하기
	OwnerComp.GetBlackboardComponent()->SetValueAsVector(AAI_SkeletonWarrior::BackwardPosKey, NextLocation);
}