#pragma once

#include "EngineMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"



UCLASS()
class UE4_PORTFOLIO2_SL_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	

public:
	UMyGameInstance();
	virtual void Init() override;
	//virtual void StartGameInstance() override;
	//virtual void OnStart() override;


private:




	// 이펙트 관련
private:


public:


	// 사운드 관련
private:
	// 테스트 음원들
	USoundBase* S_SFXTest;
	USoundBase* S_BGMTest;

	TMap<FString, USoundBase*> Arr_SFXs;
	TMap<FString, USoundBase*> Arr_BGMs;

	UAudioComponent* BGMPlayer;


public:
	void PlaySoundEffectAtLocation_CUST(FString _name, FVector _Location);
	void PlaySoundEffectAtLocationAndVolum_CUST(FString _name, FVector _Location, float _Volume = 1.0f);
	
	// BGM은 위치 정보가 필요 없음
	void SetBGM_CUST(FString _name);
	void PlayBGM_CUST(FString _name, bool _Loop = true);
	/*void PlayBGMAndVolum_CUST(FString _name, bool _Loop = true, float _Volume = 1.0f);
	void StartBGM_CUST();
	void StopBGM_CUST();
	void PauseBGM_CUST();
	void ResumeBGM_CUST();
	void RestartBGM_CUST();
	void FadeInBGM_CUST(float _FadeInDuration, float _Volume = 1.0f);
	void FadeOutBGM_CUST(float _FadeOutDuration);*/
};
