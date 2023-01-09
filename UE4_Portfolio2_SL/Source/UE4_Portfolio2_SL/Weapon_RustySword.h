#pragma once

#include "EngineMinimal.h"
#include "Weapon_Common.h"
#include "Weapon_RustySword.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API AWeapon_RustySword : public AWeapon_Common
{
	GENERATED_BODY()
	

public:
	AWeapon_RustySword();


protected:
	virtual void BeginPlay() override;


private:
	//UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	//class UCapsuleComponent* WeaponCapsuleComponent;


	//UFUNCTION()
	//	void OnCharacterOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherCOmp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
