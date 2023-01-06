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


	// Ű���� �� ���콺 ����
protected:
	void MoveForward(float Value);
	void MoveRight(float Value);
	void CameraRotationYaw(float _Value); // ī�޶� �¿�	
	void CameraRotationPitch(float _Value); // ī�޶� ����
	void Walk(float _Value);
	void Jump();

	void Guard(float _Value);
	void Roll();
	void Spell();
	void Parry();

	void LightAttack();
	void HeavyAttack();


	// ���°� ���� ������ ����
public:
	bool IsLockTargetExist;
	AActor* LockedOnTarget = nullptr;
	float ForwardBackInputValue;
	float LeftRightInputValue;
	float CurrentSpeed; // GetVelocity().Size()


	void LockOn();
	void LookLockOnTarget(float DeltaSeconds); // Tick���� ����

	bool GetIsLockOn();
	float GetLeftRightInputValue();
	float GetCurrentSpeed();




	// �ɷ�ġ ����
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

	// ���� �� ����
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	bool IsAttacking; // ���� ��������
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	bool IsAttackButtonWhenAttack; // ���� ���� �ٽ� ���� �Է��� ���Դ���
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	int ComboCnt; // ���ݸ�Ÿ�� �ִϸ��̼� ���� ���� �뵵
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	bool IsParrying;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float IssenAbleTime;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float StaminaUse; // ��� ���׹̳� �Ҹ� �ൿ�� ���Ǵ� ��ġ ���� (1.0f)


private:
	// ���� ���� ���� Ŭ���� ���� ���� ���� ����
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AWeapon_Default> RightWeaponClass;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AShield_Default> LeftWeaponClass;

	// ��� ���� ����
private:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	class AWeapon_Default* RightWeapon;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	class AShield_Default* LeftWeapon;

	// ��� ���� ���� �Լ�
public:
	AWeapon_Default* GetRightWeapon();
	void SetRightWeapon(class AWeapon_Default* _NewWeapon);

	AShield_Default* GetLeftWeapon();
	void SetLeftWeapon(class AShield_Default* _NewWeapon);


	// HUD ����
public:
	void RefreshHUD();


	// �ϼ� �� ���� ĳ���� ���� üũ
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


	// ����� �����ӿ�ũ
	UFUNCTION()
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
	


private:
	UPROPERTY()
	APlayerCameraManager* CameraManager; // ī�޶� �Ŵ���

public:
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return m_CameraArm; }
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return m_Camera; }
};
