#pragma once

#include "EngineMinimal.h"
#include "Animation/AnimInstance.h"
#include "define.h"
#include "PlayerCharacterAnimInstance.generated.h"


UCLASS()
class UE4_PORTFOLIO2_SL_API UPlayerCharacterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	

public:
	UPlayerCharacterAnimInstance();

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;


private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	float CurrentSpeed; // ������ �����̽�(������)�� ���
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	float CurrentSpeedAndDirection; // ������ �����̽�(������)�� ���
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	float CurrentDirection; // -1 ~ 1 ��ġ // ������ �����̽�(������)�� ��� // PlayerCharacter���� �޾ƿ�
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	bool IsGround; // ���� ���ִ��� ���� (IsFall�� �߶�!)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	bool IsFalling; // �߶� ���� (IsFalling�� �߶�!)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	bool IsFight;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	bool IsAttacking;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	bool IsAttackButtonWhenAttack;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	int ComboCnt;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	float KnockDown_Time;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	float CurHP;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	float CurStamina;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Character, Meta = (AllowPrivateAccess = true))
	EPLAYER_STATE Cur_State;

	// ��Ÿ�ֵ�
private:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* RollIdleMontage; // class�� �ٿ��� ���漱��
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* RollCombatMontage;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* LightAttackMontage;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* HeavyAttackMontage;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* GuardBreakMontage;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* ParryMontage;


public:
	void PlayRollIdleMontage();
	void PlayRollCombatMontage();
	void PlayLightAttackMontage();
	void PlayHeavyAttackMontage();
	void PlayGuardBreakMontage();
	void PlayParryMontage();



	// �ִ� ��Ƽ���̵�
private:
	UFUNCTION()
	void AnimNotify_InitState();
	UFUNCTION()
	void AnimNotify_JumpEnd();
	UFUNCTION()
	void AnimNotify_RollEnd();
	UFUNCTION()
	void AnimNotify_SpellEnd();
	UFUNCTION()
	void AnimNotify_ParryEnd();
	UFUNCTION()
	void AnimNotify_NockDownRecover();
	UFUNCTION()
	void AnimNotify_GuardStart();
	UFUNCTION()
	void AnimNotify_AttackEnd();
	UFUNCTION()
	void AnimNotify_AttackInputCheck();

};