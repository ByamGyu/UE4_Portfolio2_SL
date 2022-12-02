#include "UE4_Portfolio2_SLCharacter.h"



AUE4_Portfolio2_SLCharacter::AUE4_Portfolio2_SLCharacter()
{
	PrimaryActorTick.bCanEverTick = true;


	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);


	// 카메라에 따라서 캐릭터가 움직이지 않게 해줌
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true; // 캐릭터가 입력 방향을 앞으로 움직이게 함	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 300.0f; // 기본값(420)
	GetCharacterMovement()->AirControl = 0.2f;

	m_CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraArm"));
	m_CameraArm->SetupAttachment(RootComponent);
	m_CameraArm->TargetArmLength = 300.0f;
	m_CameraArm->bUsePawnControlRotation = true; // 마우스 움직임에 따라서 카메라 봉을 회전한다

	m_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	m_Camera->SetupAttachment(m_CameraArm, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	m_Camera->bUsePawnControlRotation = false; // 카메라 봉의 움직임에 따라 카메라가 움직이지 않는다.
}

void AUE4_Portfolio2_SLCharacter::Tick(float DeltaTime)
{

}

void AUE4_Portfolio2_SLCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);

	PlayerInputComponent->BindAxis("MoveForward", this, &AUE4_Portfolio2_SLCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AUE4_Portfolio2_SLCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &AUE4_Portfolio2_SLCharacter::CameraRotationYaw);
	PlayerInputComponent->BindAxis("LookUp", this, &AUE4_Portfolio2_SLCharacter::CameraRotationPitch);
}

void AUE4_Portfolio2_SLCharacter::BeginPlay()
{

}

void AUE4_Portfolio2_SLCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// 어느 방향이 앞인지 찾는다.
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// 앞 방향을 벡터로 만든다.
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AUE4_Portfolio2_SLCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// 어느 방향이 오른쪽인지 찾는다.
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// 오른쪽 방향 벡터를 만든다.
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void AUE4_Portfolio2_SLCharacter::CameraRotationYaw(float _Value)
{
	AddControllerYawInput(_Value);
}

void AUE4_Portfolio2_SLCharacter::CameraRotationPitch(float _Value)
{
	float DeltaSecond = GetWorld()->GetDeltaSeconds();
	FRotator Rotation = m_Camera->GetRelativeRotation();

	Rotation.Pitch += _Value;

	// 카메라 상하 각도 제한
	if (Rotation.Pitch > 45.0f) Rotation.Pitch = 45.0f;
	else if (Rotation.Pitch < -45.0f) Rotation.Pitch = -45.0f;

	// 카메라를 회전시킴
	m_Camera->SetRelativeRotation(Rotation);
}