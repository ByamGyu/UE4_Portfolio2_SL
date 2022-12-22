#include "Projectile_Base.h"


AProjectile_Base::AProjectile_Base()
{
	PrimaryActorTick.bCanEverTick = true;

	// ����ü ����
	ProjectileSpeed = 500.0f;

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->InitialSpeed = ProjectileSpeed;
	ProjectileMovementComponent->MaxSpeed = ProjectileSpeed;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = false;

	// �ݸ��� �� ��Ʈ������Ʈ ����
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	CollisionComponent->InitSphereRadius(10.0f);
	RootComponent = CollisionComponent;

	// ��ƼŬ ������Ʈ
	ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComponent"));
	ParticleComponent->SetupAttachment(RootComponent);

	// ����
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
	// �ӷ��� ProjectileMovementComponent�� ���� ���ǵǹǷ� �߻� ���⸸ �������ָ� �ȴ�.
	ProjectileMovementComponent->Velocity = _ShootDirection * ProjectileMovementComponent->InitialSpeed;
}
