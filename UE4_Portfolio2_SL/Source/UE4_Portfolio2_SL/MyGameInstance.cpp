#include "MyGameInstance.h"


UMyGameInstance::UMyGameInstance()
{
	// 이펙트 관련




	// 사운드 관련
	BGMPlayer = CreateDefaultSubobject<UAudioComponent>(TEXT("SoundPlayer1"));
	BGMPlayer->bAutoActivate = true;
	// BGMPlayer->SetupAttachment(); 꼭 필요해 보이는데, 생명주기상 여기서 절대 불가능
	// 혹시 오디오컴포넌트는 큐만 사용가능한가???
	
	
	//BGMPlayer->SetupAttachment(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->GetRootComponent());
	
	/*SoundPlayer2 = CreateDefaultSubobject<UAudioComponent>(TEXT("SoundPlayer2"));
	SoundPlayer2->bAutoActivate = false;*/

	


	// 테스트 음원
	static ConstructorHelpers::FObjectFinder<USoundBase> S_SFXTEst1(TEXT("SoundWave'/Game/MyFolder/Sounds/SoundEffects/Test.Test'"));
	if (S_SFXTEst1.Succeeded()) S_SFXTest = S_SFXTEst1.Object;
	static ConstructorHelpers::FObjectFinder<USoundBase> S_TestBGM1(TEXT("SoundWave'/Game/MyFolder/Sounds/SoundEffects/TestBGMFile.TestBGMFile'"));
	if (S_TestBGM1.Succeeded()) S_BGMTest = S_TestBGM1.Object;
	Arr_BGMs.Add("BGM_Test", S_BGMTest);
	Arr_SFXs.Add("SFX_Test", S_SFXTest);
}

void UMyGameInstance::Init()
{
	Super::Init();
}

void UMyGameInstance::PlaySoundEffectAtLocation_CUST(FString _name, FVector _Location)
{
	FString tmp_name = _name;

	bool IsExist = Arr_SFXs.Contains(_name);
	if (IsExist == true)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), Arr_SFXs[_name], _Location, 1.0f, 1.0f, 0.0f);
	}
	else GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("SFXResource Is Not Exist"));
}

void UMyGameInstance::PlaySoundEffectAtLocationAndVolum_CUST(FString _name, FVector _Location, float _Volume)
{
	FString tmp_name = _name;

	bool IsExist = Arr_SFXs.Contains(_name);
	if (IsExist == true)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), Arr_SFXs[_name], _Location, _Volume, 1.0f, 0.0f);
	}
	else GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("SFXResource Is Not Exist"));
}

void UMyGameInstance::SetBGM_CUST(FString _name)
{
	if (BGMPlayer == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("BGMPlayer Is Nullptr!!!!!"));
		return;
	}
	else GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("BGMPlayer Is Exist"));

	bool IsExist = Arr_BGMs.Contains(_name);
	if (IsExist == false)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("BGMResource Is Not Exist"));
		return;
	}
	else GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("BGMResource Is Exist"));


	BGMPlayer->SetSound(Arr_BGMs[_name]);
}

void UMyGameInstance::PlayBGM_CUST(FString _name, bool _Loop)
{
	bool IsExist = Arr_BGMs.Contains(_name);
	if (IsExist == false)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("BGMResource Is Not Exist"));
		return;
	}
	else GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("BGMResource Is Exist"));

	if (BGMPlayer == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("BGMPlayer Is Nullptr!!!!!"));
		return;
	}
	else
	{
		BGMPlayer->Play();
	}
}

//void UMyGameInstance::PlayBGMAndVolum_CUST(FString _name, bool _Loop, float _Volume)
//{
//	
//}
//
//void UMyGameInstance::StartBGM_CUST()
//{
//	
//}
//
//void UMyGameInstance::StopBGM_CUST()
//{
//	
//}
//
//void UMyGameInstance::PauseBGM_CUST()
//{
//	
//}
//
//void UMyGameInstance::ResumeBGM_CUST()
//{
//	
//}
//
//void UMyGameInstance::RestartBGM_CUST()
//{
//	
//}
//
//void UMyGameInstance::FadeInBGM_CUST(float _FadeInDuration, float _Volume)
//{
//	
//}
//
//void UMyGameInstance::FadeOutBGM_CUST(float _FadeOutDuration)
//{
//	
//}
