#include "AI_SkeletonWarrior.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"


// 다른 코드에서 관련 값을 참조하기가 편하지만, 하드코딩으로 값을 변경해야 한다.
const FName AAI_SkeletonWarrior::HomePosKey(TEXT("HomePos"));
const FName AAI_SkeletonWarrior::PatrolPosKey(TEXT("PatrolPos"));
const FName AAI_SkeletonWarrior::TargetKey(TEXT("Target"));


AAI_SkeletonWarrior::AAI_SkeletonWarrior()
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BTAsset(TEXT("BehaviorTree'/Game/MyFolder/Enemy_SkeletonWarrior/BT_SkeletonWarrior.BT_SkeletonWarrior'"));
	if (BTAsset.Succeeded()) BT = BTAsset.Object;

	static ConstructorHelpers::FObjectFinder<UBlackboardData> BBAsset(TEXT("BlackboardData'/Game/MyFolder/Enemy_SkeletonWarrior/BB_SkeletonWarrior.BB_SkeletonWarrior'"));
	if (BBAsset.Succeeded()) BB = BBAsset.Object;
}

void AAI_SkeletonWarrior::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (UseBlackboard(BB, Blackboard))
	{
		Blackboard->SetValueAsVector(HomePosKey, InPawn->GetActorLocation());

		if (!RunBehaviorTree(BT))
		{
			GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("AIController couldn't run BT!"));
		}
	}
}