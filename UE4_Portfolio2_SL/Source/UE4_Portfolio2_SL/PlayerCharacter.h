#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Character.h"
#include "define.h"
#include "PlayerCharacterAnimInstance.h"
#include "Weapon_Default.h"
#include "Shield_Default.h"
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


	// �ɷ�ġ ����
private:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	EPLAYER_STATE Cur_State;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	bool IsFight;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	bool IsFall;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	int MaxHP;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	int CurHP;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float HPRatio;
	UPROPERTY(VisibleAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	int MaxStamina;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	int CurStamina;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float StaminaRatio;

	// ���� �� ����
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	bool IsAttacking; // ���� ��������
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	bool IsAttackButtonWhenAttack; // ���� ���� �ٽ� ���� �Է��� ���Դ���
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	int ComboCnt; // ���ݸ�Ÿ�� �ִϸ��̼� �����뵵


	// ��� ���� ����
private:

	// ��� ���� ���� �Լ�




public:
	EPLAYER_STATE GetState() { return Cur_State; }
	void ChangeState(EPLAYER_STATE _NextState);

	bool GetIsFight() { return IsFight; }
	void SetIsFight(bool _Value) { IsFight = _Value; }
	bool GetIsFall() { return IsFall; }
	void SetIsFall(bool _Value) { IsFall = _Value; }
	void IsFalling();
	float GetCurHP() { return CurHP; }
	float GetCurStamina() { return CurStamina; }

	bool GetIsAttacking() { return IsAttacking; }
	void SetIsAttacking(bool _Value) { IsAttacking = _Value; }
	bool GetIsAttackButtonWhenAttack() { return IsAttackButtonWhenAttack; }
	void SetIsAttackButtonWhenAttack(bool _Value) { IsAttackButtonWhenAttack = _Value; }

	int GetComboCnt() { return ComboCnt; }
	void SetComboCnt(int _Value) { ComboCnt = _Value; }


public:
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return m_CameraArm; }
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return m_Camera; }
};
