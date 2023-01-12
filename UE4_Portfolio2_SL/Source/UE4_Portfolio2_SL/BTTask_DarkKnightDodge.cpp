#include "BTTask_DarkKnightDodge.h"
#include "Enemy_Base.h"
#include "Enemy_DarkKnight.h"
#include "Kismet/KismetMathLibrary.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AI_Base.h"



UBTTask_DarkKnightDodge::UBTTask_DarkKnightDodge()
{
	bNotifyTick = true;

	DistanceToTaret = 200.0f;
}

EBTNodeResult::Type UBTTask_DarkKnightDodge::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);


	// AI의 주인이 있는지 확인
	auto pCharacter = Cast<AEnemy_DarkKnight>(OwnerComp.GetAIOwner()->GetPawn());
	if (pCharacter == nullptr) return EBTNodeResult::Failed;

	// 공격이 불가능한 상태 나열(애님 몽타주에서 다 해서 의미 없을 수도)
	if (pCharacter->GetState() == EMONSTER_STATE::IMPACT_WEAK
		|| pCharacter->GetState() == EMONSTER_STATE::IMPACT_STRONG
		|| pCharacter->GetState() == EMONSTER_STATE::KNOCK_DOWN)
	{
		if (pCharacter->GetEquipmentState() == EEQUIPMENT_STATE::GREATSWORD)
		{
			return EBTNodeResult::Failed;
		}
		else return EBTNodeResult::Failed;
	}
	
	
	auto Target = Cast<APlayerCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AAI_Base::TargetKey));
	if(Target == nullptr) return EBTNodeResult::Failed;

	// Rotation 계산용도
	FVector thisLocation = pCharacter->GetActorLocation();
	FVector TargetLocation = Target->GetActorLocation();

	// Target과 나 사이의 거리 계산
	float Dist = pCharacter->GetDistanceTo(Target);

	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Dodge???"));

	// 사이의 거리가 DistanceToTaret 이하고, Target이 공격중이면
	if (Dist <= DistanceToTaret && Target->GetIsAttacking() == true)
	{
		// 회피 실행
		if (pCharacter->GetEquipmentState() == EEQUIPMENT_STATE::SWORD)
		{
			// 목표물을 향해서 캐릭터를 즉시 회전시킴		
			FRotator tmpRot = UKismetMathLibrary::FindLookAtRotation(thisLocation, TargetLocation);
			pCharacter->SetActorRotation(tmpRot);

			pCharacter->DedicatedAnim_PlayDodgeRandomAll();

			GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Dodge!!"));
		}
	}

	// Task가 실행되면
	// 일단 현재 작업이 진행중임을 알림
	return EBTNodeResult::InProgress;
}

void UBTTask_DarkKnightDodge::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	// AI의 주인이 있는지 확인
	auto pCharacter = Cast<AEnemy_DarkKnight>(OwnerComp.GetAIOwner()->GetPawn());
	if (pCharacter == nullptr) FinishLatentTask(OwnerComp, EBTNodeResult::Failed);


	// 현재 회피중이면
	//if (pCharacter->GetIsAttacking() == false) FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	if (pCharacter->GetState() != EMONSTER_STATE::DODGE) FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
}
