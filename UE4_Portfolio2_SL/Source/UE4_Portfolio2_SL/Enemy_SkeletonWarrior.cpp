#include "Enemy_SkeletonWarrior.h"
#include "AI_Base.h"


AEnemy_SkeletonWarrior::AEnemy_SkeletonWarrior()
{
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM_tmp(TEXT("SkeletalMesh'/Game/Skeleton_Animations/mesh/SK_Skeleton_02.SK_Skeleton_02'"));
	if (SM_tmp.Succeeded()) GetMesh()->SetSkeletalMesh(SM_tmp.Object);

	GetCapsuleComponent()->InitCapsuleSize(42.f, 88.0f);
	GetCapsuleComponent()->SetCollisionProfileName("Pawn");

	UClass* pEnemyInfo = AEnemy_SkeletonWarrior::StaticClass();

	static ConstructorHelpers::FClassFinder<UEnemy_SkeletonWarrior_AnimInst> ABP_SkeletonWarrior(TEXT("AnimBlueprint'/Game/MyFolder/Enemy_SkeletonWarrior/ABP_SkeletonWarrior.ABP_SkeletonWarrior_C'"));
	if (ABP_SkeletonWarrior.Succeeded()) GetMesh()->SetAnimInstanceClass(ABP_SkeletonWarrior.Class);

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = 200.0f;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 270.0f, 0.0f);
	//GetCharacterMovement()->JumpZVelocity = 300.0f; // 기본값(420)
	GetCharacterMovement()->AirControl = 0.1f;

	AttackDamage = 10.0f;

	RightWeaponClass = AWeapon_RustySword::StaticClass();
}

void AEnemy_SkeletonWarrior::BeginPlay()
{
	Super::BeginPlay();


	// 전용 장비(오른손) 들고있기
	FName RightArmWeaponSocket(TEXT("RightArm_Weapon"));
	if (GetMesh()->DoesSocketExist(RightArmWeaponSocket))
	{
		auto NewWeapon = GetWorld()->SpawnActor<AWeapon_RustySword>(RightWeaponClass, FVector::ZeroVector, FRotator::ZeroRotator);
		if (NewWeapon != nullptr)
		{
			RightWeapon = NewWeapon;
			NewWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, RightArmWeaponSocket);
			NewWeapon->SetOwner(this);
		}
	}
}

void AEnemy_SkeletonWarrior::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetVelocity().Size() > 0.0f)
	{
		// 조건 조절 필요
		if (Cur_State == EMONSTER_STATE::ATTACK
			|| Cur_State == EMONSTER_STATE::DEAD
			|| Cur_State == EMONSTER_STATE::FALL
			|| Cur_State == EMONSTER_STATE::GUARD_BREAK
			|| Cur_State == EMONSTER_STATE::KNOCK_DOWN
			|| Cur_State == EMONSTER_STATE::IMPACT_WEAK
			|| Cur_State == EMONSTER_STATE::IMPACT_STRONG
			|| Cur_State == EMONSTER_STATE::GUARD_IMPACT_WEAK
			|| Cur_State == EMONSTER_STATE::GUARD_IMPACT_STRONG
			)
		{
			return;
		}
		else ChangeState(EMONSTER_STATE::MOVE);
	}
}

void AEnemy_SkeletonWarrior::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);


	if (!IsPlayerControlled())
	{
		//GetCharacterMovement()->bUseControllerDesiredRotation = false;
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 480.0f, 0.0f);
	}
}

void AEnemy_SkeletonWarrior::ChangeState(EMONSTER_STATE _NextState)
{
	if (Cur_State == _NextState) return;
	else if (Cur_State == EMONSTER_STATE::DEAD) return;
	else Cur_State = _NextState;
}

float AEnemy_SkeletonWarrior::GetCurrentSpeed()
{
	return GetVelocity().Size();
}

float AEnemy_SkeletonWarrior::GetCurHP()
{
	return CurHP;
}

void AEnemy_SkeletonWarrior::SetCurHP(float _Value)
{
	Super::SetCurHP(_Value);
}

AWeapon_Common* AEnemy_SkeletonWarrior::GetRightWeapon()
{
	if (RightWeapon == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("RightWeapon is Nullptr"));
		return nullptr;
	}
	else return RightWeapon;
}

void AEnemy_SkeletonWarrior::SetRightWeapon(AWeapon_RustySword* _NewWeapon)
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

void AEnemy_SkeletonWarrior::RandomAttackAll1()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			IsAttacking = true;

			int32 tmp = FMath::RandRange(0, 8);
			if (tmp == 0) ComboAttack01();
			else if (tmp == 1) ComboAttack02();
			else if (tmp == 2) ComboAttack03();
			else if (tmp == 3) SingleAttackStand01();
			else if (tmp == 4) SingleAttackStand02();
			else if (tmp == 5) SingleAttackStand03();
			else if (tmp == 6) SingleAttackMove01();
			else if (tmp == 7) SingleAttackMove02();
			else if (tmp == 8) SingleAttackMove03();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::ComboAttack01()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			pAnimInst->PlayCombo01StandMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::ComboAttack02()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			pAnimInst->PlayCombo02MoveMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::ComboAttack03()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			pAnimInst->PlayCombo03MixMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::ComboAttackRandom()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			int32 tmp = FMath::RandRange(0, 2);
			if (tmp == 0) ComboAttack01();
			else if (tmp == 1) ComboAttack02();
			else if (tmp == 2) ComboAttack03();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::SingleAttackStand01()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			pAnimInst->PlayAttackSlashStandMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::SingleAttackStand02()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			pAnimInst->PlayAttackStrikeStandMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::SingleAttackStand03()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			pAnimInst->PlayAttackThrustStandMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::SingleAttackMove01()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			pAnimInst->PlayAttackSlashMoveMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::SingleAttackMove02()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			pAnimInst->PlayAttackStrikeMoveMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::SingleAttackMove03()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			pAnimInst->PlayAttackThrustMoveMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::SingleAttackRandom()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			int32 tmp = FMath::RandRange(0, 6);
			if (tmp == 0) SingleAttackStand01();
			else if (tmp == 1) SingleAttackStand02();
			else if (tmp == 2) SingleAttackStand03();
			else if (tmp == 3) SingleAttackMove01();
			else if (tmp == 4) SingleAttackMove02();
			else if (tmp == 5) SingleAttackMove03();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::PlayHitAniamtion(float _Degree)
{
	Super::PlayHitAniamtion(_Degree);

	auto pAnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		ChangeState(EMONSTER_STATE::IMPACT_WEAK);
		
		if (_Degree >= 90.0f)
		{
			pAnimInst->PlayImpactMontage();
		}
		else if (_Degree < 90.0f)
		{
			pAnimInst->PlayHitBackMontage();
		}

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_SkeletonWarrior::Dead()
{
	Super::Dead();

	auto pAnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		ChangeState(EMONSTER_STATE::DEAD);
		pAnimInst->PlayDeadMontage();		

		// TODO (효과음?)
	}
	else return;
}