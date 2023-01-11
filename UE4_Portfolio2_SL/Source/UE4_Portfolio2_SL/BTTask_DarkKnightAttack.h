#pragma once

#include "EngineMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_DarkKnightAttack.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API UBTTask_DarkKnightAttack : public UBTTaskNode
{
	GENERATED_BODY()
	

public:
	UBTTask_DarkKnightAttack();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;


protected:
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
