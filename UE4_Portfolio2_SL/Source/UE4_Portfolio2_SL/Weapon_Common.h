#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon_Common.generated.h"

UCLASS()
class UE4_PORTFOLIO2_SL_API AWeapon_Common : public AActor
{
	GENERATED_BODY()
	
public:
	AWeapon_Common();


protected:
	virtual void BeginPlay() override;


protected:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Body;

	float WeaponDamage;
	float WeaponStaminaDamage;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	const UStaticMeshSocket* WeaponSocketStart;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	const UStaticMeshSocket* WeaponSocketEnd;



public:
	void SetWeaponDamage(float _Value);
	float GetWeaponDamage();

	void SetWeaponStaminaDamage(float _Value);
	float GetWeaponStaminaDamage();


public:
	virtual void Tick(float DeltaTime) override;

};
