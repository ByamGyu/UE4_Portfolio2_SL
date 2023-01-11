#include "BTDe_HasTargetAndInOffensDist.h"
#include "AI_Base.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
// ������� ����!


UBTDe_HasTargetAndInOffensDist::UBTDe_HasTargetAndInOffensDist()
{
	NodeName = TEXT("HasTargetAndInOffensiveDist");


	BoundaryLine = 400.0f;
}

bool UBTDe_HasTargetAndInOffensDist::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
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

	// BoundaryLine �̳��̸� true
	if (Dist <= BoundaryLine) return true;
	else return false;
}
