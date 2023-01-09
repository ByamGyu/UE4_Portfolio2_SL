#include "AI_DarkKnight.h"
#include "Enemy_DarkKnight.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"



AAI_DarkKnight::AAI_DarkKnight()
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BTAsset(TEXT("BehaviorTree'/Game/MyFolder/Enemy_DarkKnight/BT_DarkKnight.BT_DarkKnight'"));
	if (BTAsset.Succeeded()) BT = BTAsset.Object;

	static ConstructorHelpers::FObjectFinder<UBlackboardData> BBAsset(TEXT("BlackboardData'/Game/MyFolder/Enemy_DarkKnight/BB_DarkKnight.BB_DarkKnight'"));
	if (BBAsset.Succeeded()) BB = BBAsset.Object;
}

void AAI_DarkKnight::OnPossess(APawn* InPawn)
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
