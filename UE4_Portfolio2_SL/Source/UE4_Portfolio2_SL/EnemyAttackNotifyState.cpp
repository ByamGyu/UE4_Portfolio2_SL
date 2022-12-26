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
		// ���� ������ �°� ĳ�����ϰ� nullptr �ƴѰ� ã��
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

		// ���� ����� ������
		if (hit.IsValidIndex(0))
		{
			for (int i = 0; i < hit.Num(); i++)
			{
				if (hit[i].GetActor()->IsA(AActor::StaticClass()))
				{
					// ���� PlayerCharacter Ÿ���̸�
					APlayerCharacter* hittedCharacter = Cast<APlayerCharacter>(hit[i].GetActor());
					if (!arrHittedReuslts.Contains(hittedCharacter) && hittedCharacter != nullptr)
					{
						GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Orange, hittedCharacter->GetName());
						arrHittedReuslts.Add(hittedCharacter);

						// �÷��̾ �и� ���̸�
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

						// ���� ����ϱ�
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
	// ĳ���ʹ� �ִµ� ������ ��� ������
	else if (Character != nullptr && Character->GetRightWeapon() == nullptr)
	{
		// ������ ��ȹ�� ������ TODO
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
