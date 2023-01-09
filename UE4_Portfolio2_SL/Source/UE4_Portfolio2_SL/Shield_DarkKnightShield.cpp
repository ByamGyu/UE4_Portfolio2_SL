#include "Shield_DarkKnightShield.h"



AShield_DarkKnightShield::AShield_DarkKnightShield()
{
	PrimaryActorTick.bCanEverTick = false;


	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM(TEXT("StaticMesh'/Game/Fallen_Knight/Mesh/Separated_Mesh/Weapon/SM_Shield.SM_Shield'"));
	if (SM.Succeeded())
	{
		Body->SetStaticMesh(SM.Object);
		Body->SetCollisionProfileName(TEXT("NoCollision"));
		SocketShieldTop = Body->GetSocketByName(TEXT("Shield_Top"));
		SocketShieldBottom = Body->GetSocketByName(TEXT("Shield_Bottom"));
		SocketShieldLeft = Body->GetSocketByName(TEXT("Shield_Left"));
		SocketShieldRight = Body->GetSocketByName(TEXT("Shield_Right"));
	}
}