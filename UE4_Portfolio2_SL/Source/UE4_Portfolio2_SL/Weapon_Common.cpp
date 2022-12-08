#include "Weapon_Common.h"


AWeapon_Common::AWeapon_Common()
{
	PrimaryActorTick.bCanEverTick = false;


	DefaultDamage = 10.0f;
}

void AWeapon_Common::BeginPlay()
{
	Super::BeginPlay();
	
	SetWeaponDamage();
}

void AWeapon_Common::SetWeaponDamage(float _Value)
{
	FinalWeaponDamage = DefaultDamage + (_Value * 0.5f);
}

void AWeapon_Common::SetWeaponDamage()
{
	FinalWeaponDamage = DefaultDamage;
}

float AWeapon_Common::GetWeaponDamage()
{
	return FinalWeaponDamage;
}

void AWeapon_Common::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

