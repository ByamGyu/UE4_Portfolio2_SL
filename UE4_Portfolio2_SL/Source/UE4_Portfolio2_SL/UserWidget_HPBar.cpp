#include "UserWidget_HPBar.h"



// UserWidget에서는 사용자가 생성자를 따로 생성하지 못함.




// 생성자
void UUserWidget_HPBar::NativeConstruct()
{
	Super::NativeConstruct(); // 빨간줄 그어져도 문제 없음


	// 블루프린트에서 "PB_HPBar"라는 이름의 ProgressBar를 가져와 저장한다.
	PB_HPBar = Cast<UProgressBar>(GetWidgetFromName("PB_HPBar"));

	// Test
	SetHPBar(1.0f);
}

// Tick
void UUserWidget_HPBar::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime); // 빨간줄 그어져도 문제 없음

}

void UUserWidget_HPBar::SetHPBar(float _Ratio)
{
	if (PB_HPBar == nullptr)
	{
		PB_HPBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PB_HPBar")));
	}
	else
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, FString::SanitizeFloat(_Ratio));

		PB_HPBar->SetPercent(_Ratio);
	}
}