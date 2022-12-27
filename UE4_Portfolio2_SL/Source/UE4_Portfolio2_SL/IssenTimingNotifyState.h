#pragma once

#include "EngineMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Enemy_Base.h"
#include "IssenTimingNotifyState.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API UIssenTimingNotifyState : public UAnimNotifyState
{
	GENERATED_BODY()
	


public:
	UIssenTimingNotifyState();

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;


private:
	AEnemy_Base* Owner;

	UPROPERTY()
	TArray<AActor*> arrHittedReuslts; // 맞은 액터 중복 방지를 위한 배열
};
