#include "BTDe_HasTargetAndInOffensDist.h"
#include "AI_Base.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
// 헤더파일 주의!


UBTDe_HasTargetAndInOffensDist::UBTDe_HasTargetAndInOffensDist()
{

}

bool UBTDe_HasTargetAndInOffensDist::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);


	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (ControllingPawn == nullptr) return false;

	auto Target = Cast<APlayerCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AAI_Base::TargetKey));
	// 목표물이 없으면
	if (Target == nullptr) return false;

	// 거리 계산
	float Dist = ControllingPawn->GetDistanceTo(Target);
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::SanitizeFloat(Dist));

	// 2m 초과 거리는 false 2m 이하 거리는 true
	if (Dist <= 400.0f) return true;
	else return false;
}
