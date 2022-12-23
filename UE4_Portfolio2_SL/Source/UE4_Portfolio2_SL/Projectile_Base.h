#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Projectile_Base.generated.h"

UCLASS()
class UE4_PORTFOLIO2_SL_API AProjectile_Base : public AActor
{
	GENERATED_BODY()
	
public:
	AProjectile_Base();

protected:
	virtual void BeginPlay();
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	class UProjectileMovementComponent* ProjectileMovementComponent;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Body;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	const UStaticMeshSocket* TrailSocket;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	UParticleSystemComponent* ParticleComponent;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	USphereComponent* CollisionComponent;


protected:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float ProjectileSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float ProjectileLifeTime;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float DefaultDamage;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	float FinalDamage;
	


public:
	void SetDamage(float _Value);
	void SetDamage();
	float GetDamage();
	void SetLifeTime(float _Value);
	void SetSpeed(float _Value);
	void SetMaxSpeed(float _Value);

	UStaticMeshComponent* GetMesh() { return Body; }


public:
	// 투사체의 발사를 담당
	void FireInDirection(const FVector& ShootDirection);

	/*UFUNCTION()
		void */
};
