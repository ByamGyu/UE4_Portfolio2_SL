#include "Projectile_Base.h"


AProjectile_Base::AProjectile_Base()
{
	PrimaryActorTick.bCanEverTick = true;


	// �ݸ��� �� ��Ʈ������Ʈ ����
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	CollisionComponent->InitSphereRadius(5.0f);
	RootComponent = CollisionComponent;

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	//ProjectileMovementComponent->SetUpdatedComponent(RootComponent);
	ProjectileMovementComponent->InitialSpeed = 500.0f;
	ProjectileMovementComponent->MaxSpeed = 500.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = false;
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
	

	// ��ƼŬ ������Ʈ
	ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComponent"));
	ParticleComponent->SetupAttachment(Body);

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

void AProjectile_Base::SetLifeTime(float _Value)
{
	InitialLifeSpan = _Value;
}

void AProjectile_Base::SetSpeed(float _Value)
{
	ProjectileSpeed = _Value;
	
	ProjectileMovementComponent->InitialSpeed = ProjectileSpeed;
	ProjectileMovementComponent->MaxSpeed = ProjectileSpeed;
}

void AProjectile_Base::SetMaxSpeed(float _Value)
{
	ProjectileMovementComponent->MaxSpeed = _Value;
}

void AProjectile_Base::FireInDirection(const FVector& _ShootDirection)
{
	// �ӷ��� ProjectileMovementComponent�� ���� ���ǵǹǷ� �߻� ���⸸ �������ָ� �ȴ�.
	ProjectileMovementComponent->Velocity = _ShootDirection * ProjectileMovementComponent->InitialSpeed;
}
