#pragma once

#include "EngineMinimal.h"
#include "define.h"
#include "Animation/AnimInstance.h"
#include "Enemy_DarkKnight_AnimInst.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API UEnemy_DarkKnight_AnimInst : public UAnimInstance
{
	GENERATED_BODY()
	


public:
	UEnemy_DarkKnight_AnimInst();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;


private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	float CurrentSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	float CurrentDirection;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	float CurHP;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	bool IsFight;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	bool IsAttacking;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	float KnockDown_Time;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	EMONSTER_STATE Cur_State;


	// 몽타주들
private:
	// 2연속 공격
	//UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	//class UAnimMontage* Attack_Combo_01_Stand;


	// 몽타주 재생 함수들
public:
	//void PlayCombo01StandMontage();
	//void PlayCombo02MoveMontage();
	//void PlayCombo03MixMontage();
	//void PlayAttackSlashStandMontage();
	//void PlayAttackStrikeStandMontage();
	//void PlayAttackThrustStandMontage();
	//void PlayAttackSlashMoveMontage();
	//void PlayAttackStrikeMoveMontage();
	//void PlayAttackThrustMoveMontage();

	//void PlayGuardBreakMontage();
	//void PlayExecuted1Montage();
	//void PlayExecuted2Montage();
	//void PlayExecutedBack();

	//void PlayDeadMontage();
	//void PlayImpactMontage();
	//void PlayHitBackMontage();
	//void PlaySleepStandMontage();
	//void PlaySleepSitdownMontage();
	//void PlayStandupMontage();


	// 노티파이들
public:
	UFUNCTION()
	void AnimNotify_InitState();
	UFUNCTION()
	void AnimNotify_PauseMontage();
	UFUNCTION()
	void AnimNotify_InvinsibleStart();
	UFUNCTION()
	void AnimNotify_InvinsibleEnd();
};
