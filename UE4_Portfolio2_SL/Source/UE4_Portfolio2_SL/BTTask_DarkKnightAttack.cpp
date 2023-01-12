#include "BTTask_DarkKnightAttack.h"
#include "Enemy_Base.h"
#include "Enemy_DarkKnight.h"
#include "AI_Base.h"


// Enemy_DarkKnight ���� ���� �׽�ũ


UBTTask_DarkKnightAttack::UBTTask_DarkKnightAttack()
{
	bNotifyTick = true;
}

EBTNodeResult::Type UBTTask_DarkKnightAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);


	// AI�� ������ �ִ��� Ȯ��
	auto pCharacter = Cast<AEnemy_DarkKnight>(OwnerComp.GetAIOwner()->GetPawn());
	if (pCharacter == nullptr) return EBTNodeResult::Failed;

	// ������ �Ұ����� ���� ����(�ִ� ��Ÿ�ֿ��� �� �ؼ� �ǹ� ���� ����)
	if (pCharacter->GetState() == EMONSTER_STATE::IMPACT_WEAK
		|| pCharacter->GetState() == EMONSTER_STATE::IMPACT_STRONG
		|| pCharacter->GetState() == EMONSTER_STATE::KNOCK_DOWN)
	{
		if (pCharacter->GetEquipmentState() == EEQUIPMENT_STATE::GREATSWORD)
		{
			// 2������ ������ ����
		}
		else return EBTNodeResult::Failed;
	}

	
	
	// ���� ����
	if (pCharacter->GetEquipmentState() == EEQUIPMENT_STATE::SWORD)
	{
		pCharacter->DedicatedAnim_PlaySwordRandomAttackAll();
	}
	else if (pCharacter->GetEquipmentState() == EEQUIPMENT_STATE::GREATSWORD)
	{
		pCharacter->DedicatedAnim_PlayGreatSwordRandomAttackAll();
	}

	// Task�� ����Ǹ�
	// �ϴ� ���� �۾��� ���������� �˸�
	return EBTNodeResult::InProgress;
}

void UBTTask_DarkKnightAttack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	// AI�� ������ �ִ��� Ȯ��
	auto pCharacter = Cast<AEnemy_Base>(OwnerComp.GetAIOwner()->GetPawn());
	if (pCharacter == nullptr) FinishLatentTask(OwnerComp, EBTNodeResult::Failed);


	// ���� �������� ���¸� ������ ��� �̷��
	if (pCharacter->GetIsAttacking() == false) FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
}