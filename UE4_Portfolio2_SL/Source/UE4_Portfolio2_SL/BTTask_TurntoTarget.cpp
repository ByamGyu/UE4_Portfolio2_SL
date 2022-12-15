#include "BTTask_TurntoTarget.h"
#include "AI_SkeletonWarrior.h"
#include "Enemy_SkeletonWarrior.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"


UBTTask_TurntoTarget::UBTTask_TurntoTarget()
{
	NodeName = TEXT("TurntoTarget");
}

EBTNodeResult::Type UBTTask_TurntoTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);


	auto pCharacter = OwnerComp.GetAIOwner()->GetPawn();
	if (pCharacter == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	APlayerCharacter* Target = Cast<APlayerCharacter>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(AAI_SkeletonWarrior::TargetKey));
	if (Target == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	FVector LookVector = Target->GetActorLocation() - pCharacter->GetActorLocation();
	LookVector.Z = 0.0f;

	FRotator TargetRot = FRotationMatrix::MakeFromX(LookVector).Rotator();
	pCharacter->SetActorRotation(FMath::RInterpTo(pCharacter->GetActorRotation(), TargetRot, GetWorld()->GetDeltaSeconds(), 2.0f));


	return EBTNodeResult::Succeeded;

}
