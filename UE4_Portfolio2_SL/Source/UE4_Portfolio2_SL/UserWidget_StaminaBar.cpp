#include "UserWidget_StaminaBar.h"




// 생성자
void UUserWidget_StaminaBar::NativeConstruct()
{
	Super::NativeConstruct(); // 빨간줄 그어져도 문제 없음


	// 블루프린트에서 "PB_HPBar"라는 이름의 ProgressBar를 가져와 저장한다.
	PB_StaminaBar = Cast<UProgressBar>(GetWidgetFromName("PB_StaminaBar"));

	SetPercent(1.0f);
}

void UUserWidget_StaminaBar::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime); // 빨간줄 그어져도 문제 없음


}

void UUserWidget_StaminaBar::SetPercent(float _Ratio)
{
	if (PB_StaminaBar == nullptr)
	{
		PB_StaminaBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PB_StaminaBar")));
	}
	else
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, FString::SanitizeFloat(_Ratio));

		PB_StaminaBar->SetPercent(_Ratio);
	}
}