#pragma once

#include "EngineMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_UpdatePercent.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API UBTService_UpdatePercent : public UBTService
{
	GENERATED_BODY()
	

public:
	UBTService_UpdatePercent();


protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

};
