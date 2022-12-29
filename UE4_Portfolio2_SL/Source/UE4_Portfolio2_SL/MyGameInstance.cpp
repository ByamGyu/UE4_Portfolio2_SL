#include "MyGameInstance.h"


UMyGameInstance::UMyGameInstance()
{
	// ����Ʈ ����




	// ���� ����
	BGMPlayer = CreateDefaultSubobject<UAudioComponent>(TEXT("SoundPlayer1"));
	BGMPlayer->bAutoActivate = true;
	// BGMPlayer->SetupAttachment(); �� �ʿ��� ���̴µ�, �����ֱ�� ���⼭ ���� �Ұ���
	// Ȥ�� �����������Ʈ�� ť�� ��밡���Ѱ�???
	
	
	//BGMPlayer->SetupAttachment(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->GetRootComponent());
	
	/*SoundPlayer2 = CreateDefaultSubobject<UAudioComponent>(TEXT("SoundPlayer2"));
	SoundPlayer2->bAutoActivate = false;*/

	


	// �׽�Ʈ ����
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


	// ����ִ� ����� ���� ���� ���� ����� ������Ʈ�� �����ϱ�


	// �ٸ� �Լ��� IsPlaying���� üũ�ϴ°ŵ� ���ֱ�
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

void UMyGameInstance::SetBGM_CUST(FString _Name)
{
	// ������ ������
	if (Arr_BGMs.Contains(_Name) == true)
	{
		BGMPlayer = UGameplayStatics::CreateSound2D(
			GetWorld(),
			Arr_BGMs[_Name],
			1.0f,
			1.0f,
			0.0f
		);

		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("AudioComponent Set Success"));
	}
	else GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("AudioComponent Set Fail"));
}

void UMyGameInstance::PlayBGM_CUST(FString _Name, bool _Loop)
{
	if (Arr_BGMs.Contains(_Name) == false)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("BGMResource Is Not Exist"));
		return;
	}
	else
	{
		// BGMPlayer Null üũ�� UGameplayStatics::CreateSound2D()�� ���ؼ� ��
		// ���� ���⼭�� ���� ���� Set �ܰ質 �ʱ�ȭ �ܰ迡�� �ϴ°� ����

		BGMPlayer->Play();
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("BGMResource Is Exist"));
	}

	
}

void UMyGameInstance::PlayBGMAndVolum_CUST(FString _Name, bool _Loop, float _Volume)
{
	if (Arr_BGMs.Contains(_Name) == false)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("BGMResource Is Not Exist"));
		return;
	}
	else
	{
		BGMPlayer->SetVolumeMultiplier(_Volume);
		BGMPlayer->Play();		
	}
}

void UMyGameInstance::StopBGM_CUST()
{
	BGMPlayer->Stop();
}

void UMyGameInstance::PauseBGM_CUST()
{
	BGMPlayer->SetPaused(true);
}

void UMyGameInstance::ResumeBGM_CUST()
{
	BGMPlayer->SetPaused(false);
}

void UMyGameInstance::FadeInBGM_CUST(float _FadeInDuration, float _Volume)
{
	BGMPlayer->FadeIn(_FadeInDuration, _Volume);
}

void UMyGameInstance::FadeOutBGM_CUST(float _FadeOutDuration)
{
	// �ƿ� ����
	BGMPlayer->FadeOut(1.0f, 0.0f);
}
