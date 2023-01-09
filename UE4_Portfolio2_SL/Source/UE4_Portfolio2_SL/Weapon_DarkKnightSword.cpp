#include "Weapon_DarkKnightSword.h"
#include "PlayerCharacter.h"



AWeapon_DarkKnightSword::AWeapon_DarkKnightSword()
{
	PrimaryActorTick.bCanEverTick = false;


	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM(TEXT("StaticMesh'/Game/Fallen_Knight/Mesh/Separated_Mesh/Weapon/SM_Sword.SM_Sword'"));
	if (SM.Succeeded())
	{
		Body->SetStaticMesh(SM.Object);
		Body->SetCollisionProfileName(TEXT("NoCollision"));

		WeaponSocketStart = Body->GetSocketByName(TEXT("Sword_Start"));
		WeaponSocketEnd = Body->GetSocketByName(TEXT("Sword_End"));
	}
}

void AWeapon_DarkKnightSword::BeginPlay()
{
	Super::BeginPlay();
}
