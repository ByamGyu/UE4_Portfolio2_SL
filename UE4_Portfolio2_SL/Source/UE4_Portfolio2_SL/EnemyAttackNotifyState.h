#pragma once

#include "EngineMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EnemyAttackNotifyState.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API UEnemyAttackNotifyState : public UAnimNotifyState
{
	GENERATED_BODY()
	

public:
	UEnemyAttackNotifyState();

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;


private:
	UPROPERTY()
	TArray<AActor*> arrHitReuslts; // 맞은 액터 중복 방지를 위한 배열
	UPROPERTY()
	float AttackDamage;


private:
	
};
