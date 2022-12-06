#include "PlayerCharacterAnimInstance.h"
#include "PlayerCharacter.h"


UPlayerCharacterAnimInstance::UPlayerCharacterAnimInstance()
{
	CurrentSpeed = 0.0f;
	IsGround = true;
	IsFight = false; // 전투 상태인지 Idle 상태인지	
	IsAttacking = false;
	IsAttackButtonWhenAttack = false;
	ComboCnt = 0;	
	KnockDown_Time = 0.0f;


	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollIdle(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_F_0_Seq_Montage.Roll_F_0_Seq_Montage'"));
	if (AM_RollIdle.Succeeded()) RollIdleMontage = AM_RollIdle.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollCombat(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_Combat_F_0_Seq_Montage.Roll_Combat_F_0_Seq_Montage'"));
	if (AM_RollCombat.Succeeded()) RollCombatMontage = AM_RollCombat.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_LightAttack(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/AM_PlayerAttackCombo1.AM_PlayerAttackCombo1'"));
	if (AM_LightAttack.Succeeded()) LightAttackMontage = AM_LightAttack.Object;


	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_GuardBreak(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Block_Hit_Break_Seq_Montage.Block_Hit_Break_Seq_Montage'"));
	if (AM_GuardBreak.Succeeded()) GuardBreakMontage = AM_GuardBreak.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Parry(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Parry_Counter_Attack_Seq_Montage.Parry_Counter_Attack_Seq_Montage'"));
	if (AM_Parry.Succeeded()) ParryMontage = AM_Parry.Object;
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
		CurHP = Pawn->GetCurHP();
		CurStamina = Pawn->GetCurStamina();
		IsAttacking = Pawn->GetIsAttacking();		
		IsAttackButtonWhenAttack = Pawn->GetIsAttackButtonWhenAttack();
		ComboCnt = Pawn->GetComboCnt();
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
	const char* LightAttackComboList[] = { "Combo1", "Combo2", "Combo3", "Combo4" };

	// 약공격 애니메이션이 실행중이지 않으면
	if (!Montage_IsPlaying(LightAttackMontage))
	{
		Montage_Play(LightAttackMontage, 1.0f);
	}
	// 약공격 애니메이션이 실행중이면 (연속 공격)
	else if (Montage_IsPlaying(LightAttackMontage))
	{
		Montage_Play(LightAttackMontage, 1.0f);
		Montage_JumpToSection(FName(LightAttackComboList[ComboCnt]), LightAttackMontage);
	}
	
}

void UPlayerCharacterAnimInstance::PlayHeavyAttackMontage()
{
	Montage_Play(HeavyAttackMontage, 1.0f);
}

void UPlayerCharacterAnimInstance::PlayGuardBreakMontage()
{
	Montage_Play(GuardBreakMontage, 1.0f);
}

void UPlayerCharacterAnimInstance::PlayParryMontage()
{
	Montage_Play(ParryMontage, 1.0f);
}

void UPlayerCharacterAnimInstance::AnimNotify_InitState()
{
	auto Character = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Character != nullptr) Character->ChangeState(EPLAYER_STATE::IDLE);
}

void UPlayerCharacterAnimInstance::AnimNotify_JumpEnd()
{
	
}

void UPlayerCharacterAnimInstance::AnimNotify_RollEnd()
{
	
}

void UPlayerCharacterAnimInstance::AnimNotify_SpellEnd()
{
	
}

void UPlayerCharacterAnimInstance::AnimNotify_ParryEnd()
{
	
}

void UPlayerCharacterAnimInstance::AnimNotify_NockDownRecover()
{
	
}

void UPlayerCharacterAnimInstance::AnimNotify_GuardStart()
{
	
}

void UPlayerCharacterAnimInstance::AnimNotify_AttackEnd()
{
	auto Character = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		// 공격 애니메이션(섹션)이 끝나면
		Character->SetIsAttacking(false); // 공격상태 false로 바꾸고,
		Character->SetComboCnt(0); // 콤보Cnt를 0으로 바꾸고
		Character->SetIsAttackButtonWhenAttack(false); // 연속 공격 입력 상태 false로 바꾸고,

		Character->ChangeState(EPLAYER_STATE::IDLE); // 캐릭터 상태를 IDLE로 전환
	}
}

void UPlayerCharacterAnimInstance::AnimNotify_AttackInputCheck()
{
	if (IsAttackButtonWhenAttack == true)
	{
		auto Character = Cast<APlayerCharacter>(TryGetPawnOwner());
		if (Character != nullptr)
		{
			if (ComboCnt >= 3) ComboCnt = 0;
			else ComboCnt++;



			Character->SetIsAttackButtonWhenAttack(false);
			Character->SetComboCnt(ComboCnt);

			PlayLightAttackMontage();
		}
	}
	else
	{
		return;
	}
}
