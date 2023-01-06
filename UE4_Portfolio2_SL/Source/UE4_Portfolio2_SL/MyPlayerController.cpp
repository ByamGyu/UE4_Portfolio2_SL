#include "MyPlayerController.h"



AMyPlayerController::AMyPlayerController()
{
	// HUD ����(���� ���� Ŭ������ ���⼭�� �Է��ϴ� ��???)
	// �̿� ���� ������� HUD�� ������ ��� �� ����

	// Main HUD Ŭ����
	static ConstructorHelpers::FClassFinder<UUserWidget_HUD> MAIN_HUD(TEXT("WidgetBlueprint'/Game/MyFolder/UI/BPUI_HUD.BPUI_HUD_C'"));
	if (MAIN_HUD.Succeeded())
	{
		// Ŭ������ ����
		MainHUD_Class = MAIN_HUD.Class;

		// ���� ������ �������� Ŭ������ ������� ���� ���� �� ����
		MainHUD_Widget = CreateWidget(GetWorld(), MainHUD_Class);
		if (MainHUD_Widget != nullptr)
		{
			// ���� ���� ȭ�鿡 ����
			MainHUD_Widget->AddToViewport();
			
			// ���� ���� ĳ�����ؼ� �Լ��� ������ ����ϱ�
			UUserWidget_HUD* MainHUD = Cast<UUserWidget_HUD>(MainHUD_Widget);
			if (MainHUD != nullptr)
			{
				MainHUD->GetHPBar()->SetPercent(0.5f);
				MainHUD->GetStaminaBar()->SetPercent(0.75f);
			}
		}
	}


	// UI ���� �Լ��� UI�� ����ϴ� ĳ���� Ŭ�������� �ۼ� �� BeginPlay()���� ���Ž��Ѿ� �Ѵ�.
	// RefreshUI �Լ��� �÷��̾� ĳ���Ϳ��� ���� ������� ��Ʈ�ѷ��� ��������,
	// �ش� ��Ʈ�ѷ����� HUD������ ������ ���� ĳ�����ؼ� �����ϴ� ����
	
	// Ȥ�� UI �Ŵ����� �����ؼ� ���
}