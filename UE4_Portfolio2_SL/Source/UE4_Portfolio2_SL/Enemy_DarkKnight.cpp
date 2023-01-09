#include "Enemy_DarkKnight.h"
#include "AI_Base.h"


AEnemy_DarkKnight::AEnemy_DarkKnight()
{
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM_tmp(TEXT("SkeletalMesh'/Game/Fallen_Knight/Mesh/SK_Fallen_Knight.SK_Fallen_Knight'"));
	if (SM_tmp.Succeeded()) GetMesh()->SetSkeletalMesh(SM_tmp.Object);

	GetCapsuleComponent()->InitCapsuleSize(42.f, 88.0f);
	GetCapsuleComponent()->SetCollisionProfileName("Pawn");

	// UClass* pEnemyInfo = AEnemy_DarkKnight::StaticClass();

	static ConstructorHelpers::FClassFinder<UEnemy_DarkKnight_AnimInst> ABP_DarkKnight(TEXT("AnimBlueprint'/Game/MyFolder/Enemy_DarkKnight/ABP_DarkKnight.ABP_DarkKnight_C'"));
	if (ABP_DarkKnight.Succeeded()) GetMesh()->SetAnimInstanceClass(ABP_DarkKnight.Class);

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = 350.0f;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 270.0f, 0.0f);
	//GetCharacterMovement()->JumpZVelocity = 300.0f; // �⺻��(420)
	GetCharacterMovement()->AirControl = 0.1f;

	AttackDamage = 10.0f;

	RightWeaponClass = AWeapon_DarkKnightSword::StaticClass();
	LeftWeaponClass = AShield_DarkKnightShield::StaticClass();

	//ExecutionAnimationNum = 2;
	//ExecutionBackAnimationNum = 1;


	//// UI���� ü�¹�
	//WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
	//WidgetComponent->SetupAttachment(GetMesh()); // ���̷�Ż�޽��� ��������
}

void AEnemy_DarkKnight::BeginPlay()
{
	Super::BeginPlay();

	// ���� ���(������) ����ֱ�
	FName RightArmWeaponSocket(TEXT("RightArm_Weapon"));
	if (GetMesh()->DoesSocketExist(RightArmWeaponSocket))
	{
		auto NewWeapon = GetWorld()->SpawnActor<AWeapon_DarkKnightSword>(RightWeaponClass, FVector::ZeroVector, FRotator::ZeroRotator);
		if (NewWeapon != nullptr)
		{
			RightWeapon = NewWeapon;
			NewWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, RightArmWeaponSocket);
			NewWeapon->SetOwner(this);
		}
	}

	FName LeftArmWeaponSocket(TEXT("LeftArm_Weapon"));
	if (GetMesh()->DoesSocketExist(LeftArmWeaponSocket))
	{
		auto NewWeapon = GetWorld()->SpawnActor<AShield_DarkKnightShield>(LeftWeaponClass, FVector::ZeroVector, FRotator::ZeroRotator);
		if (NewWeapon != nullptr)
		{
			LeftWeapon = NewWeapon;
			NewWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, LeftArmWeaponSocket);
			NewWeapon->SetOwner(this);
		}
	}
}

void AEnemy_DarkKnight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// HP �ۼ�Ʈ ����
	HPRatio = CurHP / MaxHP;

	if (GetVelocity().Size() > 0.0f)
	{
		// ���� ���� �ʿ�
		if (Cur_State == EMONSTER_STATE::ATTACK
			|| Cur_State == EMONSTER_STATE::DEAD
			|| Cur_State == EMONSTER_STATE::FALL
			|| Cur_State == EMONSTER_STATE::GUARD_BREAK
			|| Cur_State == EMONSTER_STATE::KNOCK_DOWN
			|| Cur_State == EMONSTER_STATE::IMPACT_WEAK
			|| Cur_State == EMONSTER_STATE::IMPACT_STRONG
			|| Cur_State == EMONSTER_STATE::GUARD_IMPACT_WEAK
			|| Cur_State == EMONSTER_STATE::GUARD_IMPACT_STRONG
			|| Cur_State == EMONSTER_STATE::EXECUTED
			|| Cur_State == EMONSTER_STATE::EXECUTION
			)
		{
			// �ƹ��͵� ���� ����
		}
		else
		{
			ChangeState(EMONSTER_STATE::MOVE);
		}
	}


	// ü�¹� ����
	/*UUserWidget_HPBar* pHPBar = Cast<UUserWidget_HPBar>(WidgetComponent->GetWidget());
	if (pHPBar != nullptr)
	{
		pHPBar->SetPercent(HPRatio);
	}*/
}

void AEnemy_DarkKnight::PossessedBy(AController* NewController)
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

void AEnemy_DarkKnight::ChangeState(EMONSTER_STATE _NextState)
{
	if (Cur_State == _NextState) return;
	else if (Cur_State == EMONSTER_STATE::DEAD) return;
	else Cur_State = _NextState;
}

float AEnemy_DarkKnight::GetCurrentSpeed()
{
	return GetVelocity().Size();
}

float AEnemy_DarkKnight::GetCurHP()
{
	return CurHP;
}

void AEnemy_DarkKnight::SetCurHP(float _Value)
{
	Super::SetCurHP(_Value);


}

void AEnemy_DarkKnight::SetRightWeapon(AWeapon_Common* _NewWeapon)
{
}

void AEnemy_DarkKnight::SetLeftWeapon(AShield_Common* _NewShield)
{
}

void AEnemy_DarkKnight::PlayHitAniamtion(float _Degree)
{
	Super::PlayHitAniamtion(_Degree);


}

void AEnemy_DarkKnight::PlayGuardBreakAnimation()
{
	Super::PlayGuardBreakAnimation();


}

void AEnemy_DarkKnight::PlayExecuted1Animation()
{
	Super::PlayExecuted1Animation();


}

void AEnemy_DarkKnight::PlayExecuted2Animation()
{
	Super::PlayExecuted2Animation();
}

void AEnemy_DarkKnight::PlayExecutedBackAnimation()
{
	Super::PlayExecutedBackAnimation();


}

void AEnemy_DarkKnight::Dead()
{
	Super::Dead();


	// ������ �ּ°� ĸ�� �ݸ��� ����
	GetMesh()->SetCollisionProfileName("NoCollision");
	GetCapsuleComponent()->SetCollisionProfileName("OverlapAllObjectsIgnoreAllTrace");

	// ���� ����
	auto AIController = Cast<AAI_Base>(GetController());
	if (AIController != nullptr)
	{
		AIController->OnUnPossess();
	}
}

void AEnemy_DarkKnight::RandomAttackAll()
{
}

void AEnemy_DarkKnight::ComboAttack01()
{
}

void AEnemy_DarkKnight::ComboAttack02()
{
}

void AEnemy_DarkKnight::ComboAttack03()
{
}

void AEnemy_DarkKnight::ComboAttackRandom()
{
}

void AEnemy_DarkKnight::SingleAttackStand01()
{
}

void AEnemy_DarkKnight::SingleAttackStand02()
{
}

void AEnemy_DarkKnight::SingleAttackStand03()
{
}

void AEnemy_DarkKnight::SingleAttackMove01()
{
}

void AEnemy_DarkKnight::SingleAttackMove02()
{
}

void AEnemy_DarkKnight::SingleAttackMove03()
{
}

void AEnemy_DarkKnight::SingleAttackRandom()
{
}
