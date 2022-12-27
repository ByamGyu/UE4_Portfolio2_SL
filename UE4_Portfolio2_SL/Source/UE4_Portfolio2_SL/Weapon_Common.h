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
	virtual void BeginPlay();
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

	// 투사체 전용 소켓(활 같은 무기)
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	const UStaticMeshSocket* WeaponProjectileSocket;

	// 일섬 전용 콜리전
	//UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	//class UCapsuleComponent* WeaponCapsuleComponent;



public:
	void SetWeaponDamage(float _Value);
	void SetWeaponDamage();
	float GetWeaponDamage();

	UStaticMeshComponent* GetMesh() { return Body; }
};
