#pragma once

#include "EngineMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDeco_HasTargetAndInDefensDist.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API UBTDeco_HasTargetAndInDefensDist : public UBTDecorator
{
	GENERATED_BODY()
	

public:
	UBTDeco_HasTargetAndInDefensDist();


protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;


private:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float Min;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float Max;
};
