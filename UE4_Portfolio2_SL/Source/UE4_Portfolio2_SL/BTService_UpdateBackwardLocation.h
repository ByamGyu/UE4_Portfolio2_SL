#pragma once

#include "EngineMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_UpdateBackwardLocation.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API UBTService_UpdateBackwardLocation : public UBTService
{
	GENERATED_BODY()
	

public:
	UBTService_UpdateBackwardLocation();


protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;


private:
	float MoveRightDistance;
	float MoveBackDistance;
};
