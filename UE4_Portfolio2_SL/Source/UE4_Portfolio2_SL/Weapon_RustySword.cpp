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


		// �ϼ� �׽�Ʈ��
		//WeaponCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Weapon Capsule Component"));
		//WeaponCapsuleComponent->SetCapsuleRadius(50.0f); // 15 ~ 20�� ������
		//WeaponCapsuleComponent->SetCapsuleHalfHeight(50.0f);
		//// ECC_Pawn�� ���� �ݸ����� �����ϰ� �������� ��ġ�� ��
		////WeaponCapsuleComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel5, ECollisionResponse::ECR_Ignore);
		//WeaponCapsuleComponent->SetCollisionProfileName(TEXT("EnemyProjectile"));
		//WeaponCapsuleComponent->bHiddenInGame = false;
		//WeaponCapsuleComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f));

		//WeaponCapsuleComponent->AttachToComponent(Body, FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("Sword_Start"));

	}
}

void AWeapon_RustySword::BeginPlay()
{
	Super::BeginPlay();

	//// �ݸ��� ���� �����ϱ�
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