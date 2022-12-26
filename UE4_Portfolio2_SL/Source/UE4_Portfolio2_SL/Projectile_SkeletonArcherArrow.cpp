#include "Projectile_SkeletonArcherArrow.h"
#include "PlayerCharacter.h"


AProjectile_SkeletonArcherArrow::AProjectile_SkeletonArcherArrow()
{
	PrimaryActorTick.bCanEverTick = true;

	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM(TEXT("StaticMesh'/Game/SkeletonArcher/Mesh/SM_Skeleton_Archer_Arrow.SM_Skeleton_Archer_Arrow'"));
	if (SM.Succeeded())
	{
		Body->SetStaticMesh(SM.Object);
		Body->SetCollisionProfileName(TEXT("NoCollision"));
		Body->SetupAttachment(RootComponent);
		Body->SetRelativeRotation(FRotator(-90.0f, 0.0f, 0.0f));
		Body->SetRelativeLocation(FVector(-57.0f, 0.0f, 0.0f));

		TrailSocket = Body->GetSocketByName(TEXT("Socket_Trail"));
	}

	CollisionComponent->SetCollisionProfileName(TEXT("EnemyProjectile"));


	SetSpeed(1000.0f);
}

void AProjectile_SkeletonArcherArrow::BeginPlay()
{
	Super::BeginPlay();
}

void AProjectile_SkeletonArcherArrow::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AProjectile_SkeletonArcherArrow::OnCharacterOverlap);
}

void AProjectile_SkeletonArcherArrow::OnCharacterOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherCOmp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* Character = Cast<APlayerCharacter>(OtherActor);
	if (Character != nullptr)
	{
		FDamageEvent DamageEvent;
		AController* Dummy_Controller = nullptr;

		Character->TakeDamage(FinalDamage, DamageEvent, Dummy_Controller, this);

		FVector OwnerForward = this->GetActorForwardVector();
		FVector HittedActorForward = OtherActor->GetActorForwardVector();
		float Dot = FVector::DotProduct(OwnerForward, HittedActorForward);
		float AcosAngle = FMath::Acos(Dot);
		float AngleDegree = FMath::RadiansToDegrees(AcosAngle);

		Character->PlayHitAniamtion(AngleDegree);

		DestroyLater(1.0f);
	}
}

void AProjectile_SkeletonArcherArrow::DestroyLater(float _Value)
{
	Body->SetVisibility(false);
	Body->SetCollisionProfileName(TEXT("NoCollision"));
	CollisionComponent->SetCollisionProfileName(TEXT("NoCollision"));
	ProjectileMovementComponent->StopMovementImmediately();
		
	SetLifeSpan(_Value);
}