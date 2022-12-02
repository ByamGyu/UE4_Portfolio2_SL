#include "UE4_Portfolio2_SLCharacter.h"



AUE4_Portfolio2_SLCharacter::AUE4_Portfolio2_SLCharacter()
{
	PrimaryActorTick.bCanEverTick = true;


	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);


	// ī�޶� ���� ĳ���Ͱ� �������� �ʰ� ����
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true; // ĳ���Ͱ� �Է� ������ ������ �����̰� ��	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 300.0f; // �⺻��(420)
	GetCharacterMovement()->AirControl = 0.2f;

	m_CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraArm"));
	m_CameraArm->SetupAttachment(RootComponent);
	m_CameraArm->TargetArmLength = 300.0f;
	m_CameraArm->bUsePawnControlRotation = true; // ���콺 �����ӿ� ���� ī�޶� ���� ȸ���Ѵ�

	m_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	m_Camera->SetupAttachment(m_CameraArm, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	m_Camera->bUsePawnControlRotation = false; // ī�޶� ���� �����ӿ� ���� ī�޶� �������� �ʴ´�.
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
		// ��� ������ ������ ã�´�.
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// �� ������ ���ͷ� �����.
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AUE4_Portfolio2_SLCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// ��� ������ ���������� ã�´�.
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// ������ ���� ���͸� �����.
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

	// ī�޶� ���� ���� ����
	if (Rotation.Pitch > 45.0f) Rotation.Pitch = 45.0f;
	else if (Rotation.Pitch < -45.0f) Rotation.Pitch = -45.0f;

	// ī�޶� ȸ����Ŵ
	m_Camera->SetRelativeRotation(Rotation);
}