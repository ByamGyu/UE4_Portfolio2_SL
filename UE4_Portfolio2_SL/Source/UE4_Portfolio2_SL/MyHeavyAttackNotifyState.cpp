#include "MyHeavyAttackNotifyState.h"
#include "PlayerCharacter.h"
#include "Weapon_Default.h"
#include "Shield_Default.h"
#include "DrawDebugHelpers.h"


UMyHeavyAttackNotifyState::UMyHeavyAttackNotifyState()
{

}

void UMyHeavyAttackNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	arrHittedResults.Empty();

	// 노티파이 주인으로부터 대미지 정보 가져와 저장하기
	if (MeshComp->GetOwner() != nullptr)
	{
		AActor* Owner = MeshComp->GetOwner();
		if (Owner != nullptr)
		{
			APlayerCharacter* Character = Cast<APlayerCharacter>(Owner);
			if (Character != nullptr) AttackDamage = Character->GetAttackDamage();
			else return;
		}
	}
}

void UMyHeavyAttackNotifyState::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
{
	TArray<FHitResult> hit; // 맞은 액터를 저장할 임시 배열

	AActor* Owner = MeshComp->GetOwner(); // 노티파이를 실행하는 캐릭터 가져오기
	if (Owner != nullptr)
	{
		// AActor를 플레이어 캐릭터(노티파이 실행하는 주인)으로 전환
		APlayerCharacter* Character = Cast<APlayerCharacter>(Owner);
		if (Character != nullptr && Character->GetRightWeapon() != nullptr) // 캐릭터에 오른쪽 무기가 있으면
		{
			// 오른쪽 무기 캐스팅해서 저장하기
			AWeapon_Default* RightWeapon = Character->GetRightWeapon();

			// 무기의 소켓 위치 가져오기
			FVector SocketTopLoc = RightWeapon->GetMesh()->GetSocketLocation(FName("Sword_Start"));
			FVector SocketEndLoc = RightWeapon->GetMesh()->GetSocketLocation(FName("Sword_End"));

			// 캐릭터를 통해서 GetWorld()하고 디버그라인 그리기
			DrawDebugLine(Character->GetWorld(), SocketTopLoc, SocketEndLoc, FColor::Green, false, 1.5f, false, 1.5f);

			// 캐릭터를 통해서 GetWorld()하고 라인트레이스 하기
			Character->GetWorld()->LineTraceMultiByChannel(
				hit, // 임시 배열에 맞은 대상들 저장하기
				SocketTopLoc,
				SocketEndLoc,
				ECollisionChannel::ECC_GameTraceChannel2 // PlayerAttack
			);

			if (hit.IsValidIndex(0)) // 맞은 대상들이 있으면
			{
				for (int i = 0; i < hit.Num(); i++)
				{
					if (hit[i].GetActor()->IsA(AActor::StaticClass()))
					{
						// 플레이어 캐릭터 종류일 경우
						APlayerCharacter* hittedActor = Cast<APlayerCharacter>(hit[i].GetActor());
						if (!arrHittedResults.Contains(hittedActor) && hittedActor != nullptr) // 중복 방지 배열에 없으면
						{
							GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, hittedActor->GetName());
							arrHittedResults.Add(hittedActor); // 중복 방지를 위해 추가하기
							hittedActor->PlayImpactAnimation();
							GiveDamage(Character, hittedActor);
						}
					}
				}
			}
		}
		else return;
	}
}

void UMyHeavyAttackNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{


}

void UMyHeavyAttackNotifyState::GiveDamage(APlayerCharacter* _Attacker, APlayerCharacter* _DamageTo)
{
	FDamageEvent DamageEvent;

	_DamageTo->TakeDamage(AttackDamage * 1.7f, DamageEvent, _Attacker->GetController(), _Attacker->GetRightWeapon());
}