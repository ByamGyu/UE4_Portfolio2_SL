#include "AI_Base.h"


// �� Ŭ������ �̸� ������ BB�� ������ ����
// �ٸ� �ڵ忡�� ���� ���� �����ϱⰡ ��������, �ϵ��ڵ����� ���� �����ؾ� �Ѵ�.
const FName AAI_Base::HomePosKey(TEXT("HomePos"));
const FName AAI_Base::PatrolPosKey(TEXT("PatrolPos"));
const FName AAI_Base::TargetKey(TEXT("Target"));
const FName AAI_Base::PercentKey(TEXT("Percent"));
const FName AAI_Base::BackwardPosKey(TEXT("BackwardPos"));
const FName AAI_Base::CurStateKey(TEXT("CurState"));


AAI_Base::AAI_Base()
{

}

void AAI_Base::OnUnPossess()
{
	Super::OnUnPossess();
}