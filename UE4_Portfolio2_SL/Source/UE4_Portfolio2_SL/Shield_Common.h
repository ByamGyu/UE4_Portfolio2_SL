#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "Shield_Common.generated.h"

UCLASS()
class UE4_PORTFOLIO2_SL_API AShield_Common : public AActor
{
	GENERATED_BODY()
	
public:
	AShield_Common();


protected:
	virtual void BeginPlay() override;


protected:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Body;

	float ShieldDefenceDamageRatio;
	float ShieldStaminaDamageRatio;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	const UStaticMeshSocket* SocketShieldTop;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	const UStaticMeshSocket* SocketShieldBottom;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	const UStaticMeshSocket* SocketShieldLeft;
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = Info, meta = (AllowPrivateAccess = "true"))
	const UStaticMeshSocket* SocketShieldRight;


public:
	void SetShieldDefenceDamageRatio();
	float GetShieldDefenceDamageRatio();

	void SetShieldStaminaDamageRatio();
	float GetShieldStaminaDamageRatio();

	UStaticMeshComponent* GetMesh() { return Body; }


public:
	virtual void Tick(float DeltaTime) override;

};
