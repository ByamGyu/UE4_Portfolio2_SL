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
	// 이펙트 리소스
	UPROPERTY(EditDefaultsOnly, Category = Effects)
	UNiagaraSystem* NS_Issen;


	// 파티클을 전달 받아 재생시켜주는 컴포넌트
	UParticleSystemComponent* ParticleComponent;
	UNiagaraComponent* NiagaraComponent;



public:
	void SpawnParticleAtLocation(FVector _Location, FRotator _Rotator = FRotator::ZeroRotator, FVector _Scale = FVector(1.0f, 1.0f, 1.0f));
	void SpawnNiagaraParticleAtLocation(FVector _Location, FRotator _Rotator = FRotator::ZeroRotator, FVector _Scale = FVector(1.0f, 1.0f, 1.0f));
	void ParticleFinishied();



	// 사운드 관련
private:
	// 테스트 음원들
	UPROPERTY(EditDefaultsOnly, Category = Musics)
	USoundBase* S_SFXTest;
	UPROPERTY(EditDefaultsOnly, Category = Musics)
	USoundBase* S_BGMTest;

	TMap<FString, USoundBase*> Arr_SFXs;
	TMap<FString, USoundBase*> Arr_BGMs;

	UAudioComponent* BGMPlayer;


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
