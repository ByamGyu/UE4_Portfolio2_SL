#pragma once

#include "EngineMinimal.h"
#include "AIController.h"
#include "AI_SkeletonWarrior.generated.h"

/**
 * 
 */
UCLASS()
class UE4_PORTFOLIO2_SL_API AAI_SkeletonWarrior : public AAIController
{
	GENERATED_BODY()


public:
	AAI_SkeletonWarrior();
	virtual void OnPossess(APawn* InPawn) override;


private:
	UPROPERTY()
		class UBehaviorTree* BT;
	UPROPERTY()
		class UBlackboardData* BB;


public:
	static const FName HomePosKey;
	static const FName PatrolPosKey;
	static const FName TargetKey;
	static const FName PercentKey;
	static const FName BackwardPosKey;
};