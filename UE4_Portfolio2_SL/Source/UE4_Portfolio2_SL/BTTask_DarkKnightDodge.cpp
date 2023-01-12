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
			return EBTNodeResult::Failed;
		}
		else return EBTNodeResult::Failed;
	}
	
	
	auto Target = Cast<APlayerCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AAI_Base::TargetKey));
	if(Target == nullptr) return EBTNodeResult::Failed;

	// Rotation ���뵵
	FVector thisLocation = pCharacter->GetActorLocation();
	FVector TargetLocation = Target->GetActorLocation();

	// Target�� �� ������ �Ÿ� ���
	float Dist = pCharacter->GetDistanceTo(Target);

	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Dodge???"));

	// ������ �Ÿ��� DistanceToTaret ���ϰ�, Target�� �������̸�
	if (Dist <= DistanceToTaret && Target->GetIsAttacking() == true)
	{
		// ȸ�� ����
		if (pCharacter->GetEquipmentState() == EEQUIPMENT_STATE::SWORD)
		{
			// ��ǥ���� ���ؼ� ĳ���͸� ��� ȸ����Ŵ		
			FRotator tmpRot = UKismetMathLibrary::FindLookAtRotation(thisLocation, TargetLocation);
			pCharacter->SetActorRotation(tmpRot);

			pCharacter->DedicatedAnim_PlayDodgeRandomAll();

			GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Dodge!!"));
		}
	}

	// Task�� ����Ǹ�
	// �ϴ� ���� �۾��� ���������� �˸�
	return EBTNodeResult::InProgress;
}

void UBTTask_DarkKnightDodge::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	// AI�� ������ �ִ��� Ȯ��
	auto pCharacter = Cast<AEnemy_DarkKnight>(OwnerComp.GetAIOwner()->GetPawn());
	if (pCharacter == nullptr) FinishLatentTask(OwnerComp, EBTNodeResult::Failed);


	// ���� ȸ�����̸�
	//if (pCharacter->GetIsAttacking() == false) FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	if (pCharacter->GetState() != EMONSTER_STATE::DODGE) FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
}
