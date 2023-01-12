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


protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;


private:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float TurnRate; // 3.0f이 초기값
};
