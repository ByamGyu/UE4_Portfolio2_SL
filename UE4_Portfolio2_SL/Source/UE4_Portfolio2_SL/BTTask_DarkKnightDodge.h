#pragma once

#include "EngineMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_DarkKnightDodge.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API UBTTask_DarkKnightDodge : public UBTTaskNode
{
	GENERATED_BODY()
	

public:
	UBTTask_DarkKnightDodge();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;


protected:
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;


private:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
		float DistanceToTaret;
};
