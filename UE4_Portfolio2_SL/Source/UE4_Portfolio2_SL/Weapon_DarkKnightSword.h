#pragma once

#include "EngineMinimal.h"
#include "Weapon_Common.h"
#include "Weapon_DarkKnightSword.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API AWeapon_DarkKnightSword : public AWeapon_Common
{
	GENERATED_BODY()
	

		
public:
	AWeapon_DarkKnightSword();


protected:
	virtual void BeginPlay() override;
};
