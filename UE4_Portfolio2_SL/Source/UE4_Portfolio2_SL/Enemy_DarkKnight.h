#pragma once

#include "EngineMinimal.h"
#include "Enemy_Base.h"
#include "define.h"
#include "Enemy_DarkKnight_AnimInst.h"
#include "Shield_DarkKnightShield.h"
#include "Weapon_DarkKnightSword.h"

#include "Enemy_DarkKnight.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API AEnemy_DarkKnight : public AEnemy_Base
{
	GENERATED_BODY()
	


public:
	AEnemy_DarkKnight();


protected:
	virtual void BeginPlay() override;


public:
	virtual void Tick(float DeltaTime) override;


public:
	virtual void PossessedBy(AController* NewController) override;

public:
	float GetCurHP() override;
	void SetCurHP(float _Value) override;

	// 장비 액터 관련 함수
public:
	void SetRightWeapon(class AWeapon_Common* _NewWeapon);
	void SetLeftWeapon(class AShield_Common* _NewShield);


	// 공격 및 처형 애니메이션
public:
	void DedicatedAnim_PlaySwordRandomAttackAll();
	void DedicatedAnim_PlaySwordCombo01Montage();
	void DedicatedAnim_PlaySwordCombo02Montage();
	void DedicatedAnim_PlaySwordCombo03Montage();
	void DedicatedAnim_PlaySwordJumpAttackMontage();

	void DedicatedAnim_PlayGreatSwordRandomAttackAll();
	void DedicatedAnim_PlayGreatSwordRandomRunningAttackAll();
	void DedicatedAnim_PlayGreatSwordCombo01AttackMontage();
	void DedicatedAnim_PlayGreatSwordCombo02AttackMontage();
	void DedicatedAnim_PlayGreatSwordCombo03AttackMontage();
	void DedicatedAnim_PlayGreatSwordUppercutMontage();
	void DedicatedAnim_PlayGreatSwordRunningAttackMontage();
	void DedicatedAnim_PlayGreatSwordRunningAOEAttackMontage();

	void DedicatedAnim_PlayGuardBreakMontage();
	void DedicatedAnim_PlayExecutionMontage();
	void DedicatedAnim_PlayExecutedMontage();
	void DedicatedAnim_PlayExecutedBackMontage();

	void DedicatedAnim_PlayDodgeRandomAll();
	void DedicatedAnim_PlayDodgeB180Montage();
	void DedicatedAnim_PlayDodgeBL45Montage();
	void DedicatedAnim_PlayDodgeBR45Montage();

	void DedicatedAnim_PlayDeadMontage();
	void DedicatedAnim_PlayImpactMontage();
	void DedicatedAnim_PlayHitBackMontage();

	void DedicatedAnim_PlayBossBattleEntranceMontage();
	void DedicatedAnim_PlayIdleToCombateMontage();
	void DedicatedAnim_PlayCombateToIdleMontage();
};