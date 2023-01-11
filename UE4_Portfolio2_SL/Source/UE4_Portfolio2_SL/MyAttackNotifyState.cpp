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

	// 노티파이 주인으로부터 대미지 정보 가져와 저장하기
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
	TArray<FHitResult> hit; // 맞은 액터를 저장할 임시 배열

	AActor* Owner = MeshComp->GetOwner(); // 노티파이를 실행하는 캐릭터 가져오기
	if (Owner != nullptr)
	{
		// AActor를 플레이어 캐릭터(노티파이 실행하는 주인)으로 전환
		APlayerCharacter* Character = Cast<APlayerCharacter>(Owner);
		if (Character != nullptr && Character->GetRightWeapon() != nullptr) // 캐릭터에 오른쪽 무기가 있으면
		{
			// 오른쪽 무기 저장하기
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

			// 맞은 대상들이 있으면
			if (hit.IsValidIndex(0)) 
			{
				for (int i = 0; i < hit.Num(); i++)
				{
					if (hit[i].GetActor()->IsA(AActor::StaticClass()))
					{
						// 적이 Enemy_Base 타입이면
						AEnemy_Base* hittedCharacter = Cast<AEnemy_Base>(hit[i].GetActor());
						// 중복 체크 및 null 체크 (적 Mesh 콜리전은 EnemyPhysicsActor!!!)
						if (!arrHittedResults.Contains(hittedCharacter) && hittedCharacter != nullptr)
						{
							GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, hittedCharacter->GetName());
							arrHittedResults.Add(hittedCharacter);

							// 내적 계산하기(현재 사용하지 않음)
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
		// 캐릭터는 있는데 오른손 장비가 없으면
		else if (Character != nullptr && Character->GetRightWeapon() == nullptr)
		{
			// 구현할 계획이면 TODO
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