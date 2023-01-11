#include "MyAttackNotifyState.h"
#include "PlayerCharacter.h"
#include "Weapon_Default.h"
#include "Shield_Default.h"
#include "AI_Base.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "DrawDebugHelpers.h"



UMyAttackNotifyState::UMyAttackNotifyState()
{
	
}

void UMyAttackNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	arrHittedResults.Empty();

	// ��Ƽ���� �������κ��� ����� ���� ������ �����ϱ�
	AActor* Owner = MeshComp->GetOwner();
	if (Owner != nullptr)
	{
		APlayerCharacter* Character = Cast<APlayerCharacter>(Owner);
		if (Character != nullptr) AttackDamage = Character->GetAttackDamage();
		else return;
	}
}

void UMyAttackNotifyState::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
{
	TArray<FHitResult> hit; // ���� ���͸� ������ �ӽ� �迭

	AActor* Owner = MeshComp->GetOwner(); // ��Ƽ���̸� �����ϴ� ĳ���� ��������
	if (Owner != nullptr)
	{
		// AActor�� �÷��̾� ĳ����(��Ƽ���� �����ϴ� ����)���� ��ȯ
		APlayerCharacter* Character = Cast<APlayerCharacter>(Owner);
		if (Character != nullptr && Character->GetRightWeapon() != nullptr) // ĳ���Ϳ� ������ ���Ⱑ ������
		{
			// ������ ���� �����ϱ�
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

			// ���� ������ ������
			if (hit.IsValidIndex(0)) 
			{
				for (int i = 0; i < hit.Num(); i++)
				{
					if (hit[i].GetActor()->IsA(AActor::StaticClass()))
					{
						// ���� Enemy_Base Ÿ���̸�
						AEnemy_Base* hittedCharacter = Cast<AEnemy_Base>(hit[i].GetActor());
						// �ߺ� üũ �� null üũ (�� Mesh �ݸ����� EnemyPhysicsActor!!!)
						if (!arrHittedResults.Contains(hittedCharacter) && hittedCharacter != nullptr)
						{
							GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, hittedCharacter->GetName());
							arrHittedResults.Add(hittedCharacter);

							// ���� ����ϱ�(���� ������� ����)
							FVector OwnerForward = Character->GetActorForwardVector();
							FVector HittedActorForward = hittedCharacter->GetActorForwardVector();
							float Dot = FVector::DotProduct(OwnerForward, HittedActorForward);
							float AcosAngle = FMath::Acos(Dot);
							float AngleDegree = FMath::RadiansToDegrees(AcosAngle);
							hittedCharacter->PlayHitAniamtion(AngleDegree);

							GiveDamage(Character, hittedCharacter);

							AAI_Base* AIController_Enemy = Cast <AAI_Base>(hittedCharacter->GetController());
							if (AIController_Enemy != nullptr)
							{
								AIController_Enemy->GetBlackboardComponent()->SetValueAsObject(AAI_Base::TargetKey, Character);
							}
						}
					}
				}
			}
		}
		// ĳ���ʹ� �ִµ� ������ ��� ������
		else if (Character != nullptr && Character->GetRightWeapon() == nullptr)
		{
			// ������ ��ȹ�̸� TODO
		}
		else return;
	}
}

void UMyAttackNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	
}

void UMyAttackNotifyState::GiveDamage(APlayerCharacter* _Attacker, AEnemy_Base* _DamageTo)
{
	FDamageEvent DamageEvent;

	_DamageTo->TakeDamage(AttackDamage, DamageEvent, _Attacker->GetController(), _Attacker->GetRightWeapon());
}