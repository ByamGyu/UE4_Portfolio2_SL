#include "BTDeco_HasTargetAndInDefensDist.h"
#include "AI_Base.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
// 헤더파일 주의!


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
	// 목표물이 없으면
	if (Target == nullptr) return false;

	// 거리 계산
	float Dist = ControllingPawn->GetDistanceTo(Target);
	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::SanitizeFloat(Dist));

	// 4m이상은 false 4m 미만 2m 이상은 true
	if (Dist < 600.0f && Dist >= 400.0f) return true;
	else return true;
}
