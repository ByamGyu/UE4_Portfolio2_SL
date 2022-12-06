#include "Weapon_Common.h"


AWeapon_Common::AWeapon_Common()
{
	PrimaryActorTick.bCanEverTick = false;

	
}

void AWeapon_Common::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWeapon_Common::SetWeaponDamage(float _Value)
{

}

float AWeapon_Common::GetWeaponDamage()
{
	return 0.0f;
}

void AWeapon_Common::SetWeaponStaminaDamage(float _Value)
{

}

float AWeapon_Common::GetWeaponStaminaDamage()
{
	return 0.0f;
}

void AWeapon_Common::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

