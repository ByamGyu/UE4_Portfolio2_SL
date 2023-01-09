#pragma once

#include "EngineMinimal.h"
#include "AI_Base.h"
#include "AI_DarkKnight.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API AAI_DarkKnight : public AAI_Base
{
	GENERATED_BODY()
	


public:
	AAI_DarkKnight();
	virtual void OnPossess(APawn* InPawn) override;
};
