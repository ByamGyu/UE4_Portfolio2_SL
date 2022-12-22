#pragma once

#include "EngineMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_DetectPlayer.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API UBTService_DetectPlayer : public UBTService
{
	GENERATED_BODY()


public:
	UBTService_DetectPlayer();


protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;



private:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float DetectRadius;

};