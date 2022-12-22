#include "Enemy_SkeletonArcher.h"
#include "AI_Base.h"


AEnemy_SkeletonArcher::AEnemy_SkeletonArcher()
{
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM_tmp(TEXT("SkeletalMesh'/Game/SkeletonArcher/Mesh/SK_Skeleton_Archer.SK_Skeleton_Archer'"));
	if (SM_tmp.Succeeded()) GetMesh()->SetSkeletalMesh(SM_tmp.Object);

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	GetCapsuleComponent()->SetCollisionProfileName("Pawn");

	UClass* pEnemyInfo = AEnemy_SkeletonArcher::StaticClass();

	static ConstructorHelpers::FClassFinder<UEnemy_SkeletonArcher_AnimInst> ABP_SkeletonArcher(TEXT("AnimBlueprint'/Game/MyFolder/Enemy_SkeletonArcher/ABP_SkeletonArcher.ABP_SkeletonArcher_C'"));
	if (ABP_SkeletonArcher.Succeeded()) GetMesh()->SetAnimInstanceClass(ABP_SkeletonArcher.Class);

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = 200.0f;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 270.0f, 0.0f);
	//GetCharacterMovement()->JumpZVelocity = 300.0f; // 기본값(420)
	GetCharacterMovement()->AirControl = 0.1f;

	AttackDamage = 5.0f;

	// 실제 위치는 왼손임
	RightWeaponClass = AWeapon_SkeletonArcherBow::StaticClass();
}

void AEnemy_SkeletonArcher::BeginPlay()
{
	Super::BeginPlay();


	// 전용 장비(왼손) 들고있기
	FName RightArmWeaponSocket(TEXT("LeftArm_Weapon"));
	if (GetMesh()->DoesSocketExist(RightArmWeaponSocket))
	{
		auto NewWeapon = GetWorld()->SpawnActor<AWeapon_SkeletonArcherBow>(RightWeaponClass, FVector::ZeroVector, FRotator::ZeroRotator);
		if (NewWeapon != nullptr)
		{
			RightWeapon = NewWeapon;
			NewWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, RightArmWeaponSocket);
			NewWeapon->SetOwner(this);
		}
	}
}

void AEnemy_SkeletonArcher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (GetVelocity().Size() > 0.0f)
	{
		// 조건 조절 필요
		if (Cur_State == EMONSTER_STATE::ATTACK
			|| Cur_State == EMONSTER_STATE::RANGE_AIM
			|| Cur_State == EMONSTER_STATE::RANGE_FIRE
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

void AEnemy_SkeletonArcher::PossessedBy(AController* NewController)
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

void AEnemy_SkeletonArcher::ChangeState(EMONSTER_STATE _NextState)
{
	if (Cur_State == _NextState) return;
	else if (Cur_State == EMONSTER_STATE::DEAD) return;
	else Cur_State = _NextState;
}

float AEnemy_SkeletonArcher::GetCurrentSpeed()
{
	return GetVelocity().Size();
}

float AEnemy_SkeletonArcher::GetCurHP()
{
	return CurHP;
}

void AEnemy_SkeletonArcher::SetCurHP(float _Value)
{
	Super::SetCurHP(_Value);
}

AWeapon_Common* AEnemy_SkeletonArcher::GetRightWeapon()
{
	if (RightWeapon == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("RightWeapon is Nullptr"));
		return nullptr;
	}
	else return RightWeapon;
}

void AEnemy_SkeletonArcher::SetRightWeapon(AWeapon_SkeletonArcherBow* _NewWeapon)
{
	FName RightArmWeaponSocket(TEXT("LeftArm_Weapon"));

	if (_NewWeapon != nullptr)
	{
		RightWeapon = _NewWeapon;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("_NewRightWeapon is Nullptr"));
	}
}

void AEnemy_SkeletonArcher::PlayHitAniamtion(float _Degree)
{
	Super::PlayHitAniamtion(_Degree);

	//auto pAnimInst = Cast<UEnemy_SkeletonArcher_AnimInst>(GetMesh()->GetAnimInstance());
	//if (pAnimInst != nullptr)
	//{
	//	ChangeState(EMONSTER_STATE::IMPACT_WEAK);

	//	if (_Degree >= 90.0f)
	//	{
	//		pAnimInst->PlayImpactMontage();
	//	}
	//	else if (_Degree < 90.0f)
	//	{
	//		pAnimInst->PlayHitBackMontage();
	//	}

	//	// TODO (효과음?)
	//}
	//else return;
}

void AEnemy_SkeletonArcher::Dead()
{
	Super::Dead();

	//auto pAnimInst = Cast<UEnemy_SkeletonArcher_AnimInst>(GetMesh()->GetAnimInstance());
	//if (pAnimInst != nullptr)
	//{
	//	ChangeState(EMONSTER_STATE::DEAD);
	//	pAnimInst->PlayDeadMontage();

	//	// TODO (효과음?)
	//}
	//else return;
}
