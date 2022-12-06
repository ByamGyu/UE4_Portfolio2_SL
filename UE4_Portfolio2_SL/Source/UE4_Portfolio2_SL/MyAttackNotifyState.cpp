#include "MyAttackNotifyState.h"

UMyAttackNotifyState::UMyAttackNotifyState()
{

}

void UMyAttackNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	arrHitResults.Empty();
}

void UMyAttackNotifyState::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
{

}

void UMyAttackNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{

}