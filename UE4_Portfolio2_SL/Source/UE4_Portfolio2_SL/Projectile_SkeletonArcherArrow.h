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
};
