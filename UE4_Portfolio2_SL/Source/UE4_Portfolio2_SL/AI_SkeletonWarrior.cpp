#include "AI_SkeletonWarrior.h"
#include "Enemy_SkeletonWarrior.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"





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