#pragma once

#include "EngineMinimal.h"
#include "GameFramework/PlayerController.h"

#include "Components/WidgetComponent.h"
#include "UserWidget_HUD.h"

#include "MyPlayerController.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	

public:
	AMyPlayerController();


private:
	UPROPERTY()
	TSubclassOf<UUserWidget> MainHUD_Class; // HUD 클래스를 저장

	// 현재 들고있는 UI위젯을 저장
	// UI위젯을 변수에 저장해야 해당 위젯을 가지고 이리저리 조작할 수 있다.
	// ex. UI 띄우기(AddToViewPort()), 제거하기(RemoveFromParent())
	UPROPERTY()
	UUserWidget* MainHUD_Widget;


public:
	UUserWidget* GetMainHUDWidget() { return MainHUD_Widget; }
};
