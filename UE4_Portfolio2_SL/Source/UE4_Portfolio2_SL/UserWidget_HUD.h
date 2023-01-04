#pragma once

#include "EngineMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "UserWidget_HPBar.h"
#include "UserWidget_StaminaBar.h"
#include "UserWidget_HUD.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API UUserWidget_HUD : public UUserWidget
{
	GENERATED_BODY()
	

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;


	// UserWidget를 변수로 저장하고 직접 조종
private:
	UUserWidget_HPBar* UW_HP;
	UUserWidget_StaminaBar* UW_Stamina;
};
