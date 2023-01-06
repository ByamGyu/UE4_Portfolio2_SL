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
	// TSubclassOf의 역할은 UClass 타입의 안정성을 보장해주는 템플릿 클래스다.
	// 여기서는 TSubclassOf 템플릿 클래스로 생성한 BP 클래스를 받아온 후 
	// 부모 클래스로 지정한 C++ 클래스의 객체에 넣어준 후 사용한다.
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