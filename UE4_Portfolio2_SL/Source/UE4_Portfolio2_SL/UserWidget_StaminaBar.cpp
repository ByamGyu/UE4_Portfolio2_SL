#include "UserWidget_StaminaBar.h"




// ������
void UUserWidget_StaminaBar::NativeConstruct()
{
	Super::NativeConstruct(); // ������ �׾����� ���� ����


	// �������Ʈ���� "PB_HPBar"��� �̸��� ProgressBar�� ������ �����Ѵ�.
	PB_StaminaBar = Cast<UProgressBar>(GetWidgetFromName("PB_StaminaBar"));

	SetPercent(1.0f);
}

void UUserWidget_StaminaBar::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime); // ������ �׾����� ���� ����


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