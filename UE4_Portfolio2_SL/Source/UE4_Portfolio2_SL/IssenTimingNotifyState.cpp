#include "IssenTimingNotifyState.h"
#include "PlayerCharacter.h"
#include "DrawDebugHelpers.h"
#include "Weapon_Common.h"



UIssenTimingNotifyState::UIssenTimingNotifyState()
{

}

void UIssenTimingNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	arrHittedReuslts.Empty();

	Owner = Cast<AEnemy_Base>(MeshComp->GetOwner());
	if (Owner != nullptr)
	{
		AEnemy_Base* Character = Cast<AEnemy_Base>(Owner);
		Owner = Character;
	}
}

void UIssenTimingNotifyState::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
{
	TArray<FHitResult> hit;

	

	if (Owner != nullptr && Owner->GetRightWeapon() != nullptr)
	{
		FVector SocketStart = Owner->GetRightWeapon()->GetMesh()->GetSocketLocation(FName("Sword_Start"));
		FVector SocketEnd = Owner->GetRightWeapon()->GetMesh()->GetSocketLocation(FName("Sword_End"));

		
		FVector Dir = (SocketEnd - SocketStart).GetSafeNormal();

		// 딱히 의미 없음
		DrawDebugCapsule(Owner->GetWorld(), SocketStart, 50.0f, 50.0f, FQuat::Identity, FColor::Orange, true, 1.5f, 1.0f, 1.5f);
		

		Owner->GetWorld()->SweepMultiByChannel(
			hit,
			SocketStart,
			SocketEnd,
			FQuat::Identity,
			ECollisionChannel::ECC_GameTraceChannel5,
			FCollisionShape::MakeSphere(50.0f)
			);

		if (hit.IsValidIndex(0))
		{
			for (int i = 0; i < hit.Num(); i++)
			{
				if (hit[i].GetActor()->IsA(AActor::StaticClass()))
				{
					// 적이 PlayerCharacter 타입이면
					APlayerCharacter* hittedCharacter = Cast<APlayerCharacter>(hit[i].GetActor());
					if (!arrHittedReuslts.Contains(hittedCharacter) && hittedCharacter != nullptr)
					{
						GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("IssenAble"));
						arrHittedReuslts.Add(hittedCharacter);
						
						hittedCharacter->SetISsenAbleTime(0.33f);
					}
				}
			}
		}
	}

}

void UIssenTimingNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{

}
