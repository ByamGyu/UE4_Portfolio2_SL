#pragma once

#include "EngineMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_BossTurntoTarget.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API UBTTask_BossTurntoTarget : public UBTTaskNode
{
	GENERATED_BODY()
	


public:
	UBTTask_BossTurntoTarget();


protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;


private:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float TurnRate;
};
