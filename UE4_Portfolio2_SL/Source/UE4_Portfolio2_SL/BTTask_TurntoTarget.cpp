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

	// BB로 부터 Target을 받아온다.
	APlayerCharacter* Target = Cast<APlayerCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AAI_Base::TargetKey));
	if (Target == nullptr) return EBTNodeResult::Failed;

	FVector LookVector = Target->GetActorLocation() - pCharacter->GetActorLocation();
	LookVector.Z = 0.0f;

	FRotator TargetRot = FRotationMatrix::MakeFromX(LookVector).Rotator();
	
	
	AEnemy_Base* pEnemyCharacter = Cast<AEnemy_Base>(pCharacter);
	if (pEnemyCharacter != nullptr)
	{
		// 처형당하는 상태일 때는 회전하지 못하게 함
		// 가드브레이크 상태도 동일
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
			// 회전하지 않음
		}
		else
		{
			// 서서히 회전함
			// 처음 수치는 3.0f이었음
			pCharacter->SetActorRotation(FMath::RInterpTo(pCharacter->GetActorRotation(), TargetRot, GetWorld()->GetDeltaSeconds(), 1.5f));
		}
	}

	//FMath::RInterpConstantTo

	return EBTNodeResult::Succeeded;
}
