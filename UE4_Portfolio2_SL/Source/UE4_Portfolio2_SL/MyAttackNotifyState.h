#pragma once

#include "EngineMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "MyAttackNotifyState.generated.h"


UCLASS()
class UE4_PORTFOLIO2_SL_API UMyAttackNotifyState : public UAnimNotifyState
{
	GENERATED_BODY()
	

public:
	UMyAttackNotifyState();

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;


private:
	UPROPERTY()
		TArray<FHitResult> arrHitResults;
};
