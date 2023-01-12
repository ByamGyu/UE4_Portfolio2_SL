#include "BTService_UpdatePercent.h"
#include "AI_Base.h"
#include "Enemy_Base.h"
#include "define.h"
#include "BehaviorTree/BlackboardComponent.h"



UBTService_UpdatePercent::UBTService_UpdatePercent()
{
	NodeName = TEXT("UpdatePercent");
	Interval = 0.5f;
	RandomDeviation = 0.0f;
}

void UBTService_UpdatePercent::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);


	auto ControllingPawn = Cast<AEnemy_Base>(OwnerComp.GetAIOwner()->GetPawn());
	if (ControllingPawn == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("AI Owner is Missing"));
		return;
	}

	if (OwnerComp.GetBlackboardComponent() != nullptr)
	{
		// 앞으로의 행동을 결정할 확률값을 지정한다.
		float tmp = FMath::FRandRange(0.0f, 1.0f);
		OwnerComp.GetBlackboardComponent()->SetValueAsFloat(AAI_Base::PercentKey, tmp);
	}
	else GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("AI's BB is Missing"));
	
}
