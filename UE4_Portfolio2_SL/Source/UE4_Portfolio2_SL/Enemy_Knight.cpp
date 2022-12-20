#include "Enemy_Knight.h"
#include "AI_Base.h"


AEnemy_Knight::AEnemy_Knight()
{
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM_tmp(TEXT("SkeletalMesh'/Game/Knight/Mesh/Separated_Mesh/Immortal/Body/SK_Knight_Immortal_Character.SK_Knight_Immortal_Character'"));
	if (SM_tmp.Succeeded()) GetMesh()->SetSkeletalMesh(SM_tmp.Object);

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	GetCapsuleComponent()->SetCollisionProfileName("Pawn");

	UClass* pEnemyInfo = AEnemy_Knight::StaticClass();

	static ConstructorHelpers::FClassFinder<UEnemy_Knight_AnimInst> ABP_Knight(TEXT("AnimBlueprint'/Game/MyFolder/Enemy_Knight/ABP_Enemy_Knight.ABP_Enemy_Knight_C'"));
	if (ABP_Knight.Succeeded()) GetMesh()->SetAnimInstanceClass(ABP_Knight.Class);

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = 200.0f;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 270.0f, 0.0f);
	//GetCharacterMovement()->JumpZVelocity = 300.0f; // 기본값(420)
	GetCharacterMovement()->AirControl = 0.1f;

	AttackDamage = 25.0f;

	// 무기 정보
	RightWeaponClass = AWeapon_EnemyKnightSword::StaticClass();
}

void AEnemy_Knight::BeginPlay()
{
	Super::BeginPlay();


	// Weapon_EnemyKnightSword 들기
	FName RightArmWeaponSocket(TEXT("RightArm_Weapon"));
	if (GetMesh()->DoesSocketExist(RightArmWeaponSocket))
	{
		auto NewWeapon = GetWorld()->SpawnActor<AWeapon_EnemyKnightSword>(RightWeaponClass, FVector::ZeroVector, FRotator::ZeroRotator);
		if (NewWeapon != nullptr)
		{
			RightWeapon = NewWeapon;
			NewWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, RightArmWeaponSocket);
			NewWeapon->SetOwner(this);
		}
	}
}

void AEnemy_Knight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemy_Knight::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

void AEnemy_Knight::ChangeState(EMONSTER_STATE _NextState)
{
	if (Cur_State == _NextState) return;
	else if (Cur_State == EMONSTER_STATE::DEAD) return;
	else Cur_State = _NextState;
}

float AEnemy_Knight::GetCurrentSpeed()
{
	return GetVelocity().Size();
}

float AEnemy_Knight::GetCurHP()
{
	return CurHP;
}

void AEnemy_Knight::SetCurHP(float _Value)
{
	Super::SetCurHP(_Value);
}

AWeapon_Common* AEnemy_Knight::GetRightWeapon()
{
	if (RightWeapon == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("RightWeapon is Nullptr"));
		return nullptr;
	}
	else return RightWeapon;
}

void AEnemy_Knight::SetRightWeapon(AWeapon_EnemyKnightSword* _NewWeapon)
{
	FName RightArmWeaponSocket(TEXT("RightArm_Weapon"));

	if (_NewWeapon != nullptr)
	{
		auto tmp = Cast<AWeapon_EnemyKnightSword>(_NewWeapon);
		if (tmp != nullptr) RightWeapon = tmp;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("_NewRightWeapon is Nullptr"));
	}
}

void AEnemy_Knight::PlayHitAniamtion(float _Degree)
{
	//Super::PlayHitAniamtion(_Degree);

	//auto pAnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
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

void AEnemy_Knight::Dead()
{
	//Super::Dead();

	//auto pAnimInst = Cast<UEnemy_SkeletonWarrior_AnimInst>(GetMesh()->GetAnimInstance());
	//if (pAnimInst != nullptr)
	//{
	//	ChangeState(EMONSTER_STATE::DEAD);
	//	pAnimInst->PlayDeadMontage();

	//	// TODO (효과음?)
	//}
	//else return;
}