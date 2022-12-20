#include "Weapon_EnemyKnightSword.h"


AWeapon_EnemyKnightSword::AWeapon_EnemyKnightSword()
{
	PrimaryActorTick.bCanEverTick = false;


	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM(TEXT("StaticMesh'/Game/MedievalCastle/Meshes/SM_SteelSword.SM_SteelSword'"));
	if (SM.Succeeded())
	{
		Body->SetStaticMesh(SM.Object);
		Body->SetCollisionProfileName(TEXT("NoCollision"));

		WeaponSocketStart = Body->GetSocketByName(TEXT("Sword_Start"));
		WeaponSocketEnd = Body->GetSocketByName(TEXT("Sword_End"));
	}
}