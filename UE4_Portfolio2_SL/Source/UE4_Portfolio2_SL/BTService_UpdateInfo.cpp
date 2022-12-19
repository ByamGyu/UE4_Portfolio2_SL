#include "BTService_UpdateInfo.h"
#include "AI_Base.h"
#include "Enemy_Base.h"
#include "define.h"
#include "BehaviorTree/BlackboardComponent.h"



UBTService_UpdateInfo::UBTService_UpdateInfo()
{
	NodeName = TEXT("UpdateInfo");
	Interval = 0.001f;
	RandomDeviation = 0.0f;
}

void UBTService_UpdateInfo::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
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
		// 조종하는 캐릭터의 BB 가져오기
		auto BB = OwnerComp.GetBlackboardComponent();
		if (BB == nullptr) return;
		
		// 조종중인 캐릭터의 State 정보 가져오기
		EMONSTER_STATE tmpstate = ControllingPawn->GetState();

		// BB에 있는 변수중 "CurState"가 있나 확인하기
		FBlackboard::FKey BBKey_CurState = BB->GetKeyID("CurState");
		if (BB->IsValidKey(BBKey_CurState))
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsEnum(AAI_Base::CurStateKey, (uint8)tmpstate);
		}
	}
}