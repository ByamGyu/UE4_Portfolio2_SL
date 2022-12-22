#include "Projectile_Base.h"


AProjectile_Base::AProjectile_Base()
{
	PrimaryActorTick.bCanEverTick = true;

	// 투사체 설정
	ProjectileSpeed = 500.0f;

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->InitialSpeed = ProjectileSpeed;
	ProjectileMovementComponent->MaxSpeed = ProjectileSpeed;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = false;

	// 콜리전 및 루트컴포넌트 설정
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	CollisionComponent->InitSphereRadius(10.0f);
	RootComponent = CollisionComponent;

	// 파티클 컴포넌트
	ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComponent"));
	ParticleComponent->SetupAttachment(RootComponent);

	// 수명
	ProjectileLifeTime = 10.0f;
	InitialLifeSpan = ProjectileLifeTime;

	DefaultDamage = 2.0f;
}

void AProjectile_Base::BeginPlay()
{
	Super::BeginPlay();
	

}

void AProjectile_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void AProjectile_Base::SetDamage(float _Value)
{
	FinalDamage = DefaultDamage + (_Value * 0.2f);
}

void AProjectile_Base::SetDamage()
{
	FinalDamage = DefaultDamage;
}

float AProjectile_Base::GetDamage()
{
	return FinalDamage;
}

void AProjectile_Base::FireInDirection(const FVector& _ShootDirection)
{
	// 속력은 ProjectileMovementComponent에 의해 정의되므로 발사 방향만 제공해주면 된다.
	ProjectileMovementComponent->Velocity = _ShootDirection * ProjectileMovementComponent->InitialSpeed;
}
