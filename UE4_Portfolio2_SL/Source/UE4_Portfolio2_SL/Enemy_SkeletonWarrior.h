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

	float GetCurHP() { return CurHP; }
	void SetCurHP(float _Value);


public:
	void RandomAttackAll();
	void ComboAttack01();
	void ComboAttack02();
	void ComboAttack03();
	void ComboAttackRandom();
	void SingleAttackStand01();
	void SingleAttackStand02();
	void SingleAttackStand03();
	void SingleAttackMove01();
	void SingleAttackMove02();
	void SingleAttackMove03();
	void SingleAttackRandom();

	void Dead();
};