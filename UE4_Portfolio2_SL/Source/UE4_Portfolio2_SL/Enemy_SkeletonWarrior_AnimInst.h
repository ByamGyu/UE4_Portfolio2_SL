#pragma once

#include "EngineMinimal.h"
#include "Animation/AnimInstance.h"
#include "define.h"
#include "Enemy_SkeletonWarrior_AnimInst.generated.h"


UCLASS()
class UE4_PORTFOLIO2_SL_API UEnemy_SkeletonWarrior_AnimInst : public UAnimInstance
{
	GENERATED_BODY()


public:
	UEnemy_SkeletonWarrior_AnimInst();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;


private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	float CurrentSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	float CurrentDirection;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	bool IsFight;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	bool IsAttacking;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	float KnockDown_Time;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	EMONSTER_STATE Cur_State;


	// ��Ÿ�ֵ�
private:
	// 2���� ����
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_Combo_01_Stand;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_Combo_02_Move;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_Combo_03_Mix;

	// �ܹ߼� ����(���ڸ�)
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_Slash_Stand;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_Strike_Stand;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_Thrust_Stand;

	// �ܹ߼� ����(������)
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_Slash_Move;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_Strike_Move;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_Thrust_Move;

	// ���� �극��ũ
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* GuardBreak;

	// ����
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Dead1;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Dead2;

	// �ǰ�
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Hit01;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Hit02;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* HitBack;

	// �޸� ����
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* SleepStand;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* SleepSitdown;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Standup;


	// ��Ÿ�� ��� �Լ���
public:
	void PlayCombo01StandMontage();
	void PlayCombo02MoveMontage();
	void PlayCombo03MixMontage();
	void PlayAttackSlashStandMontage();
	void PlayAttackStrikeStandMontage();
	void PlayAttackThrustStandMontage();
	void PlayAttackSlashMoveMontage();
	void PlayAttackStrikeMoveMontage();
	void PlayAttackThrustMoveMontage();
	void PlayGuardBreakMontage();
	void PlayDeadMontage();
	void PlayImpactMontage();
	void PlayHitBackMontage();
	void PlaySleepStandMontage();
	void PlaySleepSitdownMontage();
	void PlayStandupMontage();


	// ��Ƽ���̵�
public:
	UFUNCTION()
	void AnimNotify_InitState();
	UFUNCTION()
	void AnimNotify_PauseDeadMontage();
};
