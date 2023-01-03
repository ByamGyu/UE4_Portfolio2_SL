#include "MyGameInstance.h"


UMyGameInstance::UMyGameInstance()
{
	// ������Ʈ ����
	ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
	NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
	
	BGMPlayer = CreateDefaultSubobject<UAudioComponent>(TEXT("SoundPlayer1"));
	BGMPlayer->bAutoActivate = true;

	Init_Resources();
}

void UMyGameInstance::Init()
{
	Super::Init();

	// ����ִ� ����� ���� ���� ���� ����� ������Ʈ�� �����ϱ�


	// �ٸ� �Լ��� IsPlaying���� üũ�ϴ°ŵ� ���ֱ�
}

void UMyGameInstance::Init_Resources()
{
	// �迭�� �ʱ�ȭ
	Arr_ParticleSystems.Empty();
	Arr_NiagaraSystems.Empty();
	Arr_SFXs.Empty();
	Arr_BGMs.Empty();

	// �迭�� ������ ����� �ӽ� ������
	UParticleSystem* PS_tmp;
	UNiagaraSystem* NS_tmp;
	USoundBase* SB_tmp;


	// ������ ����Ʈ
	static ConstructorHelpers::FObjectFinder<UParticleSystem> PS_BloodSplat1(TEXT("ParticleSystem'/Game/Realistic_Starter_VFX_Pack/Particles/Blood/P_Blood_Splat_2d.P_Blood_Splat_2d'"));
	if (PS_BloodSplat1.Succeeded()) PS_tmp = PS_BloodSplat1.Object; // �ǰݴ��� �� �� ����1
	Arr_ParticleSystems.Add("PS_BloodSplat1", PS_tmp);
	static ConstructorHelpers::FObjectFinder<UParticleSystem> PS_BloodSplat2(TEXT("ParticleSystem'/Game/Realistic_Starter_VFX_Pack/Particles/Blood/P_Blood_Splat_3d.P_Blood_Splat_3d'"));
	if (PS_BloodSplat2.Succeeded()) PS_tmp = PS_BloodSplat2.Object; // �ǰݴ��� �� �� ����2
	Arr_ParticleSystems.Add("PS_BloodSplat1", PS_tmp);


	// ���̾ư��� ����Ʈ	
	static ConstructorHelpers::FObjectFinder<UNiagaraSystem> NS_Issen1(TEXT("NiagaraSystem'/Game/MyFolder/Effects/NS_Issen.NS_Issen'"));
	if (NS_Issen1.Succeeded()) NS_tmp = NS_Issen1.Object; // �ϼ�
	Arr_NiagaraSystems.Add("NS_Issen", NS_tmp);
	static ConstructorHelpers::FObjectFinder<UNiagaraSystem> NS_BloodTest1(TEXT("NiagaraSystem'/Game/sA_DarkKnight_Set/Fx/NS_Aoe_1.NS_Aoe_1'"));
	if (NS_BloodTest1.Succeeded()) NS_tmp = NS_BloodTest1.Object; // �Ǳ��
	Arr_NiagaraSystems.Add("NS_BloodTest", NS_tmp);


	// �׽�Ʈ ����
	static ConstructorHelpers::FObjectFinder<USoundBase> S_SFXTEst1(TEXT("SoundWave'/Game/MyFolder/Sounds/SoundEffects/Test.Test'"));
	if (S_SFXTEst1.Succeeded()) SB_tmp = S_SFXTEst1.Object;
	Arr_BGMs.Add("BGM_Test", SB_tmp);
	static ConstructorHelpers::FObjectFinder<USoundBase> S_TestBGM1(TEXT("SoundWave'/Game/MyFolder/Sounds/SoundEffects/TestBGMFile.TestBGMFile'"));
	if (S_TestBGM1.Succeeded()) SB_tmp = S_TestBGM1.Object;
	Arr_SFXs.Add("SFX_Test", SB_tmp);


	// ȿ���� ����



	// ����� ����



}

void UMyGameInstance::SpawnParticleSystemAtLocation(FString _Name, FVector _Location, FRotator _Rotator, FVector _Scale)
{
	if (Arr_ParticleSystems.Contains(_Name))
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Arr_ParticleSystems[_Name], _Location);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("This ParticleSystem Resource Is Null!"));
	}
}

void UMyGameInstance::SpawnNiagaraSystemAtLocation(FString _Name, FVector _Location, FRotator _Rotator, FVector _Scale)
{
	if (Arr_NiagaraSystems.Contains(_Name))
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), Arr_NiagaraSystems[_Name], _Location);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("This NiagaraEffect Resource Is Null!"));
	}
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
	// FadeOut�� �ƿ� ����
	BGMPlayer->FadeOut(1.0f, 0.0f);
}
