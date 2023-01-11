#include "AI_Base.h"


// 이 클래스의 이름 변수와 BB의 변수를 연결
// 다른 코드에서 관련 값을 참조하기가 편하지만, 하드코딩으로 값을 변경해야 한다.
const FName AAI_Base::HomePosKey(TEXT("HomePos"));
const FName AAI_Base::PatrolPosKey(TEXT("PatrolPos"));
const FName AAI_Base::TargetKey(TEXT("Target"));
const FName AAI_Base::PercentKey(TEXT("Percent"));
const FName AAI_Base::BackwardPosKey(TEXT("BackwardPos"));
const FName AAI_Base::CurStateKey(TEXT("CurState"));
const FName AAI_Base::CurEquipmentKey(TEXT("CurEquipmentState"));


AAI_Base::AAI_Base()
{

}

void AAI_Base::OnUnPossess()
{
	Super::OnUnPossess();
}