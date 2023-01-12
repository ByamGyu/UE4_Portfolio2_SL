#include "BTTask_DarkKnightJumpAttack.h"
#include "Enemy_Base.h"
#include "Enemy_DarkKnight.h"
#include "Kismet/KismetMathLibrary.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AI_Base.h"


// Enemy_DarkKnight ���� ���� ���� �׽�ũ


UBTTask_DarkKnightJumpAttack::UBTTask_DarkKnightJumpAttack()
{
	bNotifyTick = true;
}

EBTNodeResult::Type UBTTask_DarkKnightJumpAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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
	

	// ��ǥ���� ���ؼ� ĳ���͸� ��� ȸ����Ŵ
	auto Target = Cast<APlayerCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AAI_Base::TargetKey));
	FVector thisLocation = pCharacter->GetActorLocation();
	FVector TargetLocation = Target->GetActorLocation();
	FRotator tmpRot = UKismetMathLibrary::FindLookAtRotation(thisLocation, TargetLocation);
	pCharacter->SetActorRotation(tmpRot);

	// ���� ����
	if (pCharacter->GetEquipmentState() == EEQUIPMENT_STATE::SWORD)
	{
		pCharacter->DedicatedAnim_PlaySwordJumpAttackMontage();
	}
	else if (pCharacter->GetEquipmentState() == EEQUIPMENT_STATE::GREATSWORD)
	{
		pCharacter->DedicatedAnim_PlayGreatSwordRandomRunningAttackAll();
	}

	// Task�� ����Ǹ�
	// �ϴ� ���� �۾��� ���������� �˸�
	return EBTNodeResult::InProgress;
}

void UBTTask_DarkKnightJumpAttack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	// AI�� ������ �ִ��� Ȯ��
	auto pCharacter = Cast<AEnemy_Base>(OwnerComp.GetAIOwner()->GetPawn());
	if (pCharacter == nullptr) FinishLatentTask(OwnerComp, EBTNodeResult::Failed);


	// ���� �������� ���¸� ������ ��� �̷��
	if (pCharacter->GetIsAttacking() == false) FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
}
