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
	float CurrentSpeed; // 블렌드 스페이스(움직임)에 사용
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	float CurrentSpeedAndDirection; // 블렌드 스페이스(움직임)에 사용
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	float CurrentDirection; // -1 ~ 1 수치 // 블렌드 스페이스(움직임)에 사용 // PlayerCharacter에서 받아옴
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	bool IsGround; // 땅에 떠있는지 여부 (IsFall은 추락!)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	bool IsFalling; // 추락 상태 (IsFalling은 추락!)
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

	// 몽타주들
private:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* RollIdleMontage; // class를 붙여서 전방선언
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
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* ImpactStrong1;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* ImpactStrong2;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* ImpactStrong3;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* ShieldBlockWeak;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* ShieldBlockStrong;


public:
	void PlayRollIdleMontage();
	void PlayRollCombatMontage();
	void PlayLightAttackMontage();
	void PlayHeavyAttackMontage();
	void PlayGuardBreakMontage();
	void PlayParryMontage();
	void PlayImpactStrongMontage();
	void PlayShieldBlockWeak();
	void PlayShieldBlockStrong();



	// 애님 노티파이들
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
