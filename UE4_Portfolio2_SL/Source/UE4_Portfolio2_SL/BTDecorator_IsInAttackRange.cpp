#include "BTDecorator_IsInAttackRange.h"
#include "AI_Base.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
// ������� ����!


UBTDecorator_IsInAttackRange::UBTDecorator_IsInAttackRange()
{
	NodeName = TEXT("CanAttack");


	AttackRange = 200.0f;
}

bool UBTDecorator_IsInAttackRange::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);


	// ����ϴ� ĳ���Ͱ� ������
	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (ControllingPawn == nullptr) return false;

	// ��ǥ���� ������
	auto Target = Cast<APlayerCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AAI_Base::TargetKey));	
	if (Target == nullptr) return false;

	// �Ÿ� ���
	float Dist = ControllingPawn->GetDistanceTo(Target);
	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::SanitizeFloat(Dist));

	
	// ����� ��Ÿ� ���� ������ true
	if (Dist <= AttackRange) return true;
	else return false;
}