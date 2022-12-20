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
	
	// ↓ 현재 내플레이어컨트롤러 클래스가 없음 만들어주고 작업해야함
	//if (GetController() != nullptr) Cast<AMyPlayerController>(MyPlayerController = GetController());

	// 카메라에 따라서 캐릭터가 움직이지 않게 해줌
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true; // 캐릭터가 입력 방향으로 회전 보간하게 함	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 300.0f; // 기본값(420)
	GetCharacterMovement()->AirControl = 0.2f;

	m_CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraArm"));
	m_CameraArm->SetupAttachment(GetCapsuleComponent());
	m_CameraArm->TargetArmLength = 300.0f;
	m_CameraArm->bUsePawnControlRotation = true; // 카메라 봉 회전을 컨트롤러에 기반으로 한다.
	m_CameraArm->bEnableCameraLag = true; // 카메라 지연 추적 여부
	m_CameraArm->bEnableCameraRotationLag = false; // 카메라 회전 지연 여부
	m_CameraArm->CameraLagSpeed = 3.0f; // 카메라 추적 속도
	m_CameraArm->CameraRotationLagSpeed = 2.0f; // 카메라 회전 추적 속도
	m_CameraArm->CameraLagMaxDistance = 50.0f; // 카메라 최대 지연 거리
	m_CameraArm->SetRelativeLocation(FVector(0.0f, 0.0f, 125.0f));
	m_CameraArm->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f)); // 현재는 필요없는 옵션
	m_CameraArm->bUsePawnControlRotation = true; // 마우스 움직임에 따라서 카메라 봉을 회전한다

	m_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	m_Camera->SetupAttachment(m_CameraArm);
	m_Camera->bUsePawnControlRotation = false; // 카메라 봉의 움직임에 따라 카메라가 움직이지 않는다.


	// 시작 장비 클래스 정보 저장하기
	RightWeaponClass = AWeapon_Default::StaticClass();
	LeftWeaponClass = AShield_Default::StaticClass();	
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	

	// 디폴트 장비(오른손) 들고있기
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

	// 디폴트 장비(왼손) 들고있기
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
	SetAttackDamage(); // 틱마다 공격 대미지를 계산함.
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
			// 입력은 없는데 속도가 있으면
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
		// 어느 방향이 앞인지 찾는다.
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// 앞 방향을 벡터로 만든다.
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, _Value);

		ForwardBackInputValue = _Value; // LeftRightInputValue 값 조절용
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
		// 어느 방향이 오른쪽인지 찾는다.
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// 오른쪽 방향 벡터를 만든다.
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, _Value);

		// 애님인스턴스에서 Strafe Movement에 사용
		// 락온 상태에서 앞뒤 입력이 있을 경우 (대각선 이동)
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
	// 락온된 대상이 있으면 마우스 회전을 막는다.
	if (IsLockTargetExist == true) return;
	else
	{
		AddControllerYawInput(_Value);
	}	
}

void APlayerCharacter::CameraRotationPitch(float _Value)
{
	// 락온된 대상이 있으면 마우스 회전을 막는다.
	if (IsLockTargetExist == true) return;
	else
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
}

void APlayerCharacter::Walk(float _Value)
{
	// 단순 최대 속도 제한

	if (_Value == 1)
	{
		GetCharacterMovement()->MaxWalkSpeed = 200.0f;
	}
	else
	{
		// 가드 움직임 상태면 return;
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
		IsAttacking = true; // 공격중으로 전환
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

		IsAttacking = true; // 공격중으로 전환
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
		// 카메라 앞 방향(플레이어 시점)을 가져옴, 위 방향으로 0도 보정
		FVector CameraForwardVector = GetFollowCamera()->GetForwardVector().RotateAngleAxis(0.0f, FVector::LeftVector);
		// 카메라 시점 기준으로 왼쪽 방향으로 60도 보정
		FVector LeftEndVector = CameraForwardVector.RotateAngleAxis(-60.0f, FVector::UpVector);
		// 레이 트레이싱 출발 지점은 카메라
		FVector StartPoint = GetFollowCamera()->GetComponentLocation();

		// 락온 가능한 오브젝트 유형들
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypeToLock;
		// 락온 가능한 오브젝트 유형에 ObjectTypeQuery3를 추가
		ObjectTypeToLock.Add(EObjectTypeQuery::ObjectTypeQuery3);

		// 락온 하지 않을 대상들
		TArray<AActor*> ActorsToNotTargeting;
		// 락온 하지 않을 대상에 자신을 넣는다.
		ActorsToNotTargeting.Add(this);

		// FCollisionQueryParams-> 탐색 방법에 대한 설정 값을 모은 구조체
		FCollisionQueryParams QueryParams(NAME_None);		

		// 탐지된 액터 가장 가까운 지점 디폴트값 설정
		float ClosestDist = 1500.0f;
		// 탐지된 액터중 가장 가까운 액터
		AActor* ClosestHitActor = nullptr;

		FHitResult HitResult;
		// 0도 ~ 120도 까지 5도 씩 레이 발사
		for (int i = 0; i < 120; i += 5)
		{
			FVector Direction = LeftEndVector.RotateAngleAxis(i, FVector::UpVector);
			FVector EndPoint = StartPoint + Direction * 1500.0f;
			bool bIsHit = UKismetSystemLibrary::SphereTraceSingleForObjects(
				GetWorld(),
				StartPoint,
				EndPoint,
				200.0f, // 구체의 두께(너무 두꺼우면 내 뒤에 있는 대상도 탐지됨)
				ObjectTypeToLock, // 탐지된 대상들 저장할 배열
				false, // 복잡한 충돌 판정 여부
				ActorsToNotTargeting, // 무시할 대상들
				EDrawDebugTrace::None, // EDrawDebugTrace::ForDuration
				HitResult,
				true, // 자신은 무시할지 여부
				FLinearColor::Green, // 감지X
				FLinearColor::Red, // 감지O
				2.0f // 디버그 그리기 지속 시간
			);

			// 새롭게 탐지된 대상이 있고, 대상이 기존 대상보다 가까우면
			if (bIsHit == true && HitResult.Distance < ClosestDist)
			{
				// 최단 거리 갱신
				ClosestDist = HitResult.Distance;
				// 탐지된 대상 가져오기
				ClosestHitActor = HitResult.Actor.Get();
			}
		}

		if (ClosestHitActor != nullptr) // 탐지된 대상이 있으면
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

// 락온 된 대상 보기
void APlayerCharacter::LookLockOnTarget(float DeltaSeconds)
{
	if (LockedOnTarget != nullptr)
	{
		float PlayerToTargetDist = UKismetMathLibrary::Vector_Distance(this->GetActorLocation(), LockedOnTarget->GetActorLocation());
		// 일정 거리(1500.0f, 현재 락온 범위와 동일) 이상 벗어나면 락온 해제
		if (PlayerToTargetDist > 1500.0f)
		{
			IsLockTargetExist = false;
			LockedOnTarget = nullptr;
			return;
		}

		// 대상이 몬스터고 체력 확인
		auto IsMonster = Cast<AEnemy_Base>(LockedOnTarget);
		if (IsMonster != nullptr)
		{
			// 체력이 없으면(죽었으면) 락온 해제
			if (IsMonster->GetCurHP() <= 0.0f)
			{
				IsLockTargetExist = false;
				LockedOnTarget = nullptr;
			}
		}
		// 대상이 플레이어고 체력 확인
		auto IsPlayer = Cast<APlayerCharacter>(LockedOnTarget);
		if (IsPlayer != nullptr)
		{
			// 체력이 없으면(죽었으면) 락온 해제
			if (IsPlayer->GetCurHP() <= 0.0f)
			{
				IsLockTargetExist = false;
				LockedOnTarget = nullptr;
			}
		}

		if (LockedOnTarget != nullptr)
		{
			FVector LockedOnLocation = LockedOnTarget->GetActorLocation();
			LockedOnLocation.Z -= 50.0f; // 대상이 잘 보이게 시점 살짝 높여주기
			// 대상을 바라보는 회전값
			FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), LockedOnLocation);
			// 현재 시점에서 대상을 바라보는 시점으로 회전보간
			FRotator InterpRotation = UKismetMathLibrary::RInterpTo(GetController()->GetControlRotation(), LookAtRotation, DeltaSeconds, 10.0f);
			// 보간 값을 기준으로 현재 카메라 회전값 수정하기
			GetController()->SetControlRotation(FRotator(InterpRotation.Pitch, InterpRotation.Yaw, GetController()->GetControlRotation().Roll));

			// 자동 회전 보간 꺼주기
			GetCharacterMovement()->bOrientRotationToMovement = false;

			// 락온 대상을 주시하면서 걷기(Strafe Movement)를 위한 캐릭터 회전
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
	// 락온 상태가 아니면
	if (IsLockTargetExist == false)
	{
		return GetVelocity().Size(); // 일반적인 속도 계산
	}
	// 락온 상태면
	else if(IsLockTargetExist == true)
	{
		// 앞으로 가면 속도는 + 값
		if (ForwardBackInputValue > 0.0f)
		{
			return GetVelocity().Size();
		}
		// 뒤로 가면 속도는 - 값
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
	if (_Value > 0) // +는 회복 관련
	{
		CurHP += _Value;

		if (CurHP >= MaxHP) CurHP = MaxHP;
	}
	else if (_Value < 0) // -는 입은 피해
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

			// 피직스 애셋과 캡슐 콜리전 변경
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
	if (RightWeapon != nullptr) // 오른쪽 장비가 있으면
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