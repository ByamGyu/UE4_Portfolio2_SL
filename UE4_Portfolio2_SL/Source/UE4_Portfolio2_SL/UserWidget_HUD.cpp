#include "UserWidget_HUD.h"



// ������
void UUserWidget_HUD::NativeConstruct()
{
	Super::NativeConstruct(); // ������ �׾����� ���� ����


	UW_HP = Cast<UUserWidget_HPBar>(GetWidgetFromName("BPUI_HPBar_Player"));
	UW_Stamina = Cast<UUserWidget_StaminaBar>(GetWidgetFromName("BPUI_StaminaBar_Player"));
		
	UW_HP->SetHPBar(1.0f);
	UW_Stamina->SetStaminaBar(1.0f);
}


void UUserWidget_HUD::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime); // ������ �׾����� ���� ����


}