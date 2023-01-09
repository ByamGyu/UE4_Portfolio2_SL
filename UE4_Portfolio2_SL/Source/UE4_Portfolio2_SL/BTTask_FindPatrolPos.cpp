#include "BTTask_FindPatrolPos.h"
#include "AI_Base.h"
#include "AI_SkeletonWarrior.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
// ������� ����!


UBTTask_FindPatrolPos::UBTTask_FindPatrolPos()
{
	NodeName = TEXT("FindPatrolPos");
}

EBTNodeResult::Type UBTTask_FindPatrolPos::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// ExecuteTask�� ������ �׾����°� ��������
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);

	
	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	// ���ǵ� ĳ���Ͱ� ������ ����
	if(ControllingPawn == nullptr) return EBTNodeResult::Failed;


	UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetNavigationSystem(ControllingPawn->GetWorld());
	// ������̼� �ý���?�� ������ ����
	if(NavSystem == nullptr) return EBTNodeResult::Failed;


	// AAI_Base::HomePosKey ���� ������
	FVector Origin = OwnerComp.GetBlackboardComponent()->GetValueAsVector(AAI_Base::HomePosKey);
	FNavLocation NextPatrol;


	// ������̼� �ý��ۿ��� ���� ���� �ִ� ���� ������ NextPartrol ������ �־���.
	if (NavSystem->GetRandomPointInNavigableRadius(FVector::ZeroVector, 500.0f, NextPatrol))
	{
		// ������� BB���� AAI_Base::PatrolPosKey�� NextPartrol���� �־���
		OwnerComp.GetBlackboardComponent()->SetValueAsVector(AAI_Base::PatrolPosKey, NextPatrol.Location);
		return EBTNodeResult::Succeeded;
	}


	return EBTNodeResult::Failed; // ������� ������ Task ����
}
