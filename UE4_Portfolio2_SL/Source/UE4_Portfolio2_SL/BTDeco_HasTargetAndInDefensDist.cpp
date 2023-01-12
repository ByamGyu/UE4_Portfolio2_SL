#include "BTDeco_HasTargetAndInDefensDist.h"
#include "AI_Base.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
// ������� ����!


UBTDeco_HasTargetAndInDefensDist::UBTDeco_HasTargetAndInDefensDist()
{
	NodeName = TEXT("HasTargetAndInDefensiveDist");


	Min = 400.0f;
	Max = 600.0f;
}

bool UBTDeco_HasTargetAndInDefensDist::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
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

	
	// �ּҰŸ�, �ִ�Ÿ� ���̸� true
	if (Dist < Max && Dist >= Min) return true;
	else return false;
}
