#include "EnemyAttackNotifyState.h"
#include "PlayerCharacter.h"
#include "DrawDebugHelpers.h"

#include "Enemy_Base.h"
#include "Enemy_SkeletonWarrior.h"

#include "Weapon_RustySword.h"



UEnemyAttackNotifyState::UEnemyAttackNotifyState()
{

}

void UEnemyAttackNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	arrHittedReuslts.Empty();

	Owner = MeshComp->GetOwner();
	if (Owner != nullptr)
	{
		// 주인 종류에 맞게 캐스팅하고 nullptr 아닌거 찾기
		AEnemy_SkeletonWarrior* Character = Cast<AEnemy_SkeletonWarrior>(Owner);
		if (Character != nullptr) AttackDamage = Character->GetAttackDamage();
		else return;
	}
}

void UEnemyAttackNotifyState::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
{
	TArray<FHitResult> hit;

	AEnemy_SkeletonWarrior* Character = Cast<AEnemy_SkeletonWarrior>(Owner);
	if (Character != nullptr && Character->GetRightWeapon() != nullptr)
	{
		AWeapon_RustySword* RightWeapon = Cast<AWeapon_RustySword>(Character->GetRightWeapon());
		if (RightWeapon == nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("EnemyAttackNotifyState: RightWeapon is null!"));
			return;
		}

		FVector SocketStart = RightWeapon->GetMesh()->GetSocketLocation(FName("Sword_Start"));
		FVector SocketEnd = RightWeapon->GetMesh()->GetSocketLocation(FName("Sword_End"));

		DrawDebugLine(Character->GetWorld(), SocketStart, SocketEnd, FColor::Orange, false, 1.5f, false, 1.5f);

		Character->GetWorld()->LineTraceMultiByChannel(
			hit,
			SocketStart,
			SocketEnd,
			ECollisionChannel::ECC_GameTraceChannel5 // EnemyAttack
		);

		// 맞은 대상이 있으면
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
						GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Orange, hittedCharacter->GetName());
						arrHittedReuslts.Add(hittedCharacter);

						// 플레이어가 패링 중이면
						if (hittedCharacter->GetIsParrying() == true)
						{
							AEnemy_Base* OwnerCast = Cast<AEnemy_Base>(Owner);
							if (OwnerCast != nullptr)
							{
								OwnerCast->PlayGuardBreakAnimation();
								OwnerCast->ChangeState(EMONSTER_STATE::GUARD_BREAK);
							}

							return;
						}

						GiveDamage(Character, hittedCharacter);

						// 내적 계산하기
						FVector OwnerForward = Character->GetActorForwardVector();
						FVector HittedActorForward = hittedCharacter->GetActorForwardVector();
						float Dot = FVector::DotProduct(OwnerForward, HittedActorForward);
						float AcosAngle = FMath::Acos(Dot);
						float AngleDegree = FMath::RadiansToDegrees(AcosAngle);
						
						hittedCharacter->PlayHitAniamtion(AngleDegree);						
					}
				}
			}
		}
	}
	// 캐릭터는 있는데 오른손 장비가 없으면
	else if (Character != nullptr && Character->GetRightWeapon() == nullptr)
	{
		// 구현할 계획이 있으면 TODO
	}
	else return;
}

void UEnemyAttackNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{

}

void UEnemyAttackNotifyState::GiveDamage(AEnemy_Base* _Attacker, APlayerCharacter* _DamageTo)
{
	FDamageEvent DamageEvent;

	_DamageTo->TakeDamage(AttackDamage, DamageEvent, _Attacker->GetController(), Owner);
}
