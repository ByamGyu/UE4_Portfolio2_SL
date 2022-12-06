#include "Shield_Common.h"


AShield_Common::AShield_Common()
{
	PrimaryActorTick.bCanEverTick = false;

	
}

void AShield_Common::BeginPlay()
{
	Super::BeginPlay();
	
}

void AShield_Common::SetShieldDefenceDamageRatio()
{

}

float AShield_Common::GetShieldDefenceDamageRatio()
{
	return 0.0f;
}

void AShield_Common::SetShieldStaminaDamageRatio()
{

}

float AShield_Common::GetShieldStaminaDamageRatio()
{
	return 0.0f;
}

void AShield_Common::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

