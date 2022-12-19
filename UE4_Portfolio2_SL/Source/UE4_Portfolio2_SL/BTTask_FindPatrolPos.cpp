#include "BTTask_FindPatrolPos.h"
#include "AI_SkeletonWarrior.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
// 헤더파일 주의!


UBTTask_FindPatrolPos::UBTTask_FindPatrolPos()
{
	NodeName = TEXT("FindPatrolPos");
}

EBTNodeResult::Type UBTTask_FindPatrolPos::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// ExecuteTask에 빨간줄 그어지는거 문제없음
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);

	
	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	// 빙의된 캐릭터가 없으면 실패
	if(ControllingPawn == nullptr) return EBTNodeResult::Failed;

	UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetNavigationSystem(ControllingPawn->GetWorld());
	// 내비게이션 시스템?이 없으면 실패
	if(NavSystem == nullptr) return EBTNodeResult::Failed;

	// AAI_SkeletonWarrior::HomePosKey 값을 가져옴
	FVector Origin = OwnerComp.GetBlackboardComponent()->GetValueAsVector(AAI_SkeletonWarrior::HomePosKey);
	FNavLocation NextPatrol;

	// 내비게이션 시스템에서 범위 내에 있는 랜덤 지역을 NextPartrol 변수에 넣어줌.
	if (NavSystem->GetRandomPointInNavigableRadius(FVector::ZeroVector, 500.0f, NextPatrol))
	{
		// 사용중인 BB에서 AAI_SkeletonWarrior::PatrolPosKey에 NextPartrol값을 넣어줌
		OwnerComp.GetBlackboardComponent()->SetValueAsVector(AAI_SkeletonWarrior::PatrolPosKey, NextPatrol.Location);
		return EBTNodeResult::Succeeded;
	}


	return EBTNodeResult::Failed; // 여기까지 왔으면 Task 실패
}
