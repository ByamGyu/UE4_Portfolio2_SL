#include "Shield_Default.h"


AShield_Default::AShield_Default()
{
	PrimaryActorTick.bCanEverTick = false;
	
	
	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM(TEXT("StaticMesh'/Game/Knight2/Meshes/Shild_SM.Shild_SM'"));
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