#include "BTDeco_HasTargetAndInDefensDist.h"
#include "AI_Base.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
// 헤더파일 주의!


UBTDeco_HasTargetAndInDefensDist::UBTDeco_HasTargetAndInDefensDist()
{
	NodeName = TEXT("HasTargetAndInDefensiveDist");


	Min = 400.0f;
	Max = 600.0f;
}

bool UBTDeco_HasTargetAndInDefensDist::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);


	// 사용하는 캐릭터가 없으면
	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (ControllingPawn == nullptr) return false;

	// 목표물이 없으면
	auto Target = Cast<APlayerCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AAI_Base::TargetKey));	
	if (Target == nullptr) return false;

	// 거리 계산
	float Dist = ControllingPawn->GetDistanceTo(Target);
	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::SanitizeFloat(Dist));

	
	// 최소거리, 최대거리 사이면 true
	if (Dist < Max && Dist >= Min) return true;
	else return false;
}
