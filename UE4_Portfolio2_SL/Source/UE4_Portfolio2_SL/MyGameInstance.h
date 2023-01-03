#pragma once

#include "EngineMinimal.h"
#include "Engine/GameInstance.h"
#include "Niagara/Public/NiagaraComponent.h"
#include "Niagara/Public/NiagaraFunctionLibrary.h"
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



	// 이펙트 관련
private:
	// 파티클을 전달 받아 재생시켜주는 컴포넌트
	UPROPERTY(EditDefaultsOnly, Category = Effect)
	UParticleSystemComponent* ParticleComponent;
	UPROPERTY(EditDefaultsOnly, Category = Effect)
	UNiagaraComponent* NiagaraComponent;

	// 이펙트 저장하는 배열
	UPROPERTY(EditDefaultsOnly, Category = Effect)
	TMap<FString, UParticleSystem*> Arr_ParticleSystems;
	UPROPERTY(EditDefaultsOnly, Category = Effect)
	TMap<FString, UNiagaraSystem*> Arr_NiagaraSystems;


private:
	void Init_Resources();


public:
	void SpawnParticleSystemAtLocation(FString _Name, FVector _Location, FRotator _Rotator = FRotator::ZeroRotator, FVector _Scale = FVector(1.0f, 1.0f, 1.0f));
	void SpawnNiagaraSystemAtLocation(FString _Name, FVector _Location, FRotator _Rotator = FRotator::ZeroRotator, FVector _Scale = FVector(1.0f, 1.0f, 1.0f));



	// 사운드 관련
private:
	// 음원들 저장하는 배열
	UPROPERTY(EditDefaultsOnly, Category = Musics)
	TMap<FString, USoundBase*> Arr_SFXs;
	UPROPERTY(EditDefaultsOnly, Category = Musics)
	TMap<FString, USoundBase*> Arr_BGMs;

	UPROPERTY(EditDefaultsOnly, Category = Musics)
	UAudioComponent* BGMPlayer;


	// 사운드 관련 함수
public:
	void PlaySoundEffectAtLocation_CUST(FString _Name, FVector _Location);
	void PlaySoundEffectAtLocationAndVolum_CUST(FString _Name, FVector _Location, float _Volume = 1.0f);
	
	// BGM은 위치 정보가 필요 없음
	void SetBGM_CUST(FString _Name);
	void PlayBGM_CUST(FString _Name, bool _Loop = true);
	void PlayBGMAndVolum_CUST(FString _name, bool _Loop = true, float _Volume = 1.0f);
	void StopBGM_CUST();
	void PauseBGM_CUST();
	void ResumeBGM_CUST();
	void FadeInBGM_CUST(float _FadeInDuration, float _Volume = 1.0f);
	void FadeOutBGM_CUST(float _FadeOutDuration);
};
