#include "BTDe_HasTargetAndInOffensDist.h"
#include "AI_SkeletonWarrior.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
// ������� ����!


UBTDe_HasTargetAndInOffensDist::UBTDe_HasTargetAndInOffensDist()
{

}

bool UBTDe_HasTargetAndInOffensDist::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (ControllingPawn == nullptr) return false;

	auto Target = Cast<APlayerCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AAI_SkeletonWarrior::TargetKey));
	// ��ǥ���� ������
	if (Target == nullptr) return false;

	// �Ÿ� ���
	float Dist = ControllingPawn->GetDistanceTo(Target);
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::SanitizeFloat(Dist));

	// 2m �ʰ� �Ÿ��� false 2m ���� �Ÿ��� true
	if (Dist <= 400.0f) return true;
	else return false;
}