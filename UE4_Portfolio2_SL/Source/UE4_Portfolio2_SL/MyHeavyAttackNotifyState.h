#pragma once

#include "EngineMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Enemy_Base.h"
#include "MyHeavyAttackNotifyState.generated.h"


UCLASS()
class UE4_PORTFOLIO2_SL_API UMyHeavyAttackNotifyState : public UAnimNotifyState
{
	GENERATED_BODY()
	

public:
	UMyHeavyAttackNotifyState();

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;


private:
	UPROPERTY()
	TArray<AActor*> arrHittedResults; // 맞은 액터 중복 방지를 위한 배열
	UPROPERTY()
	float AttackDamage;


private:
	UFUNCTION()
		void GiveDamage(APlayerCharacter* _Attacker, AEnemy_Base* _DamageTo);
};
