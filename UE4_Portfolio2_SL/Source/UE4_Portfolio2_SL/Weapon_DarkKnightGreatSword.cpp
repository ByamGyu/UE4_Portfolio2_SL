#include "Weapon_DarkKnightGreatSword.h"



AWeapon_DarkKnightGreatSword::AWeapon_DarkKnightGreatSword()
{
	PrimaryActorTick.bCanEverTick = false;


	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM(TEXT("StaticMesh'/Game/Paladin_Weapons_Pack/Mesh/Weapons/King_Swords/SM_King_Sword_2.SM_King_Sword_2'"));
	if (SM.Succeeded())
	{
		Body->SetStaticMesh(SM.Object);
		Body->SetCollisionProfileName(TEXT("NoCollision"));
		Body->SetRelativeScale3D(FVector(1.25f, 1.25f, 1.25f));

		WeaponSocketStart = Body->GetSocketByName(TEXT("Sword_Start"));
		WeaponSocketEnd = Body->GetSocketByName(TEXT("Sword_End"));
	}
}

void AWeapon_DarkKnightGreatSword::BeginPlay()
{
	Super::BeginPlay();
}
