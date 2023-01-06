#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Character.h"
#include "define.h"
#include "PlayerCharacterAnimInstance.h"

#include "Weapon_Default.h"
#include "Shield_Default.h"

#include "MyGameInstance.h"

#include "Components/WidgetComponent.h"
#include "UserWidget_HPBar.h"
#include "UserWidget_StaminaBar.h"
#include "UserWidget_HUD.h"

#include "MyPlayerController.h"
#include "UserWidget_HUD.h"

#include "PlayerCharacter.generated.h"

UCLASS()
class UE4_PORTFOLIO2_SL_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();


protected:
	virtual void BeginPlay() override;


public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* m_CameraArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* m_Camera;


	// 키보드 및 마우스 조작
protected:
	void MoveForward(float Value);
	void MoveRight(float Value);
	void CameraRotationYaw(float _Value); // 카메라 좌우	
	void CameraRotationPitch(float _Value); // 카메라 상하
	void Walk(float _Value);
	void Jump();

	void Guard(float _Value);
	void Roll();
	void Spell();
	void Parry();

	void LightAttack();
	void HeavyAttack();


	// 락온과 락온 움직임 관련
public:
	bool IsLockTargetExist;
	AActor* LockedOnTarget = nullptr;
	float ForwardBackInputValue;
	float LeftRightInputValue;
	float CurrentSpeed; // GetVelocity().Size()


	void LockOn();
	void LookLockOnTarget(float DeltaSeconds); // Tick에서 실행

	bool GetIsLockOn();
	float GetLeftRightInputValue();
	float GetCurrentSpeed();




	// 능력치 정보
private:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	EPLAYER_STATE Cur_State;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	bool IsFight;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	bool IsFall;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float MaxHP;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float CurHP;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float HPRatio;
	UPROPERTY(VisibleAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float MaxStamina;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float CurStamina;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float StaminaRatio;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float AttackDamage;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float DefaultDamage;

	// 공격 중 관련
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	bool IsAttacking; // 공격 도중인지
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	bool IsAttackButtonWhenAttack; // 공격 도중 다시 공격 입력이 들어왔는지
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	int ComboCnt; // 공격몽타주 애니메이션 섹션 점프 용도
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	bool IsParrying;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float IssenAbleTime;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float StaminaUse; // 모든 스테미나 소모 행동에 사용되는 수치 기준 (1.0f)


private:
	// 장비로 쓰일 액터 클래스 정보 저장 변수 선언
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AWeapon_Default> RightWeaponClass;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AShield_Default> LeftWeaponClass;

	// 장비 액터 선언
private:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	class AWeapon_Default* RightWeapon;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	class AShield_Default* LeftWeapon;

	// 장비 액터 관련 함수
public:
	AWeapon_Default* GetRightWeapon();
	void SetRightWeapon(class AWeapon_Default* _NewWeapon);

	AShield_Default* GetLeftWeapon();
	void SetLeftWeapon(class AShield_Default* _NewWeapon);


	// HUD 갱신
public:
	void RefreshHUD();


	// 일섬 및 전방 캐릭터 상태 체크
private:
	AActor* CharacterCheck();
	void IssenAbleTimeTick(float DeltaTime);


public:
	EPLAYER_STATE GetState() { return Cur_State; }
	void ChangeState(EPLAYER_STATE _NextState);

	bool GetIsFight() { return IsFight; }
	void SetIsFight(bool _Value) { IsFight = _Value; }
	bool GetIsFall() { return IsFall; }
	void SetIsFall(bool _Value) { IsFall = _Value; }
	void IsFalling();


	float GetCurHP() { return CurHP; }
	void SetCurHP(float _Value);
	float GetHPRatio() { return HPRatio; }
	float GetMaxHP() { return MaxHP; }
	void SetMaxHP(float _Value) { MaxHP = _Value; }
	void RecoverTickHPStamina(float _DeltaSecond);

	float GetCurStamina() { return CurStamina; }
	void SetCurStamina(float _Value);
	float GetStaminaRatio() { return StaminaRatio; }
	float GetMaxStamina() { return MaxStamina; }
	void SetMaxStamina(float _Value) { MaxStamina = _Value; }

	float GetStaminaUse() { return StaminaUse; }
	void SetStaminaUse(float _Value) { StaminaUse = _Value; }

	void InitHPAndStamina();

	void Dead();

	void PlayHitAniamtion(float _Degree);
	void PlayShieldBlockWeakAnimation();
	void PlayShieldBlockStrongAnimation();


	void SetAttackDamage();
	float GetAttackDamage() { return AttackDamage; }
	float GetAttackDamage(float _Value) { return AttackDamage * _Value; }


	bool GetIsAttacking() { return IsAttacking; }
	void SetIsAttacking(bool _Value) { IsAttacking = _Value; }
	bool GetIsAttackButtonWhenAttack() { return IsAttackButtonWhenAttack; }
	void SetIsAttackButtonWhenAttack(bool _Value) { IsAttackButtonWhenAttack = _Value; }

	int GetComboCnt() { return ComboCnt; }
	void SetComboCnt(int _Value) { ComboCnt = _Value; }

	bool GetIsParrying() { return IsParrying; }
	void SetIsParrying(bool _Value) { IsParrying = _Value; }

	float GetIssenAbleTime() { return IssenAbleTime; }
	void SetISsenAbleTime(float _Value) { IssenAbleTime = _Value; }

	void PlayExecutionAnimation1();
	void PlayExecutionAnimation2();
	void PlayExecutionBackAnimation();


	// 대미지 프레임워크
	UFUNCTION()
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
	


private:
	UPROPERTY()
	APlayerCameraManager* CameraManager; // 카메라 매니저

public:
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return m_CameraArm; }
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return m_Camera; }
};
