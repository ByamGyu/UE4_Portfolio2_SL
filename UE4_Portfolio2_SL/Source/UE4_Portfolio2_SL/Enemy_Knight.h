#pragma once

#include "EngineMinimal.h"
#include "Enemy_Base.h"
#include "define.h"
#include "Enemy_Knight_AnimInst.h"
#include "Weapon_EnemyKnightSword.h"
#include "Enemy_Knight.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API AEnemy_Knight : public AEnemy_Base
{
	GENERATED_BODY()
	

public:
	AEnemy_Knight();


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

	// 장비 액터 선언
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	class AWeapon_Common* RightWeapon;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	class AShield_Common* LeftWeapon;


	// 장비 액터 관련 함수
public:
	AWeapon_Common* GetRightWeapon();
	void SetRightWeapon(class AWeapon_EnemyKnightSword* _NewWeapon);


	// 애니메이션 재생 함수
public:



	void PlayHitAniamtion(float _Degree) override;

	void Dead() override;
};
