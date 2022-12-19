#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Character.h"
#include "define.h"
#include "Animation/AnimInstance.h"
#include "Enemy_Base.generated.h"


UCLASS()
class UE4_PORTFOLIO2_SL_API AEnemy_Base : public ACharacter
{
	GENERATED_BODY()

public:
	AEnemy_Base();

protected:
	virtual void BeginPlay();

public:
	virtual void Tick(float DeltaTime);


	// SM와 Anim
protected:
	USkeletalMeshComponent* SM;
	UAnimInstance* AnimInst;


	// 능력치 변수
protected:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	EMONSTER_STATE Cur_State;


	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float MaxHP;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float CurHP;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float HPRatio;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float AttackDamage;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	bool IsAttacking;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	bool IsFight;

	// 능력치 함수
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


	// 대미지 받기 프레임워크
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;


	// 공격 함수
public:
	virtual void RandomAttackAll();
	virtual void ComboAttack01();
	virtual void ComboAttack02();
	virtual void ComboAttack03();
	virtual void ComboAttackRandom();
	virtual void SingleAttackStand01();
	virtual void SingleAttackStand02();
	virtual void SingleAttackStand03();
	virtual void SingleAttackMove01();
	virtual void SingleAttackMove02();
	virtual void SingleAttackMove03();
	virtual void SingleAttackRandom();

	virtual void Dead();
};