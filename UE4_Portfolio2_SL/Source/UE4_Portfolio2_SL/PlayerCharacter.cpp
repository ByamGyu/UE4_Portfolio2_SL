#include "PlayerCharacter.h"


APlayerCharacter::APlayerCharacter()
	: Cur_State(EPLAYER_STATE::IDLE),
	MaxHP(100),
	CurHP(MaxHP),
	MaxStamina(100),
	CurStamina(MaxStamina),
	HPRatio(1.0f),
	StaminaRatio(1.0f),
	IsFight(false),
	IsFall(false)
{
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM(TEXT("SkeletalMesh'/Game/Knight2/Meshes/Knight_SKM.Knight_SKM'"));
	if (SM.Succeeded()) GetMesh()->SetSkeletalMesh(SM.Object);

	GetCapsuleComponent()->InitCapsuleSize(42.f, 88.0f);
	// GetCapsuleComponent()->SetCollisionProfileName(TEXT("MyPlayerCharacter"));

	UClass* pPlayerCharacterInfo = APlayerCharacter::StaticClass();

	static ConstructorHelpers::FClassFinder<UPlayerCharacterAnimInstance> Player_ABP(TEXT("AnimBlueprint'/Game/MyFolder/PlayerCharacter/Animation/ABP_PlayerCharacter.ABP_PlayerCharacter_C'"));
	if (Player_ABP.Succeeded()) GetMesh()->SetAnimInstanceClass(Player_ABP.Class);
	
	// �� ���� ���÷��̾���Ʈ�ѷ� Ŭ������ ���� ������ְ� �۾��ؾ���
	//if (GetController() != nullptr) Cast<AMyPlayerController>(MyPlayerController = GetController());

	// ī�޶� ���� ĳ���Ͱ� �������� �ʰ� ����
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true; // ĳ���Ͱ� �Է� ������ ������ �����̰� ��	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 300.0f; // �⺻��(420)
	GetCharacterMovement()->AirControl = 0.2f;

	m_CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraArm"));
	m_CameraArm->SetupAttachment(GetCapsuleComponent());
	m_CameraArm->TargetArmLength = 300.0f;
	m_CameraArm->bUsePawnControlRotation = true; // ī�޶� �� ȸ���� ��Ʈ�ѷ��� ������� �Ѵ�.
	m_CameraArm->bEnableCameraLag = true; // ī�޶� ���� ���� ����
	m_CameraArm->bEnableCameraRotationLag = false; // ī�޶� ȸ�� ���� ����
	m_CameraArm->CameraLagSpeed = 3.0f; // ī�޶� ���� �ӵ�
	m_CameraArm->CameraRotationLagSpeed = 2.0f; // ī�޶� ȸ�� ���� �ӵ�
	m_CameraArm->CameraLagMaxDistance = 50.0f; // ī�޶� �ִ� ���� �Ÿ�
	m_CameraArm->SetRelativeLocation(FVector(0.0f, 0.0f, 125.0f));
	m_CameraArm->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f)); // ����� �ʿ���� �ɼ�
	m_CameraArm->bUsePawnControlRotation = true; // ���콺 �����ӿ� ���� ī�޶� ���� ȸ���Ѵ�

	m_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	m_Camera->SetupAttachment(m_CameraArm, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	m_Camera->bUsePawnControlRotation = false; // ī�޶� ���� �����ӿ� ���� ī�޶� �������� �ʴ´�.
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	IsFalling();
}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &APlayerCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("Guard"), this, &APlayerCharacter::Guard);
	PlayerInputComponent->BindAxis(TEXT("Walk"), this, &APlayerCharacter::Walk);

	PlayerInputComponent->BindAxis("CameraTurn", this, &APlayerCharacter::CameraRotationYaw);
	PlayerInputComponent->BindAxis("CameraUpDown", this, &APlayerCharacter::CameraRotationPitch);

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &APlayerCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Roll"), EInputEvent::IE_Pressed, this, &APlayerCharacter::Roll);
	PlayerInputComponent->BindAction(TEXT("Spell"), EInputEvent::IE_Pressed, this, &APlayerCharacter::Spell);
	PlayerInputComponent->BindAction(TEXT("Parry"), EInputEvent::IE_Pressed, this, &APlayerCharacter::Parry);
	PlayerInputComponent->BindAction(TEXT("LightAttack"), EInputEvent::IE_Pressed, this, &APlayerCharacter::LightAttack);
}

void APlayerCharacter::MoveForward(float _Value)
{
	if (Cur_State == EPLAYER_STATE::IDLE || Cur_State == EPLAYER_STATE::MOVE)
	{
		if (_Value == 0.0f)
		{
			// �Է��� ���µ� �ӵ��� ������
			if (GetVelocity().Size() == 0.0f) ChangeState(EPLAYER_STATE::IDLE);
		}
		else ChangeState(EPLAYER_STATE::MOVE);
	}
	else if (Cur_State == EPLAYER_STATE::GUARD)
	{
		ChangeState(EPLAYER_STATE::GUARD);
	}
	else return;

	if ((Controller != nullptr) && (_Value != 0.0f))
	{
		// ��� ������ ������ ã�´�.
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// �� ������ ���ͷ� �����.
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, _Value);

		// MoveForwardValue = _Value; // �ִ��ν��Ͻ����� ���
	}
}

void APlayerCharacter::MoveRight(float _Value)
{
	if (Cur_State == EPLAYER_STATE::IDLE || Cur_State == EPLAYER_STATE::MOVE)
	{
		if (_Value == 0.0f)
		{
			if (GetVelocity().Size() == 0.0f) ChangeState(EPLAYER_STATE::IDLE);
		}
		else ChangeState(EPLAYER_STATE::MOVE);
	}
	else if (Cur_State == EPLAYER_STATE::GUARD)
	{
		ChangeState(EPLAYER_STATE::GUARD);
	}
	else return;

	if ((Controller != nullptr) && (_Value != 0.0f))
	{
		// ��� ������ ���������� ã�´�.
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// ������ ���� ���͸� �����.
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, _Value);

		// MoveLeftRightValue = _Value; // �ִ��ν��Ͻ����� ���
	}
}

void APlayerCharacter::CameraRotationYaw(float _Value)
{
	AddControllerYawInput(_Value);
}

void APlayerCharacter::CameraRotationPitch(float _Value)
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

void APlayerCharacter::Walk(float _Value)
{
	if (_Value == 1)
	{
		GetCharacterMovement()->MaxWalkSpeed = 300.0f;
	}
	else
	{
		// ���� ������ ���¸� return;
		if (Cur_State == EPLAYER_STATE::GUARD)
		{
			GetCharacterMovement()->MaxWalkSpeed = 300.0f;
		}
		else
		{
			GetCharacterMovement()->MaxWalkSpeed = 600.0f;
		}
	}
}

void APlayerCharacter::Jump()
{
	if (Cur_State == EPLAYER_STATE::JUMP
		|| Cur_State == EPLAYER_STATE::FALL
		|| Cur_State == EPLAYER_STATE::ROLL
		|| Cur_State == EPLAYER_STATE::ATTACK)
	{
		return;
	}
	else
	{
		ChangeState(EPLAYER_STATE::JUMP);
		ACharacter::Jump();
	}
}

void APlayerCharacter::Guard(float _Value)
{
	if (Cur_State == EPLAYER_STATE::JUMP
		|| Cur_State == EPLAYER_STATE::FALL
		|| Cur_State == EPLAYER_STATE::ROLL
		|| Cur_State == EPLAYER_STATE::ATTACK
		|| Cur_State == EPLAYER_STATE::SPELL
		|| Cur_State == EPLAYER_STATE::IMPACT_STRONG
		|| Cur_State == EPLAYER_STATE::GUARD_BREAK
		|| Cur_State == EPLAYER_STATE::KNOCK_DOWN
		|| Cur_State == EPLAYER_STATE::DEAD
		|| Cur_State == EPLAYER_STATE::PARRY)
	{
		return;
	}
	else
	{
		if (_Value == 1.0f)
		{
			if (CurStamina <= 0.0f)
			{
				auto AnimInst = Cast<UPlayerCharacterAnimInstance>(GetMesh()->GetAnimInstance());
				if (AnimInst != nullptr)
				{
					ChangeState(EPLAYER_STATE::GUARD_BREAK);
					AnimInst->PlayGuardBreakMontage();
				}				
			}
			else ChangeState(EPLAYER_STATE::GUARD);
		}
		else if (_Value == 0.0f && Cur_State == EPLAYER_STATE::GUARD)
		{
			ChangeState(EPLAYER_STATE::IDLE);
		}
	}
}

void APlayerCharacter::Roll()
{
	if (Cur_State == EPLAYER_STATE::ROLL
		|| Cur_State == EPLAYER_STATE::FALL)
	{
		return;
	}
	else if (Cur_State == EPLAYER_STATE::IDLE
		|| Cur_State == EPLAYER_STATE::MOVE
		|| Cur_State == EPLAYER_STATE::GUARD)
	{
		auto AnimInst = Cast<UPlayerCharacterAnimInstance>(GetMesh()->GetAnimInstance());
		if (AnimInst != nullptr)
		{
			ChangeState(EPLAYER_STATE::ROLL);

			if (IsFight == true) AnimInst->PlayRollCombatMontage();
			else AnimInst->PlayRollIdleMontage();
		}
	}
}

void APlayerCharacter::Spell()
{
	if (Cur_State == EPLAYER_STATE::IDLE
		|| Cur_State == EPLAYER_STATE::MOVE
		|| Cur_State == EPLAYER_STATE::GUARD)
	{
		ChangeState(EPLAYER_STATE::SPELL);
	}
	else return;
}

void APlayerCharacter::Parry()
{
	if (Cur_State == EPLAYER_STATE::IDLE
		|| Cur_State == EPLAYER_STATE::MOVE
		|| Cur_State == EPLAYER_STATE::GUARD)
	{
		auto AnimInst = Cast<UPlayerCharacterAnimInstance>(GetMesh()->GetAnimInstance());
		if (AnimInst != nullptr)
		{
			ChangeState(EPLAYER_STATE::PARRY);
			AnimInst->PlayParryMontage();
		}
	}
	else return;
}

void APlayerCharacter::LightAttack()
{
	auto AnimInst = Cast<UPlayerCharacterAnimInstance>(GetMesh()->GetAnimInstance());
	if (AnimInst != nullptr)
	{
		ChangeState(EPLAYER_STATE::ATTACK);
		AnimInst->PlayLightAttackMontage();
	}
}

void APlayerCharacter::HeavyAttack()
{

}

void APlayerCharacter::ChangeState(EPLAYER_STATE _NextState)
{
	if (Cur_State == _NextState) return;
	else Cur_State = _NextState;
}

void APlayerCharacter::IsFalling()
{
	if (GetMovementComponent()->IsMovingOnGround() == false)
	{
		if (Cur_State == EPLAYER_STATE::JUMP
			|| Cur_State == EPLAYER_STATE::ROLL) return;
		else
		{
			IsFall = true;
			ChangeState(EPLAYER_STATE::FALL);
		}
	}
	else IsFall = false;
}
