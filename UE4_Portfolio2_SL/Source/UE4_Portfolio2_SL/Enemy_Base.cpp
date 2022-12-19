#include "Enemy_Base.h"



AEnemy_Base::AEnemy_Base()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AEnemy_Base::BeginPlay()
{
	Super::BeginPlay();

}

void AEnemy_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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
		}
	}

	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString("EnemyBase HP: ") + FString::SanitizeFloat(CurHP));
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

void AEnemy_Base::Dead()
{
}
