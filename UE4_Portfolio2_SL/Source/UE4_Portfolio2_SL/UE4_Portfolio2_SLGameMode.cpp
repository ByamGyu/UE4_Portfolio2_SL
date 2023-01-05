#include "UE4_Portfolio2_SLGameMode.h"
#include "UE4_Portfolio2_SLCharacter.h"
#include "UObject/ConstructorHelpers.h"



AUE4_Portfolio2_SLGameMode::AUE4_Portfolio2_SLGameMode()
{
	// 시작 캐릭터 설정
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("Blueprint'/Game/MyFolder/PlayerCharacter/BP_PlayerCharacter.BP_PlayerCharacter_C'"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}


	// 플레이어 컨트롤러 바꾸기
	PlayerControllerClass = AMyPlayerController::StaticClass();
}