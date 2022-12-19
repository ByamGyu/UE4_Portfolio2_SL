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
	TArray<AActor*> arrHittedResults; // ���� ���� �ߺ� ������ ���� �迭
	UPROPERTY()
	float AttackDamage;


private:
	UFUNCTION()
		void GiveDamage(APlayerCharacter* _Attacker, AEnemy_Base* _DamageTo);
};
