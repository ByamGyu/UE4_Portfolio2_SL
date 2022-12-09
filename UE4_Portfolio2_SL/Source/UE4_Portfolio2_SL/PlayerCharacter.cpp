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
	IsAttacking(false),
	IsAttackButtonWhenAttack(false),
	ComboCnt(0),
	IsFall(false),
	RightWeapon(nullptr),
	LeftWeapon(nullptr),
	AttackDamage(0.0f),
	DefaultDamage(10.0f)
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

	// ���� ��� Ŭ���� ���� �����ϱ�
	RightWeaponClass = AWeapon_Default::StaticClass();
	LeftWeaponClass = AShield_Default::StaticClass();	
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	

	// ����Ʈ ���(������) ����ֱ�
	FName RightArmWeaponSocket(TEXT("RightArm_Weapon"));
	if (GetMesh()->DoesSocketExist(RightArmWeaponSocket))
	{
		auto NewWeapon = GetWorld()->SpawnActor<AWeapon_Default>(RightWeaponClass, FVector::ZeroVector, FRotator::ZeroRotator);
		if (NewWeapon != nullptr)
		{
			RightWeapon = NewWeapon;
			NewWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, RightArmWeaponSocket);
			NewWeapon->SetOwner(this);
		}
	}

	// ����Ʈ ���(�޼�) ����ֱ�
	FName LeftArmWeaponSocket(TEXT("LeftArm_Weapon"));
	if (GetMesh()->DoesSocketExist(LeftArmWeaponSocket))
	{
		auto NewWeapon = GetWorld()->SpawnActor<AShield_Default>(LeftWeaponClass, FVector::ZeroVector, FRotator::ZeroRotator);
		if (NewWeapon != nullptr)
		{
			LeftWeapon = NewWeapon;
			NewWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, LeftArmWeaponSocket);
			NewWeapon->SetOwner(this);
		}
	}
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	IsFalling();
	SetAttackDamage(); // ƽ���� ���� ������� �����.
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
	PlayerInputComponent->BindAction(TEXT("HeavyAttack"), EInputEvent::IE_Pressed, this, &APlayerCharacter::HeavyAttack);
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
		|| Cur_State == EPLAYER_STATE::ATTACK_LIGHT
		|| Cur_State == EPLAYER_STATE::ATTACK_HEAVY
		|| Cur_State == EPLAYER_STATE::ATTACK_KICK
		|| Cur_State == EPLAYER_STATE::ATTACK_GUARDBREAK)
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
		|| Cur_State == EPLAYER_STATE::ATTACK_LIGHT
		|| Cur_State == EPLAYER_STATE::ATTACK_HEAVY
		|| Cur_State == EPLAYER_STATE::ATTACK_KICK
		|| Cur_State == EPLAYER_STATE::ATTACK_GUARDBREAK
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
	if (Cur_State == EPLAYER_STATE::DEAD
		|| Cur_State == EPLAYER_STATE::FALL
		|| Cur_State == EPLAYER_STATE::GUARD_BREAK
		|| Cur_State == EPLAYER_STATE::GUARD_IMPACT_STRONG
		|| Cur_State == EPLAYER_STATE::GUARD_IMPACT_WEAK
		|| Cur_State == EPLAYER_STATE::IMPACT_STRONG
		|| Cur_State == EPLAYER_STATE::IMPACT_WEAK
		|| Cur_State == EPLAYER_STATE::JUMP
		|| Cur_State == EPLAYER_STATE::KNOCK_DOWN
		|| Cur_State == EPLAYER_STATE::PARRY
		|| Cur_State == EPLAYER_STATE::ROLL
		|| Cur_State == EPLAYER_STATE::SPELL) return;

	auto AnimInst = Cast<UPlayerCharacterAnimInstance>(GetMesh()->GetAnimInstance());
	if (AnimInst == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("PlayerCharacter::LightAttack(): AnimInst is Null"));
		return;
	}

	if (IsAttacking == false)
	{
		IsAttacking = true; // ���������� ��ȯ
		ChangeState(EPLAYER_STATE::ATTACK_LIGHT);
		AnimInst->PlayLightAttackMontage();
	}
	else if (IsAttacking == true)
	{
		IsAttackButtonWhenAttack = true;
	}
}

void APlayerCharacter::HeavyAttack()
{
	if (Cur_State == EPLAYER_STATE::DEAD
		|| Cur_State == EPLAYER_STATE::FALL
		|| Cur_State == EPLAYER_STATE::GUARD_BREAK
		|| Cur_State == EPLAYER_STATE::GUARD_IMPACT_STRONG
		|| Cur_State == EPLAYER_STATE::GUARD_IMPACT_WEAK
		|| Cur_State == EPLAYER_STATE::IMPACT_STRONG
		|| Cur_State == EPLAYER_STATE::IMPACT_WEAK
		|| Cur_State == EPLAYER_STATE::JUMP
		|| Cur_State == EPLAYER_STATE::KNOCK_DOWN
		|| Cur_State == EPLAYER_STATE::PARRY
		|| Cur_State == EPLAYER_STATE::ROLL
		|| Cur_State == EPLAYER_STATE::SPELL)
	{
		return;
	}

	

	auto AnimInst = Cast<UPlayerCharacterAnimInstance>(GetMesh()->GetAnimInstance());
	if (AnimInst == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("PlayerCharacter::LightAttack(): AnimInst is Null"));
		return;
	}

	if (IsAttacking == false)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("PlayerCharacter::HeavyAttack()"));

		IsAttacking = true; // ���������� ��ȯ
		ChangeState(EPLAYER_STATE::ATTACK_HEAVY);
		AnimInst->PlayHeavyAttackMontage();
	}
	else if (IsAttacking == true)
	{
		IsAttackButtonWhenAttack = true;
	}
}

AWeapon_Default* APlayerCharacter::GetRightWeapon()
{
	if (RightWeapon == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("RightWeapon is Nullptr"));
		return nullptr;
	}
	else return RightWeapon;
}

void APlayerCharacter::SetRightWeapon(AWeapon_Default* _NewWeapon)
{
	FName RightArmWeaponSocket(TEXT("RightArm_Weapon"));

	if (_NewWeapon != nullptr)
	{
		RightWeapon = _NewWeapon;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("_NewRightWeapon is Nullptr"));
	}
}

AShield_Default* APlayerCharacter::GetLeftWeapon()
{
	if (LeftWeapon == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("RightWeapon is Nullptr"));
		return nullptr;
	}
	else return LeftWeapon;
}

void APlayerCharacter::SetLeftWeapon(AShield_Default* _NewWeapon)
{
	FName RightArmWeaponSocket(TEXT("LeftArm_Weapon"));

	if (_NewWeapon != nullptr)
	{
		LeftWeapon = _NewWeapon;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("_NewLeftWeapon is Nullptr"));
	}
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

void APlayerCharacter::SetCurHP(float _Value)
{
	if (_Value > 0) // +�� ȸ�� ����
	{
		CurHP += _Value;

		if (CurHP >= MaxHP) CurHP = MaxHP;
	}
	else if (_Value < 0) // -�� ���� ����
	{
		CurHP += _Value;

		if (CurHP <= 0.0f)
		{
			CurHP = 0;
			ChangeState(EPLAYER_STATE::DEAD);
		}
	}

	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::SanitizeFloat(CurHP));
}

void APlayerCharacter::PlayImpactAnimation()
{
	auto AnimInst = Cast<UPlayerCharacterAnimInstance>(GetMesh()->GetAnimInstance());
	if (AnimInst == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("PlayerCharacter AnimInst is Null"));
		return;
	}
	else
	{
		ChangeState(EPLAYER_STATE::IMPACT_STRONG);
		AnimInst->PlayImpactStrongMontage();
	}
}

void APlayerCharacter::PlayShieldBlockWeakAnimation()
{
	auto AnimInst = Cast<UPlayerCharacterAnimInstance>(GetMesh()->GetAnimInstance());
	if (AnimInst == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("PlayerCharacter AnimInst is Null"));
		return;
	}
	else
	{
		ChangeState(EPLAYER_STATE::GUARD_IMPACT_WEAK);
		AnimInst->PlayShieldBlockWeak();
	}
}

void APlayerCharacter::PlayShieldBlockStrongAnimation()
{
	auto AnimInst = Cast<UPlayerCharacterAnimInstance>(GetMesh()->GetAnimInstance());
	if (AnimInst == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("PlayerCharacter AnimInst is Null"));
		return;
	}
	else
	{
		ChangeState(EPLAYER_STATE::GUARD_IMPACT_STRONG);
		AnimInst->PlayShieldBlockStrong();
	}
}

void APlayerCharacter::SetAttackDamage()
{
	if (RightWeapon != nullptr) // ������ ��� ������
	{
		AttackDamage = DefaultDamage + RightWeapon->GetWeaponDamage();
	}
}

float APlayerCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float Damage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	SetCurHP(-Damage);

	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, TEXT("Damage Amount: ") + FString::SanitizeFloat(DamageAmount));

	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, TEXT("Attacker Name: ") + EventInstigator->GetPawn()->GetName());

	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, TEXT("Used Tool: ") + DamageCauser->GetName());

	

	return Damage;
}
