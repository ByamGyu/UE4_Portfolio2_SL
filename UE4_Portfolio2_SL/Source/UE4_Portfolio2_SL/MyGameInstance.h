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



	// ����Ʈ ����
private:
	// ��ƼŬ�� ���� �޾� ��������ִ� ������Ʈ
	UPROPERTY(EditDefaultsOnly, Category = Effect)
	UParticleSystemComponent* ParticleComponent;
	UPROPERTY(EditDefaultsOnly, Category = Effect)
	UNiagaraComponent* NiagaraComponent;

	// ����Ʈ �����ϴ� �迭
	UPROPERTY(EditDefaultsOnly, Category = Effect)
	TMap<FString, UParticleSystem*> Arr_ParticleSystems;
	UPROPERTY(EditDefaultsOnly, Category = Effect)
	TMap<FString, UNiagaraSystem*> Arr_NiagaraSystems;


private:
	void Init_Resources();


public:
	void SpawnParticleSystemAtLocation(FString _Name, FVector _Location, FRotator _Rotator = FRotator::ZeroRotator, FVector _Scale = FVector(1.0f, 1.0f, 1.0f));
	void SpawnNiagaraSystemAtLocation(FString _Name, FVector _Location, FRotator _Rotator = FRotator::ZeroRotator, FVector _Scale = FVector(1.0f, 1.0f, 1.0f));



	// ���� ����
private:
	// ������ �����ϴ� �迭
	UPROPERTY(EditDefaultsOnly, Category = Musics)
	TMap<FString, USoundBase*> Arr_SFXs;
	UPROPERTY(EditDefaultsOnly, Category = Musics)
	TMap<FString, USoundBase*> Arr_BGMs;

	UPROPERTY(EditDefaultsOnly, Category = Musics)
	UAudioComponent* BGMPlayer;


	// ���� ���� �Լ�
public:
	void PlaySoundEffectAtLocation_CUST(FString _Name, FVector _Location);
	void PlaySoundEffectAtLocationAndVolum_CUST(FString _Name, FVector _Location, float _Volume = 1.0f);
	
	// BGM�� ��ġ ������ �ʿ� ����
	void SetBGM_CUST(FString _Name);
	void PlayBGM_CUST(FString _Name, bool _Loop = true);
	void PlayBGMAndVolum_CUST(FString _name, bool _Loop = true, float _Volume = 1.0f);
	void StopBGM_CUST();
	void PauseBGM_CUST();
	void ResumeBGM_CUST();
	void FadeInBGM_CUST(float _FadeInDuration, float _Volume = 1.0f);
	void FadeOutBGM_CUST(float _FadeOutDuration);
};
