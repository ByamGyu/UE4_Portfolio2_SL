#pragma once

#include "EngineMinimal.h"
#include "Enemy_Base.h"
#include "define.h"
#include "Enemy_SkeletonArcher_AnimInst.h"
#include "Weapon_SkeletonArcherBow.h"
#include "Projectile_SkeletonArcherArrow.h"
#include "Enemy_SkeletonArcher.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API AEnemy_SkeletonArcher : public AEnemy_Base
{
	GENERATED_BODY()
	

public:
	AEnemy_SkeletonArcher();


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


	// 장비로 쓰일 액터 클래스 정보 저장 변수 선언
protected:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AWeapon_Common> RightWeaponClass;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AShield_Common> LeftWeaponClass;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AProjectile_SkeletonArcherArrow> Projectile_ArrowClass;

	// 장비 액터 선언
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	class AWeapon_Common* RightWeapon; // 실제 위치는 왼손임


	// 장비 액터 관련 함수
public:
	AWeapon_Common* GetRightWeapon();
	void SetRightWeapon(class AWeapon_SkeletonArcherBow* _NewWeapon);


	// 투사체 관련
public:
	void RandomAttackAll() override;
	void Play_Fire_Arrow(); // 원거리 공격 애니메이션 재생
	void Spawn_And_Fire_Arrow(); // 진짜 화살이 스폰되어 날아감
	

	// 애니메이션 재생
public:
	void Play_Attack_Melee();
	void Play_Attack_Range_Slow();
	void Play_Attack_Range_Fast();
	void Play_HitRandom();
	void Play_Hit_Back();
	void Play_Hit1();
	void Play_Hit2();
	void Play_Hit3();

	void PlayHitAniamtion(float _Degree) override;

	void Dead() override;
};
