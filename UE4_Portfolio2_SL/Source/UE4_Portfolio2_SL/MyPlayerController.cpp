#include "MyPlayerController.h"



AMyPlayerController::AMyPlayerController()
{
	// HUD 관련(내가 만든 클래스는 여기서만 입력하는 듯???)
	// 이와 같은 방식으로 HUD를 여러개 띄울 수 있음

	// Main HUD 클래스
	static ConstructorHelpers::FClassFinder<UUserWidget_HUD> MAIN_HUD(TEXT("WidgetBlueprint'/Game/MyFolder/UI/BPUI_HUD.BPUI_HUD_C'"));
	if (MAIN_HUD.Succeeded())
	{
		// 클래스를 저장
		MainHUD_Class = MAIN_HUD.Class;

		// 위젯 변수에 현재월드와 클래스를 기반으로 위젯 생성 및 저장
		MainHUD_Widget = CreateWidget(GetWorld(), MainHUD_Class);
		if (MainHUD_Widget != nullptr)
		{
			// 위젯 변수 화면에 띄우기
			MainHUD_Widget->AddToViewport();
			
			// 위젯 변수 캐스팅해서 함수와 변수들 사용하기
			UUserWidget_HUD* MainHUD = Cast<UUserWidget_HUD>(MainHUD_Widget);
			if (MainHUD != nullptr)
			{
				MainHUD->GetHPBar()->SetPercent(0.5f);
				MainHUD->GetStaminaBar()->SetPercent(0.75f);
			}
		}
	}


	// UI 갱신 함수는 UI를 사용하는 캐릭터 클래스에서 작성 및 BeginPlay()에서 갱신시켜야 한다.
	// RefreshUI 함수는 플레이어 캐릭터에서 현재 사용중인 컨트롤러를 가져오고,
	// 해당 컨트롤러에서 HUD위젯을 가져온 다음 캐스팅해서 조작하는 구조
	
	// 혹은 UI 매니저를 제작해서 사용
}