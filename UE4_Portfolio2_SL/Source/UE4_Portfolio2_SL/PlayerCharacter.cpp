#include "PlayerCharacter.h"
#include "Enemy_Base.h"
#include "Kismet/KismetMathLibrary.h"


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
	DefaultDamage(10.0f),
	IsLockTargetExist(false),
	LeftRightInputValue(0.0f),
	CurrentSpeed(0.0f)
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

	GetCharacterMovement()->bOrientRotationToMovement = true; // ĳ���Ͱ� �Է� �������� ȸ�� �����ϰ� ��	
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
	m_Camera->SetupAttachment(m_CameraArm);
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
	LookLockOnTarget(DeltaTime);
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
	PlayerInputComponent->BindAction(TEXT("LockOn"), EInputEvent::IE_Pressed, this, &APlayerCharacter::LockOn);
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

		ForwardBackInputValue = _Value; // LeftRightInputValue �� ������
	}
	else if ((Controller != nullptr) && (_Value == 0.0f))
	{
		ForwardBackInputValue = 0.0f;
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

		// �ִ��ν��Ͻ����� Strafe Movement�� ���
		// ���� ���¿��� �յ� �Է��� ���� ��� (�밢�� �̵�)
		if ((ForwardBackInputValue >= 1.0f || ForwardBackInputValue <= -1.0f) && IsLockTargetExist == true)
		{
			LeftRightInputValue = _Value * 0.5f;
		}
		else LeftRightInputValue = _Value;
	}
	else if ((Controller != nullptr) && (_Value == 0.0f))
	{
		LeftRightInputValue = 0.0f;
	}
}

void APlayerCharacter::CameraRotationYaw(float _Value)
{
	// ���µ� ����� ������ ���콺 ȸ���� ���´�.
	if (IsLockTargetExist == true) return;
	else
	{
		AddControllerYawInput(_Value);
	}	
}

void APlayerCharacter::CameraRotationPitch(float _Value)
{
	// ���µ� ����� ������ ���콺 ȸ���� ���´�.
	if (IsLockTargetExist == true) return;
	else
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
}

void APlayerCharacter::Walk(float _Value)
{
	// �ܼ� �ִ� �ӵ� ����

	if (_Value == 1)
	{
		GetCharacterMovement()->MaxWalkSpeed = 200.0f;
	}
	else
	{
		// ���� ������ ���¸� return;
		if (Cur_State == EPLAYER_STATE::GUARD)
		{
			GetCharacterMovement()->MaxWalkSpeed = 200.0f;
		}
		else
		{
			GetCharacterMovement()->MaxWalkSpeed = 400.0f;
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
		|| Cur_State == EPLAYER_STATE::FALL
		|| Cur_State == EPLAYER_STATE::JUMP
		|| Cur_State == EPLAYER_STATE::SPELL)
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

void APlayerCharacter::LockOn()
{
	if (IsLockTargetExist == false)
	{
		// ī�޶� �� ����(�÷��̾� ����)�� ������, �� �������� 0�� ����
		FVector CameraForwardVector = GetFollowCamera()->GetForwardVector().RotateAngleAxis(0.0f, FVector::LeftVector);
		// ī�޶� ���� �������� ���� �������� 60�� ����
		FVector LeftEndVector = CameraForwardVector.RotateAngleAxis(-60.0f, FVector::UpVector);
		// ���� Ʈ���̽� ��� ������ ī�޶�
		FVector StartPoint = GetFollowCamera()->GetComponentLocation();

		// ���� ������ ������Ʈ ������
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypeToLock;
		// ���� ������ ������Ʈ ������ ObjectTypeQuery3�� �߰�
		ObjectTypeToLock.Add(EObjectTypeQuery::ObjectTypeQuery3);

		// ���� ���� ���� ����
		TArray<AActor*> ActorsToNotTargeting;
		// ���� ���� ���� ��� �ڽ��� �ִ´�.
		ActorsToNotTargeting.Add(this);

		// FCollisionQueryParams-> Ž�� ����� ���� ���� ���� ���� ����ü
		FCollisionQueryParams QueryParams(NAME_None);		

		// Ž���� ���� ���� ����� ���� ����Ʈ�� ����
		float ClosestDist = 1500.0f;
		// Ž���� ������ ���� ����� ����
		AActor* ClosestHitActor = nullptr;

		FHitResult HitResult;
		// 0�� ~ 120�� ���� 5�� �� ���� �߻�
		for (int i = 0; i < 120; i += 5)
		{
			FVector Direction = LeftEndVector.RotateAngleAxis(i, FVector::UpVector);
			FVector EndPoint = StartPoint + Direction * 1500.0f;
			bool bIsHit = UKismetSystemLibrary::SphereTraceSingleForObjects(
				GetWorld(),
				StartPoint,
				EndPoint,
				200.0f, // ��ü�� �β�(�ʹ� �β���� �� �ڿ� �ִ� ��� Ž����)
				ObjectTypeToLock, // Ž���� ���� ������ �迭
				false, // ������ �浹 ���� ����
				ActorsToNotTargeting, // ������ ����
				EDrawDebugTrace::None, // EDrawDebugTrace::ForDuration
				HitResult,
				true, // �ڽ��� �������� ����
				FLinearColor::Green, // ����X
				FLinearColor::Red, // ����O
				2.0f // ����� �׸��� ���� �ð�
			);

			// ���Ӱ� Ž���� ����� �ְ�, ����� ���� ��󺸴� ������
			if (bIsHit == true && HitResult.Distance < ClosestDist)
			{
				// �ִ� �Ÿ� ����
				ClosestDist = HitResult.Distance;
				// Ž���� ��� ��������
				ClosestHitActor = HitResult.Actor.Get();
			}
		}

		if (ClosestHitActor != nullptr) // Ž���� ����� ������
		{
			IsLockTargetExist = true;
			LockedOnTarget = ClosestHitActor;
		}
	}
	else
	{
		IsLockTargetExist = false;
		LockedOnTarget = nullptr;
	}

	if (LockedOnTarget != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, LockedOnTarget->GetName());
	}
}

// ���� �� ��� ����
void APlayerCharacter::LookLockOnTarget(float DeltaSeconds)
{
	if (LockedOnTarget != nullptr)
	{
		float PlayerToTargetDist = UKismetMathLibrary::Vector_Distance(this->GetActorLocation(), LockedOnTarget->GetActorLocation());
		// ���� �Ÿ�(1500.0f, ���� ���� ������ ����) �̻� ����� ���� ����
		if (PlayerToTargetDist > 1500.0f)
		{
			IsLockTargetExist = false;
			LockedOnTarget = nullptr;
			return;
		}

		// ����� ���Ͱ� ü�� Ȯ��
		auto IsMonster = Cast<AEnemy_Base>(LockedOnTarget);
		if (IsMonster != nullptr)
		{
			// ü���� ������(�׾�����) ���� ����
			if (IsMonster->GetCurHP() <= 0.0f)
			{
				IsLockTargetExist = false;
				LockedOnTarget = nullptr;
			}
		}
		// ����� �÷��̾�� ü�� Ȯ��
		auto IsPlayer = Cast<APlayerCharacter>(LockedOnTarget);
		if (IsPlayer != nullptr)
		{
			// ü���� ������(�׾�����) ���� ����
			if (IsPlayer->GetCurHP() <= 0.0f)
			{
				IsLockTargetExist = false;
				LockedOnTarget = nullptr;
			}
		}

		if (LockedOnTarget != nullptr)
		{
			FVector LockedOnLocation = LockedOnTarget->GetActorLocation();
			LockedOnLocation.Z -= 50.0f; // ����� �� ���̰� ���� ��¦ �����ֱ�
			// ����� �ٶ󺸴� ȸ����
			FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), LockedOnLocation);
			// ���� �������� ����� �ٶ󺸴� �������� ȸ������
			FRotator InterpRotation = UKismetMathLibrary::RInterpTo(GetController()->GetControlRotation(), LookAtRotation, DeltaSeconds, 10.0f);
			// ���� ���� �������� ���� ī�޶� ȸ���� �����ϱ�
			GetController()->SetControlRotation(FRotator(InterpRotation.Pitch, InterpRotation.Yaw, GetController()->GetControlRotation().Roll));

			// �ڵ� ȸ�� ���� ���ֱ�
			GetCharacterMovement()->bOrientRotationToMovement = false;

			// ���� ����� �ֽ��ϸ鼭 �ȱ�(Strafe Movement)�� ���� ĳ���� ȸ��
			FRotator CharacterInterpRotation = UKismetMathLibrary::RInterpTo(GetActorRotation(), FRotator(GetActorRotation().Pitch, GetControlRotation().Yaw, GetActorRotation().Roll), DeltaSeconds, 10.0f);
			GetController()->GetPawn()->SetActorRotation(CharacterInterpRotation);
		}
		
	}
	else
	{
		GetCharacterMovement()->bOrientRotationToMovement = true;
		return;
	}
}

bool APlayerCharacter::GetIsLockOn()
{
	return IsLockTargetExist;
}

float APlayerCharacter::GetLeftRightInputValue()
{
	return LeftRightInputValue;
}

float APlayerCharacter::GetCurrentSpeed()
{
	// ���� ���°� �ƴϸ�
	if (IsLockTargetExist == false)
	{
		return GetVelocity().Size(); // �Ϲ����� �ӵ� ���
	}
	// ���� ���¸�
	else if(IsLockTargetExist == true)
	{
		// ������ ���� �ӵ��� + ��
		if (ForwardBackInputValue > 0.0f)
		{
			return GetVelocity().Size();
		}
		// �ڷ� ���� �ӵ��� - ��
		else if (ForwardBackInputValue < 0.0f)
		{
			return GetVelocity().Size() * (-1.0f);
		}
	}
	
	return GetVelocity().Size();
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
			Dead();
		}
	}

	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::SanitizeFloat(CurHP));
}

void APlayerCharacter::Dead()
{
	if (GetCurHP() <= 0.0f)
	{
		auto AnimInst = Cast<UPlayerCharacterAnimInstance>(GetMesh()->GetAnimInstance());
		if (AnimInst != nullptr)
		{
			ChangeState(EPLAYER_STATE::DEAD);

			// ������ �ּ°� ĸ�� �ݸ��� ����
			GetMesh()->SetCollisionProfileName("NoCollision");
			GetCapsuleComponent()->SetCollisionProfileName("OverlapAllObjectsIgnoreAllTrace");
		}
		else return;
	}
	else return;
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

	if(EventInstigator != nullptr) GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, TEXT("Attacker Name: ") + EventInstigator->GetPawn()->GetName());
	if(DamageCauser != nullptr)	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, TEXT("Used Tool: ") + DamageCauser->GetName());

	

	return Damage;
}