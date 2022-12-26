#pragma once

#include "EngineMinimal.h"
#include "Projectile_Base.h"
#include "Projectile_SkeletonArcherArrow.generated.h"


UCLASS()
class UE4_PORTFOLIO2_SL_API AProjectile_SkeletonArcherArrow : public AProjectile_Base
{
	GENERATED_BODY()
	

public:
	AProjectile_SkeletonArcherArrow();


protected:
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;


private:
	UFUNCTION()
	void OnCharacterOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherCOmp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void DestroyLater(float _Value);
};
