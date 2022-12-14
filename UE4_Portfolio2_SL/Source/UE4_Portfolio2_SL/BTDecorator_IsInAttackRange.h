#pragma once

#include "EngineMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsInAttackRange.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API UBTDecorator_IsInAttackRange : public UBTDecorator
{
	GENERATED_BODY()
	

public:
	UBTDecorator_IsInAttackRange();

protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

};
