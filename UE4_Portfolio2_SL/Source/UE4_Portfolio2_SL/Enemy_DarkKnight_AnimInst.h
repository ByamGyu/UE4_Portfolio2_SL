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
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Character, Meta = (AllowPrivateAccess = true))
	EEQUIPMENT_STATE Cur_EquipmentState;


	// 몽타주들
private:
	// 처형1
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Execute1;
	// 처형2 (완전히 죽임)
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Execute2;


	// 처형당함 앞으로 넘어짐(= 뒤잡 당함)
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Executed_FalldownFront;
	// 처형당함 뒤로 넘어짐(= 앞잡 당함)
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Executed_FalldownBack;


	// 패리당함
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* GuardBreak_GS;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* GuardBreak_SS;
	

	// 대검 애니메이션들(묵직하고 느림)
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_GS_ChargedCombo;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_GS_HandAndSwordSwing;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_GS_RunningAttackSimple;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_GS_RunningAttackWithAOE;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_GS_SwingAndSlam;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_GS_Uppercut;


	// 한손검 + 방패 애니메이션들(가볍고 빠름)
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_SS_Combo1;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_SS_Combo2;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_SS_Combo3;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Attack_SS_JumpAttack;


	// 피격 애니메이션(대검)
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Hit_GS_F;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Hit_GS_B;

	// 피격 애니메이션(한솜검 + 방패)
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Hit_SS_F;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Hit_SS_B;


	// 회피 애니메이션
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Dodge_B180;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Dodge_BL45;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Dodge_BR45;

	
	// 기타 애니메이션
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Boss_Battle_Entrance;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Idle_To_Combat;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Combat_To_Idle;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = AnimMontage, Meta = (AllowPrivateAccess = true))
	class UAnimMontage* Boss_Death;


	// 몽타주 재생 함수들
public:
	void PlaySwordCombo01Montage();
	void PlaySwordCombo02Montage();
	void PlaySwordCombo03Montage();
	void PlaySwordJumpAttackMontage();

	void PlayGreatSwordCombo01Montage();
	void PlayGreatSwordCombo02Montage();
	void PlayGreatSwordCombo03Montage();
	void PlayGreatSwordUppercutMontage();
	void PlayGreatSwordRunningAttackMontage();
	void PlayGreatSwordRunningAOEAttackMontage();

	void PlayGuardBreakMontage();
	void PlayExecutionMontage();
	void PlayExecutedMontage();
	void PlayExecutedBack();

	void PlayDeadMontage();
	void PlayImpactMontage();
	void PlayHitBackMontage();

	void PlayDodgeB180Montage();
	void PlayDodgeBL45Montage();
	void PlayDodgeBR45Montage();

	void PlayBossBattleEntranceMontage();
	void PlayIdleToCombatMontage();
	void PlayCombatToIdleMontage();


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
	UFUNCTION()
	void AnimNotify_DodgeEnd();
};
