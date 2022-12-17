#pragma once

#include "EngineMinimal.h"
#include "AI_Base.h"
#include "AI_SkeletonWarrior.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API AAI_SkeletonWarrior : public AAI_Base
{
	GENERATED_BODY()
	

public:
	AAI_SkeletonWarrior();
	virtual void OnPossess(APawn* InPawn) override;
};