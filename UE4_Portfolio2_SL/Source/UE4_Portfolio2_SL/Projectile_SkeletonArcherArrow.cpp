#include "Projectile_SkeletonArcherArrow.h"


AProjectile_SkeletonArcherArrow::AProjectile_SkeletonArcherArrow()
{
	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM(TEXT("StaticMesh'/Game/SkeletonArcher/Mesh/SM_Skeleton_Archer_Arrow.SM_Skeleton_Archer_Arrow'"));
	if (SM.Succeeded())
	{
		Body->SetStaticMesh(SM.Object);
		Body->SetCollisionProfileName(TEXT("NoCollision"));
		Body->SetupAttachment(RootComponent);

		TrailSocket = Body->GetSocketByName(TEXT("Socket_Trail"));
	}

	CollisionComponent->SetCollisionProfileName(TEXT("EnemyProjectile"));
}