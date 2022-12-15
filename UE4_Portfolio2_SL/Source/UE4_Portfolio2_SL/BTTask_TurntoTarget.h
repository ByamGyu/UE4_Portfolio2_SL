#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_TurntoTarget.generated.h"


UCLASS()
class UE4_PORTFOLIO2_SL_API UBTTask_TurntoTarget : public UBTTaskNode
{
	GENERATED_BODY()
	

public:
	UBTTask_TurntoTarget();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

};
