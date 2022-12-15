#include "Enemy_SkeletonWarrior.h"


AEnemy_SkeletonWarrior::AEnemy_SkeletonWarrior()
	: Cur_State(EMONSTER_STATE::IDLE),
	MaxHP(60.0f),
	CurHP(MaxHP),
	HPRatio(1.0f),
	AttackDamage(10.0f),
	IsAttacking(false),
	IsFight(false)
{
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM(TEXT("SkeletalMesh'/Game/Skeleton_Animations/mesh/SK_Skeleton_02.SK_Skeleton_02'"));
	if (SM.Succeeded()) GetMesh()->SetSkeletalMesh(SM.Object);

	GetCapsuleComponent()->InitCapsuleSize(42.f, 88.0f);
	GetCapsuleComponent()->SetCollisionProfileName("Pawn");

	UClass* pEnemyInfo = AEnemy_SkeletonWarrior::StaticClass();

	static ConstructorHelpers::FClassFinder<UEnemy_SkeletonWarrior_AnimInst> ABP_SkeletonWarrior(TEXT("AnimBlueprint'/Game/MyFolder/Enemy_SkeletonWarrior/ABP_SkeletonWarrior.ABP_SkeletonWarrior_C'"));
	if (ABP_SkeletonWarrior.Succeeded()) GetMesh()->SetAnimInstanceClass(ABP_SkeletonWarrior.Class);

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = 200.0f;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 270.0f, 0.0f);
	//GetCharacterMovement()->JumpZVelocity = 300.0f; // �⺻��(420)
	GetCharacterMovement()->AirControl = 0.1f;


}

void AEnemy_SkeletonWarrior::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemy_SkeletonWarrior::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetVelocity().Size() > 0.0f)
	{
		// ���� ���� �ʿ�
		if (Cur_State == EMONSTER_STATE::ATTACK
			|| Cur_State == EMONSTER_STATE::DEAD
			|| Cur_State == EMONSTER_STATE::FALL
			|| Cur_State == EMONSTER_STATE::GUARD_BREAK
			|| Cur_State == EMONSTER_STATE::KNOCK_DOWN)
		{
			return;
		}
		ChangeState(EMONSTER_STATE::MOVE);
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

void AEnemy_SkeletonWarrior::SetCurHP(float _Value)
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

	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString("SkeletonHP: ") + FString::SanitizeFloat(CurHP));
}

void AEnemy_SkeletonWarrior::RandomAttackAll()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE)
	{
		auto AnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (AnimInst != nullptr)
		{
			IsAttacking = true;

			int32 tmp = FMath::RandRange(0, 8);
			if(tmp == 0) ComboAttack01();
			else if(tmp == 1) ComboAttack02();
			else if(tmp == 2) ComboAttack03();
			else if(tmp == 3) SingleAttackStand01();
			else if(tmp == 4) SingleAttackStand02();
			else if(tmp == 5) SingleAttackStand03();
			else if(tmp == 6) SingleAttackMove01();
			else if(tmp == 7) SingleAttackMove02();
			else if(tmp == 8) SingleAttackMove03();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::ComboAttack01()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE)
	{
		auto AnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (AnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			AnimInst->PlayCombo01StandMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::ComboAttack02()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE)
	{
		auto AnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (AnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			AnimInst->PlayCombo02MoveMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::ComboAttack03()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE)
	{
		auto AnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (AnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			AnimInst->PlayCombo03MixMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::ComboAttackRandom()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE)
	{
		auto AnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (AnimInst != nullptr)
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
		|| Cur_State == EMONSTER_STATE::MOVE)
	{
		auto AnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (AnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			AnimInst->PlayAttackSlashStandMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::SingleAttackStand02()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE)
	{
		auto AnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (AnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			AnimInst->PlayAttackStrikeStandMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::SingleAttackStand03()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE)
	{
		auto AnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (AnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			AnimInst->PlayAttackThrustStandMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::SingleAttackMove01()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE)
	{
		auto AnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (AnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			AnimInst->PlayAttackSlashMoveMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::SingleAttackMove02()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE)
	{
		auto AnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (AnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			AnimInst->PlayAttackStrikeMoveMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::SingleAttackMove03()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE)
	{
		auto AnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (AnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			AnimInst->PlayAttackThrustMoveMontage();
		}
		else return;
	}
}

void AEnemy_SkeletonWarrior::SingleAttackRandom()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE)
	{
		auto AnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
		if (AnimInst != nullptr)
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

void AEnemy_SkeletonWarrior::Dead()
{
	auto AnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
	if (AnimInst != nullptr)
	{
		ChangeState(EMONSTER_STATE::DEAD);
		AnimInst->PlayDeadMontage();
		GetMesh()->SetCollisionProfileName("NoCollision");
	}
	else return;
}

float AEnemy_SkeletonWarrior::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float Damage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	SetCurHP(-Damage);

	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, TEXT("Damage Amount: ") + FString::SanitizeFloat(DamageAmount));

	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, TEXT("Attacker Name: ") + EventInstigator->GetPawn()->GetName());

	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, TEXT("Used Tool: ") + DamageCauser->GetName());



	return Damage;
}