#include "BTDecorator_IsInAttackRange.h"
#include "AI_SkeletonWarrior.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
// 헤더파일 주의!


UBTDecorator_IsInAttackRange::UBTDecorator_IsInAttackRange()
{
	NodeName = TEXT("CanAttack");
}

bool UBTDecorator_IsInAttackRange::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (ControllingPawn == nullptr) return false;

	auto Target = Cast<APlayerCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AAI_SkeletonWarrior::TargetKey));
	// 목표물이 없으면
	if (Target == nullptr) return false;

	// 거리 계산
	float Dist = ControllingPawn->GetDistanceTo(Target);
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::SanitizeFloat(Dist));

	if (Dist > 200.0f) return false;
	else return true;
}