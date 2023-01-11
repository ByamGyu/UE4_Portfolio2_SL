#include "BTTask_TurntoTarget.h"
#include "AI_Base.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Enemy_Base.h"


UBTTask_TurntoTarget::UBTTask_TurntoTarget()
{
	NodeName = TEXT("TurntoTarget");
}

EBTNodeResult::Type UBTTask_TurntoTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);


	auto pCharacter = OwnerComp.GetAIOwner()->GetPawn();
	if (pCharacter == nullptr) return EBTNodeResult::Failed;

	// BB�� ���� Target�� �޾ƿ´�.
	APlayerCharacter* Target = Cast<APlayerCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AAI_Base::TargetKey));
	if (Target == nullptr) return EBTNodeResult::Failed;

	FVector LookVector = Target->GetActorLocation() - pCharacter->GetActorLocation();
	LookVector.Z = 0.0f;

	FRotator TargetRot = FRotationMatrix::MakeFromX(LookVector).Rotator();
	
	
	AEnemy_Base* pEnemyCharacter = Cast<AEnemy_Base>(pCharacter);
	if (pEnemyCharacter != nullptr)
	{
		// ó�����ϴ� ������ ���� ȸ������ ���ϰ� ��
		// ����극��ũ ���µ� ����
		if (pEnemyCharacter->GetState() == EMONSTER_STATE::EXECUTED
			|| pEnemyCharacter->GetState() == EMONSTER_STATE::GUARD_BREAK
			|| pEnemyCharacter->GetState() == EMONSTER_STATE::IMPACT_WEAK
			|| pEnemyCharacter->GetState() == EMONSTER_STATE::IMPACT_WEAK
			|| pEnemyCharacter->GetState() == EMONSTER_STATE::JUMP
			|| pEnemyCharacter->GetState() == EMONSTER_STATE::FALL
			|| pEnemyCharacter->GetState() == EMONSTER_STATE::SLEEP_SITDOWN
			|| pEnemyCharacter->GetState() == EMONSTER_STATE::SLEEP_STAND
			|| pEnemyCharacter->GetState() == EMONSTER_STATE::PARRY)
		{
			// ȸ������ ����
		}
		else
		{
			// ������ ȸ����
			// ó�� ��ġ�� 3.0f�̾���
			pCharacter->SetActorRotation(FMath::RInterpTo(pCharacter->GetActorRotation(), TargetRot, GetWorld()->GetDeltaSeconds(), 1.5f));
		}
	}

	//FMath::RInterpConstantTo

	return EBTNodeResult::Succeeded;
}
