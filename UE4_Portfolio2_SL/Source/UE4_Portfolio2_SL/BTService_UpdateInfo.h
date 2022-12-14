#pragma once

#include "EngineMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_UpdateInfo.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API UBTService_UpdateInfo : public UBTService
{
	GENERATED_BODY()
	

public:
	UBTService_UpdateInfo();


protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

};
