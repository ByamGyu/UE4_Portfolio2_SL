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


	// SM�� Anim
protected:
	USkeletalMeshComponent* SM;
	UAnimInstance* AnimInst;


	// �ɷ�ġ ����
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
	


	// �ɷ�ġ �Լ�
public:
	EMONSTER_STATE GetState() { return Cur_State; }
	void ChangeState(EMONSTER_STATE _NextState);

	float GetCurrentSpeed();

	void SetAttackDamage(float _Value);
	float GetAttackDamage();

	bool GetIsAttacking() { return IsAttacking; }
	void SetIsAttacking(bool _Value) { IsAttacking = _Value; }
	bool GetIsFight() { return IsFight; }
	void SetIsFight(bool _Value) { IsFight = _Value; }

	// ���� �ڽ� Ŭ������ �����Ǿ����� virtual�� �ٲ� �ʿ䰡???
	virtual float GetCurHP() { return CurHP; }
	virtual void SetCurHP(float _Value);


	// ����� �ޱ� �����ӿ�ũ
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;


	// ���� �Լ�
public:
	virtual void RandomAttackAll1();
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

	virtual void PlayHitAniamtion(float _Degree);

	virtual void Dead();
};