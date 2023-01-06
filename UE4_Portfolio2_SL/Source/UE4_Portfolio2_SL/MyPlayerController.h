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
	// TSubclassOf�� ������ UClass Ÿ���� �������� �������ִ� ���ø� Ŭ������.
	// ���⼭�� TSubclassOf ���ø� Ŭ������ ������ BP Ŭ������ �޾ƿ� �� 
	// �θ� Ŭ������ ������ C++ Ŭ������ ��ü�� �־��� �� ����Ѵ�.
	UPROPERTY()
	TSubclassOf<UUserWidget> MainHUD_Class; // HUD Ŭ������ ����

	// ���� ����ִ� UI������ ����
	// UI������ ������ �����ؾ� �ش� ������ ������ �̸����� ������ �� �ִ�.
	// ex. UI ����(AddToViewPort()), �����ϱ�(RemoveFromParent())
	UPROPERTY()
	UUserWidget* MainHUD_Widget;


public:
	UUserWidget* GetMainHUDWidget() { return MainHUD_Widget; }
};