#include "BTTask_DarkKnightAttack.h"
#include "Enemy_Base.h"
#include "Enemy_DarkKnight.h"
#include "AI_Base.h"


// Enemy_DarkKnight 전용 공격 테스크


UBTTask_DarkKnightAttack::UBTTask_DarkKnightAttack()
{
	bNotifyTick = true;
}

EBTNodeResult::Type UBTTask_DarkKnightAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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
			// 2페이즈 에서는 무시
		}
		else return EBTNodeResult::Failed;
	}

	
	
	// 공격 실행
	if (pCharacter->GetEquipmentState() == EEQUIPMENT_STATE::SWORD)
	{
		pCharacter->DedicatedAnim_PlaySwordRandomAttackAll();
	}
	else if (pCharacter->GetEquipmentState() == EEQUIPMENT_STATE::GREATSWORD)
	{
		pCharacter->DedicatedAnim_PlayGreatSwordRandomAttackAll();
	}

	// Task가 실행되면
	// 일단 현재 작업이 진행중임을 알림
	return EBTNodeResult::InProgress;
}

void UBTTask_DarkKnightAttack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	// AI의 주인이 있는지 확인
	auto pCharacter = Cast<AEnemy_Base>(OwnerComp.GetAIOwner()->GetPawn());
	if (pCharacter == nullptr) FinishLatentTask(OwnerComp, EBTNodeResult::Failed);


	// 현재 공격중인 상태면 성공을 잠시 미뤄둠
	if (pCharacter->GetIsAttacking() == false) FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
}