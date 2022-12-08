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

	// ��Ƽ���� �������κ��� ����� ���� ������ �����ϱ�
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
	TArray<FHitResult> hit; // ���� ���͸� ������ �ӽ� �迭

	AActor* Owner = MeshComp->GetOwner(); // ��Ƽ���̸� �����ϴ� ĳ���� ��������
	if (Owner != nullptr)
	{
		// AActor�� �÷��̾� ĳ����(��Ƽ���� �����ϴ� ����)���� ��ȯ
		APlayerCharacter* Character = Cast<APlayerCharacter>(Owner);
		if (Character != nullptr && Character->GetRightWeapon() != nullptr) // ĳ���Ϳ� ������ ���Ⱑ ������
		{
			// ������ ���� ĳ�����ؼ� �����ϱ�
			AWeapon_Default* RightWeapon = Character->GetRightWeapon();

			// ������ ���� ��ġ ��������
			FVector SocketTopLoc = RightWeapon->GetMesh()->GetSocketLocation(FName("Sword_Start"));
			FVector SocketEndLoc = RightWeapon->GetMesh()->GetSocketLocation(FName("Sword_End"));

			// ĳ���͸� ���ؼ� GetWorld()�ϰ� ����׶��� �׸���
			DrawDebugLine(Character->GetWorld(), SocketTopLoc, SocketEndLoc, FColor::Green, false, 1.5f, false, 1.5f);

			// ĳ���͸� ���ؼ� GetWorld()�ϰ� ����Ʈ���̽� �ϱ�
			Character->GetWorld()->LineTraceMultiByChannel(
				hit, // �ӽ� �迭�� ���� ���� �����ϱ�
				SocketTopLoc,
				SocketEndLoc,
				ECollisionChannel::ECC_GameTraceChannel2 // PlayerAttack
			);

			if (hit.IsValidIndex(0)) // ���� ������ ������
			{
				for (int i = 0; i < hit.Num(); i++)
				{
					if (hit[i].GetActor()->IsA(AActor::StaticClass()))
					{
						// �÷��̾� ĳ���� ������ ���
						APlayerCharacter* hittedActor = Cast<APlayerCharacter>(hit[i].GetActor());
						if (!arrHittedResults.Contains(hittedActor) && hittedActor != nullptr) // �ߺ� ���� �迭�� ������
						{
							GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, hittedActor->GetName());
							arrHittedResults.Add(hittedActor); // �ߺ� ������ ���� �߰��ϱ�
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