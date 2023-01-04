#include "UserWidget_HPBar.h"



// UserWidget������ ����ڰ� �����ڸ� ���� �������� ����.




// ������
void UUserWidget_HPBar::NativeConstruct()
{
	Super::NativeConstruct(); // ������ �׾����� ���� ����


	// �������Ʈ���� "PB_HPBar"��� �̸��� ProgressBar�� ������ �����Ѵ�.
	PB_HPBar = Cast<UProgressBar>(GetWidgetFromName("PB_HPBar"));

	// Test
	SetHPBar(1.0f);
}

// Tick
void UUserWidget_HPBar::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime); // ������ �׾����� ���� ����

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