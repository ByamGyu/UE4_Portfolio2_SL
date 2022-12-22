#pragma once

#include "EngineMinimal.h"
#include "AI_Base.h"
#include "AI_SkeletonArcher.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API AAI_SkeletonArcher : public AAI_Base
{
	GENERATED_BODY()
	

public:
	AAI_SkeletonArcher();
	virtual void OnPossess(APawn* InPawn) override;
};
