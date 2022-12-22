#include "Weapon_SkeletonArcherBow.h"


AWeapon_SkeletonArcherBow::AWeapon_SkeletonArcherBow()
{
	PrimaryActorTick.bCanEverTick = false;


	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM(TEXT("StaticMesh'/Game/SkeletonArcher/Mesh/SM_Skeleton_Archer_Bow.SM_Skeleton_Archer_Bow'"));
	if (SM.Succeeded())
	{
		Body->SetStaticMesh(SM.Object);
		Body->SetCollisionProfileName(TEXT("NoCollision"));

		WeaponSocketStart = Body->GetSocketByName(TEXT("Sword_Start"));
		WeaponSocketEnd = Body->GetSocketByName(TEXT("Sword_End"));
	}
}