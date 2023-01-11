#pragma once

#include "EngineMinimal.h"
#include "AIController.h"
#include "AI_Base.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API AAI_Base : public AAIController
{
	GENERATED_BODY()
	

public:
	AAI_Base();
	// virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;


protected:
	UPROPERTY()
	class UBehaviorTree* BT;
	UPROPERTY()
	class UBlackboardData* BB;


public:
	UBlackboardData* GetBB() { return BB; }
	UBehaviorTree* GetBT() { return BT; }



public:
	static const FName HomePosKey;
	static const FName PatrolPosKey;
	static const FName TargetKey;
	static const FName PercentKey;
	static const FName BackwardPosKey;
	static const FName CurStateKey;
	static const FName CurEquipmentKey;



};
