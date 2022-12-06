#include "Weapon_Default.h"


AWeapon_Default::AWeapon_Default()
{
	PrimaryActorTick.bCanEverTick = false;

	
	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM(TEXT("StaticMesh'/Game/Knight2/Meshes/Sword_SM.Sword_SM'"));
	if (SM.Succeeded())
	{
		Body->SetStaticMesh(SM.Object);
		Body->SetCollisionProfileName(TEXT("NoCollision"));

		WeaponSocketStart = Body->GetSocketByName(TEXT("Sword_Start"));
		WeaponSocketEnd = Body->GetSocketByName(TEXT("Sword_End"));
	}
}