#pragma once

#include "EngineMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "UserWidget_HPBar.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API UUserWidget_HPBar : public UUserWidget
{
	GENERATED_BODY()
	

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;


	// ProgressBar를 변수로 저장하고 직접 조종
private:
	UProgressBar* PB_HPBar;


public:
	void SetPercent(float _Ratio);
};