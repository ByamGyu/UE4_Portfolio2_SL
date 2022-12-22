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
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Body;

	float DefaultDamage;
	float FinalWeaponDamage;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	const UStaticMeshSocket* WeaponSocketStart;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	const UStaticMeshSocket* WeaponSocketEnd;

	// 투사체 전용 소켓
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	const UStaticMeshSocket* WeaponProjectileSocket;



public:
	void SetWeaponDamage(float _Value);
	void SetWeaponDamage();
	float GetWeaponDamage();

	UStaticMeshComponent* GetMesh() { return Body; }
};
