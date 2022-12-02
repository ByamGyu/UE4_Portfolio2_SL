#include "PlayerCharacterAnimInstance.h"
#include "PlayerCharacter.h"


UPlayerCharacterAnimInstance::UPlayerCharacterAnimInstance()
{
	CurrentSpeed = 0.0f;
	IsGround = true;
	IsFight = false;
	KnockDown_Time = 0.0f;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollIdle(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_F_0_Seq_Montage.Roll_F_0_Seq_Montage'"));
	if (AM_RollIdle.Succeeded()) RollIdleMontage = AM_RollIdle.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollCombat(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_Combat_F_0_Seq_Montage.Roll_Combat_F_0_Seq_Montage'"));
	if (AM_RollCombat.Succeeded()) RollCombatMontage = AM_RollCombat.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_LightAttack(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Sword_Attack_Combo_LL_Montage.Sword_Attack_Combo_LL_Montage'"));
	if (AM_LightAttack.Succeeded()) LightAttackMontage = AM_LightAttack.Object;
}

void UPlayerCharacterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);


	auto Pawn = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (IsValid(Pawn))
	{
		//CurrentSpeedAndDirection = (Pawn->GetVelocity().Size()) * (Pawn->GetMoveForwardValue()); // 현재 속도 계산하기
		CurrentSpeed = (Pawn->GetVelocity().Size()); // 현재 속도 계산하기
		//CurrentDirection = Pawn->GetMoveLeftRightValue(); // 오른쪽 왼쪽 이동 수치(-1 ~ 1) 가져오기

		IsGround = Pawn->GetMovementComponent()->IsMovingOnGround();
		IsFalling = Pawn->GetIsFall();
		Cur_State = Pawn->GetState();
		IsFight = Pawn->GetIsFight();
		//KnockDown_Time = Pawn->GetKnockDownTime();
	}
}

void UPlayerCharacterAnimInstance::PlayRollIdleMontage()
{
	Montage_Play(RollIdleMontage, 1.0f);
}

void UPlayerCharacterAnimInstance::PlayRollCombatMontage()
{
	Montage_Play(RollCombatMontage, 1.0f);
}

void UPlayerCharacterAnimInstance::PlayLightAttackMontage()
{
	Montage_Play(LightAttackMontage, 1.0f);
}

void UPlayerCharacterAnimInstance::PlayHeavyAttackMontage()
{
	Montage_Play(HeavyAttackMontage, 1.0f);
}

void UPlayerCharacterAnimInstance::AnimNotify_InitState()
{
	auto Character = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Character != nullptr) Character->ChangeState(EPLAYER_STATE::IDLE);
}

void UPlayerCharacterAnimInstance::AnimNotify_JumpEnd()
{
	/*auto Character = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("AnimNotify_JumpEnd"));

		Character->ChangeState(EPLAYER_STATE::IDLE);
	}*/
}

void UPlayerCharacterAnimInstance::AnimNotify_RollEnd()
{
	/*auto Character = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("AnimNotify_RollEnd"));

		Character->ChangeState(EPLAYER_STATE::IDLE);
	}*/
}

void UPlayerCharacterAnimInstance::AnimNotify_SpellEnd()
{
	/*auto Character = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("AnimNotify_SpellEnd"));

		Character->ChangeState(EPLAYER_STATE::IDLE);
	}*/
}

void UPlayerCharacterAnimInstance::AnimNotify_ParryEnd()
{
	/*auto Character = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("AnimNotify_ParryEnd"));

		Character->ChangeState(EPLAYER_STATE::IDLE);
	}*/
}

void UPlayerCharacterAnimInstance::AnimNotify_NockDownRecover()
{
	/*auto Character = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		if (Character->GetKnockDownTime() >= 3.5f)
		{
			Character->SetKnockDownTime(0.0f);
		}

		Character->ChangeState(EPLAYER_STATE::IDLE);
	}*/
}

void UPlayerCharacterAnimInstance::AnimNotify_GuardStart()
{
	/*auto Character = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		Character->GetCharacterMovement()->MaxWalkSpeed = 300.0f;
		Character->ChangeState(EPLAYER_STATE::GUARD);
	}*/
}