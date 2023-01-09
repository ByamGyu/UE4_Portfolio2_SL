#include "Weapon_RustySword.h"
#include "PlayerCharacter.h"


AWeapon_RustySword::AWeapon_RustySword()
{
	PrimaryActorTick.bCanEverTick = false;


	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM(TEXT("StaticMesh'/Game/SnSAnimsetPro/Models/Sword/Sword.Sword'"));
	if (SM.Succeeded())
	{
		Body->SetStaticMesh(SM.Object);
		Body->SetCollisionProfileName(TEXT("NoCollision"));

		WeaponSocketStart = Body->GetSocketByName(TEXT("Sword_Start"));
		WeaponSocketEnd = Body->GetSocketByName(TEXT("Sword_End"));
	}
}

void AWeapon_RustySword::BeginPlay()
{
	Super::BeginPlay();

	//// 콜리전 판정 연결하기
	//WeaponCapsuleComponent->OnComponentBeginOverlap.AddDynamic(this, &AWeapon_RustySword::OnCharacterOverlap);
}

//void AWeapon_RustySword::OnCharacterOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherCOmp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	APlayerCharacter* Character = Cast<APlayerCharacter>(OtherActor);
//	if (Character != nullptr)
//	{
//		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("TEST Weapon Collision"));
//	}
//
//	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("TEST Weapon Collision"));
//}