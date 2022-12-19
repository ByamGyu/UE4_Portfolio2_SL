#pragma once

#include "CoreMinimal.h"
#include "Enemy_Base.h"
#include "define.h"
#include "Enemy_SkeletonWarrior_AnimInst.h"
#include "Enemy_SkeletonWarrior.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API AEnemy_SkeletonWarrior : public AEnemy_Base
{
	GENERATED_BODY()

public:
	AEnemy_SkeletonWarrior();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;


public:
	virtual void PossessedBy(AController* NewController) override;


public:
	EMONSTER_STATE GetState() { return Cur_State; }
	void ChangeState(EMONSTER_STATE _NextState);

	float GetCurrentSpeed();

	bool GetIsAttacking() { return IsAttacking; }
	void SetIsAttacking(bool _Value) { IsAttacking = _Value; }
	bool GetIsFight() { return IsFight; }
	void SetIsFight(bool _Value) { IsFight = _Value; }

	float GetCurHP() override;
	void SetCurHP(float _Value) override;


public:
	void RandomAttackAll1() override;
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
	
	void Dead() override;
};