#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Character.h"
#include "define.h"
#include "UE4_Portfolio2_SLCharacter.generated.h"

UCLASS(config=Game)
class AUE4_Portfolio2_SLCharacter : public ACharacter
{
	GENERATED_BODY()


public:
	AUE4_Portfolio2_SLCharacter();


protected:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* m_CameraArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* m_Camera;


protected:
	virtual void BeginPlay() override;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void CameraRotationYaw(float _Value); // 카메라 좌우	
	void CameraRotationPitch(float _Value); // 카메라 상하

private:
	//UPROPERTY()
	// class UPlayerCharacterAnimInstance* AnimInst;
	//UPROPERTY()
	//UParticleSystemComponent* ParticleSystem;

// 능력치 정보
private:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	EPLAYER_STATE Cur_State;

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


public:
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return m_CameraArm; }
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return m_Camera; }
};

