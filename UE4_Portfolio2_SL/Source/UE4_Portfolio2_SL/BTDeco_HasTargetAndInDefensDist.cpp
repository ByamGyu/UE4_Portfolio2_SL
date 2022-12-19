#include "BTDeco_HasTargetAndInDefensDist.h"
#include "AI_Base.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
// ������� ����!


UBTDeco_HasTargetAndInDefensDist::UBTDeco_HasTargetAndInDefensDist()
{
	NodeName = TEXT("HasTargetAndInDefensiveDist");
}

bool UBTDeco_HasTargetAndInDefensDist::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);


	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (ControllingPawn == nullptr) return false;

	auto Target = Cast<APlayerCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AAI_Base::TargetKey));
	// ��ǥ���� ������
	if (Target == nullptr) return false;

	// �Ÿ� ���
	float Dist = ControllingPawn->GetDistanceTo(Target);
	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::SanitizeFloat(Dist));

	// 4m�̻��� false 4m �̸� 2m �̻��� true
	if (Dist < 600.0f && Dist >= 400.0f) return true;
	else return true;
}
