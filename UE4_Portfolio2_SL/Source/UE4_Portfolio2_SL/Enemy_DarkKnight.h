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
	void RandomAttackAll() override;
	void ComboAttack01() override;
	void ComboAttack02() override;
	void ComboAttack03() override;
	void ComboAttackRandom() override;
	void SingleAttackStand01() override;
	void SingleAttackStand02() override;
	void SingleAttackStand03() override;
	void SingleAttackMove01() override;
	void SingleAttackMove02() override;
	void SingleAttackMove03() override;
	void SingleAttackRandom() override;

	void PlayHitAniamtion(float _Degree) override;
	void PlayGuardBreakAnimation() override;
	void PlayExecuted1Animation() override;
	void PlayExecuted2Animation() override;
	void PlayExecutedBackAnimation() override;

	void Dead() override;
};
