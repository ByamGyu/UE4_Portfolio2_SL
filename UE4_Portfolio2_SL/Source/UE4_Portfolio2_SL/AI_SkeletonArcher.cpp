#include "AI_SkeletonArcher.h"
#include "Enemy_SkeletonArcher.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"



AAI_SkeletonArcher::AAI_SkeletonArcher()
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BTAsset(TEXT("BehaviorTree'/Game/MyFolder/Enemy_SkeletonArcher/BT_SkeletonArcher.BT_SkeletonArcher'"));
	if (BTAsset.Succeeded()) BT = BTAsset.Object;

	static ConstructorHelpers::FObjectFinder<UBlackboardData> BBAsset(TEXT("BlackboardData'/Game/MyFolder/Enemy_SkeletonArcher/BB_SkeletonArcher.BB_SkeletonArcher'"));
	if (BBAsset.Succeeded()) BB = BBAsset.Object;
}

void AAI_SkeletonArcher::OnPossess(APawn* InPawn)
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
