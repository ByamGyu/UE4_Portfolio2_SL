#pragma once

#include "EngineMinimal.h"
#include "Weapon_Common.h"
#include "Weapon_DarkKnightGreatSword.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API AWeapon_DarkKnightGreatSword : public AWeapon_Common
{
	GENERATED_BODY()
	


public:
	AWeapon_DarkKnightGreatSword();


protected:
	virtual void BeginPlay() override;
};
