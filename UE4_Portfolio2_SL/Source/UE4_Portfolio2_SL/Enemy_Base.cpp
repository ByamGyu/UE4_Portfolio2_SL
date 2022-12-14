#include "Enemy_Base.h"
#include "AI_Base.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"


AEnemy_Base::AEnemy_Base()
{
	PrimaryActorTick.bCanEverTick = true;

	Cur_EquipmentState = EEQUIPMENT_STATE::NONE;

	AttackDamage = 5.0f;
}

void AEnemy_Base::BeginPlay()
{
	Super::BeginPlay();

	// UI관련은 생성자에서 해주면 UI 자체의 생성자 생명주기 문제 때문에 크러쉬가 남
	// UI관련은 BeginPlay에서 해주자!!
	if (WidgetComponent != nullptr)
	{
		WidgetComponent->SetVisibility(false);
	}
	
}

void AEnemy_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

AWeapon_Common* AEnemy_Base::GetRightWeapon()
{
	if (RightWeapon == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("RightWeapon is Nullptr"));
		return nullptr;
	}
	else return RightWeapon;
}

AShield_Common* AEnemy_Base::GetLeftWeapon()
{
	if (LeftWeapon == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("RightWeapon is Nullptr"));
		return nullptr;
	}
	else return LeftWeapon;
}

void AEnemy_Base::ChangeState(EMONSTER_STATE _NextState)
{
	if (Cur_State == _NextState) return;
	else if (Cur_State == EMONSTER_STATE::DEAD) return;
	else Cur_State = _NextState;
}

float AEnemy_Base::GetCurrentSpeed()
{
	return GetVelocity().Size();
}

void AEnemy_Base::SetAttackDamage(float _Value)
{
	AttackDamage = _Value;
}

float AEnemy_Base::GetAttackDamage()
{
	return AttackDamage;
}

void AEnemy_Base::SetCurHP(float _Value)
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
}

float AEnemy_Base::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float Damage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	SetCurHP(-Damage);

	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, TEXT("Damage Amount: ") + FString::SanitizeFloat(DamageAmount));

	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, TEXT("Attacker Name: ") + EventInstigator->GetPawn()->GetName());

	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, TEXT("Used Tool: ") + DamageCauser->GetName());

	return Damage;
}

void AEnemy_Base::RandomAttackAll()
{
}

void AEnemy_Base::ComboAttack01()
{
}

void AEnemy_Base::ComboAttack02()
{
}

void AEnemy_Base::ComboAttack03()
{
}

void AEnemy_Base::ComboAttackRandom()
{
}

void AEnemy_Base::SingleAttackStand01()
{
}

void AEnemy_Base::SingleAttackStand02()
{
}

void AEnemy_Base::SingleAttackStand03()
{
}

void AEnemy_Base::SingleAttackMove01()
{
}

void AEnemy_Base::SingleAttackMove02()
{
}

void AEnemy_Base::SingleAttackMove03()
{
}

void AEnemy_Base::SingleAttackRandom()
{
}

void AEnemy_Base::PlayHitAniamtion(float _Degree)
{	
}

void AEnemy_Base::PlayGuardBreakAnimation()
{
}

void AEnemy_Base::PlayExecuted1Animation()
{

}

void AEnemy_Base::PlayExecuted2Animation()
{
}

void AEnemy_Base::PlayExecutedBackAnimation()
{
}

void AEnemy_Base::Dead()
{
	// 피직스 애셋과 캡슐 콜리전 변경
	GetMesh()->SetCollisionProfileName("NoCollision");
	GetCapsuleComponent()->SetCollisionProfileName("OverlapAllObjectsIgnoreAllTrace");

	// 빙의 해제
	auto AIController = Cast<AAI_Base>(GetController());
	if (AIController != nullptr)
	{
		AIController->OnUnPossess();
	}	
}