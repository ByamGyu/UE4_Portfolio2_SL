#pragma once

#include "EngineMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDe_HasTargetAndInOffensDist.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API UBTDe_HasTargetAndInOffensDist : public UBTDecorator
{
	GENERATED_BODY()
	

public:
	UBTDe_HasTargetAndInOffensDist();


protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
};
