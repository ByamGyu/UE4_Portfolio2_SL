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
	IsLockOn = false;

	
	// 일반 구르기 모음
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollIdle_F0(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_F_0_Seq_Montage.Roll_F_0_Seq_Montage'"));
	if (AM_RollIdle_F0.Succeeded()) RollIdle_F0_Montage = AM_RollIdle_F0.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollIdle_FL45(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_F_L_45_Seq_Montage.Roll_F_L_45_Seq_Montage'"));
	if (AM_RollIdle_FL45.Succeeded()) RollIdle_FL45_Montage = AM_RollIdle_FL45.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollIdle_FL90(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_L_90_Seq_Montage.Roll_L_90_Seq_Montage'"));
	if (AM_RollIdle_FL90.Succeeded()) RollIdle_FL90_Montage = AM_RollIdle_FL90.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollIdle_FR45(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_F_R_45_Seq_Montage.Roll_F_R_45_Seq_Montage'"));
	if (AM_RollIdle_FR45.Succeeded()) RollIdle_FR45_Montage = AM_RollIdle_FR45.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollIdle_FR90(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_R_90_Seq_Montage.Roll_R_90_Seq_Montage'"));
	if (AM_RollIdle_FR90.Succeeded()) RollIdle_FR90_Montage = AM_RollIdle_FR90.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollIdle_B180(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_Combat_B_180_Seq_Montage.Roll_Combat_B_180_Seq_Montage'"));
	if (AM_RollIdle_B180.Succeeded()) RollIdle_B180_Montage = AM_RollIdle_B180.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollIdle_BL45(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_B_L_45_Seq_Montage.Roll_B_L_45_Seq_Montage'"));
	if (AM_RollIdle_BL45.Succeeded()) RollIdle_BL45_Montage = AM_RollIdle_BL45.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollIdle_BR45(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_B_R_45_Seq_Montage.Roll_B_R_45_Seq_Montage'"));
	if (AM_RollIdle_BR45.Succeeded()) RollIdle_BR45_Montage = AM_RollIdle_BR45.Object;

	// 전투 구르기 모음
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollCombat_F0(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_Combat_F_0_Seq_Montage.Roll_Combat_F_0_Seq_Montage'"));
	if (AM_RollCombat_F0.Succeeded()) RollCombat_F0_Montage = AM_RollCombat_F0.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollCombat_FL45(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_Combat_F_L_45_Seq_Montage.Roll_Combat_F_L_45_Seq_Montage'"));
	if (AM_RollCombat_FL45.Succeeded()) RollCombat_FL45_Montage = AM_RollCombat_FL45.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollCombat_FL90(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_Combat_L_90_Seq_Montage.Roll_Combat_L_90_Seq_Montage'"));
	if (AM_RollCombat_FL90.Succeeded()) RollCombat_FL90_Montage = AM_RollCombat_FL90.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollCombat_FR45(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_Combat_F_R_45_Seq_Montage.Roll_Combat_F_R_45_Seq_Montage'"));
	if (AM_RollCombat_FR45.Succeeded()) RollCombat_FR45_Montage = AM_RollCombat_FR45.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollCombat_FR90(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_Combat_R_90_Seq_Montage.Roll_Combat_R_90_Seq_Montage'"));
	if (AM_RollCombat_FR90.Succeeded()) RollCombat_FR90_Montage = AM_RollCombat_FR90.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollCombat_B180(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_Combat_B_180_Seq_Montage.Roll_Combat_B_180_Seq_Montage'"));
	if (AM_RollCombat_B180.Succeeded()) RollCombat_B180_Montage = AM_RollCombat_B180.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollCombat_BL45(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_Combat_B_L_45_Seq_Montage.Roll_Combat_B_L_45_Seq_Montage'"));
	if (AM_RollCombat_BL45.Succeeded()) RollCombat_BL45_Montage = AM_RollCombat_BL45.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_RollCombat_BR45(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Roll_Combat_B_R_45_Seq_Montage.Roll_Combat_B_R_45_Seq_Montage'"));
	if (AM_RollCombat_BR45.Succeeded()) RollCombat_BR45_Montage = AM_RollCombat_BR45.Object;

	// 백스텝
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_BackStep(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Sword_Dodge_Montage.Sword_Dodge_Montage'"));
	if (AM_BackStep.Succeeded()) BackStep_Montage = AM_BackStep.Object;


	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_LightAttack(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/AM_PlayerAttackCombo1.AM_PlayerAttackCombo1'"));
	if (AM_LightAttack.Succeeded()) LightAttackMontage = AM_LightAttack.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_HeavyAttack(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Sowrd_Attack_Combo_CL_Heavy_Montage.Sowrd_Attack_Combo_CL_Heavy_Montage'"));
	if (AM_HeavyAttack.Succeeded()) HeavyAttackMontage = AM_HeavyAttack.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_GuardBreak(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Block_Hit_Break_Seq_Montage.Block_Hit_Break_Seq_Montage'"));
	if (AM_GuardBreak.Succeeded()) GuardBreakMontage = AM_GuardBreak.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Parry(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Parry_Counter_Attack_Seq_Montage.Parry_Counter_Attack_Seq_Montage'"));
	if (AM_Parry.Succeeded()) ParryMontage = AM_Parry.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Execution1(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Execution_01_Seq_Montage.Execution_01_Seq_Montage'"));
	if (AM_Execution1.Succeeded()) Execution1 = AM_Execution1.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Execution2(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Execution_02_Seq_Montage.Execution_02_Seq_Montage'"));
	if (AM_Execution2.Succeeded()) Execution2 = AM_Execution2.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Execution_Back(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/ARPG_Ninja_Anim_UE_Execute_B_Montage.ARPG_Ninja_Anim_UE_Execute_B_Montage'"));
	if (AM_Execution_Back.Succeeded()) Execution_Back = AM_Execution_Back.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Issen(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/ARPG_Ninja_Anim_UE_Attack_Dodge_2_Montage.ARPG_Ninja_Anim_UE_Attack_Dodge_2_Montage'"));
	if (AM_Issen.Succeeded()) Issen = AM_Issen.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_ImpactStrong1(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Hit_Combat_Large_F_Seq_Montage.Hit_Combat_Large_F_Seq_Montage'"));
	if (AM_ImpactStrong1.Succeeded()) ImpactStrong1 = AM_ImpactStrong1.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_ImpactStrong2(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Sword_Shield_Hit_L_1_Montage.Sword_Shield_Hit_L_1_Montage'"));
	if (AM_ImpactStrong2.Succeeded()) ImpactStrong2 = AM_ImpactStrong2.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_ImpactStrong3(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Sword_Shield_Hit_R_2_Montage.Sword_Shield_Hit_R_2_Montage'"));
	if (AM_ImpactStrong3.Succeeded()) ImpactStrong3 = AM_ImpactStrong3.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_ImpactBack1(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Hit_Combat_Large_B_Seq_Montage.Hit_Combat_Large_B_Seq_Montage'"));
	if (AM_ImpactBack1.Succeeded()) ImpactBack1 = AM_ImpactBack1.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_ShieldBlockWeak(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Block_Hit_Seq_Montage.Block_Hit_Seq_Montage'"));
	if (AM_ShieldBlockWeak.Succeeded()) ShieldBlockWeak = AM_ShieldBlockWeak.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_ShieldBlockStrong(TEXT("AnimMontage'/Game/MyFolder/PlayerCharacter/Sword_Block_Right_Shield_Montage.Sword_Block_Right_Shield_Montage'"));
	if (AM_ShieldBlockStrong.Succeeded()) ShieldBlockStrong = AM_ShieldBlockStrong.Object;
}

void UPlayerCharacterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);


	auto Pawn = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (IsValid(Pawn))
	{
		//CurrentSpeedAndDirection = (Pawn->GetVelocity().Size()) * (Pawn->GetMoveForwardValue()); // 현재 속도 계산하기
		CurrentSpeed = (Pawn->GetCurrentSpeed()); // 현재 속도 계산하기
		CurrentDirection = Pawn->GetLeftRightInputValue(); // 오른쪽 왼쪽 이동 수치(-1 ~ 1) 가져오기

		IsGround = Pawn->GetMovementComponent()->IsMovingOnGround();
		IsFalling = Pawn->GetIsFall();
		Cur_State = Pawn->GetState();
		IsFight = Pawn->GetIsFight();
		CurHP = Pawn->GetCurHP();
		CurStamina = Pawn->GetCurStamina();
		IsAttacking = Pawn->GetIsAttacking();		
		IsAttackButtonWhenAttack = Pawn->GetIsAttackButtonWhenAttack();
		ComboCnt = Pawn->GetComboCnt();
		IsLockOn = Pawn->GetIsLockOn();
		StaminaUse = Pawn->GetStaminaUse();
		//KnockDown_Time = Pawn->GetKnockDownTime();

		//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::SanitizeFloat(CurrentDirection));
	}
}

void UPlayerCharacterAnimInstance::PlayRollIdleMontage()
{
	// 8방향 구르기 구체화 하기(CurrentDirection 사용)
	if (IsLockOn == true)
	{
		if (CurrentSpeed == 0.0f && CurrentDirection == 0.0f) Montage_Play(BackStep_Montage, 1.0f);
		else if (CurrentSpeed > 0 && CurrentDirection == 0.0f) Montage_Play(RollIdle_F0_Montage, 1.0f);
		else if (CurrentSpeed > 0 && CurrentDirection == 0.5f) Montage_Play(RollIdle_FR45_Montage, 1.0f);
		else if (CurrentSpeed > 0 && CurrentDirection == 1.0f) Montage_Play(RollIdle_FR90_Montage, 1.0f);
		else if (CurrentSpeed > 0 && CurrentDirection == -0.5f) Montage_Play(RollIdle_FL45_Montage, 1.0f);
		else if (CurrentSpeed > 0 && CurrentDirection == -1.0f) Montage_Play(RollIdle_FL90_Montage, 1.0f);
		else if (CurrentSpeed < 0 && CurrentDirection == 0.0f) Montage_Play(RollIdle_B180_Montage, 1.0f);
		else if (CurrentSpeed < 0 && CurrentDirection == 0.5f) Montage_Play(RollIdle_BR45_Montage, 1.0f);
		else if (CurrentSpeed < 0 && CurrentDirection == -0.5f) Montage_Play(RollIdle_BL45_Montage, 1.0f);
	}
	else if (IsLockOn == false)
	{
		if (CurrentSpeed == 0.0f) Montage_Play(BackStep_Montage, 1.0f);
		else if (CurrentSpeed > 0) Montage_Play(RollIdle_F0_Montage, 1.0f);
	}
}

void UPlayerCharacterAnimInstance::PlayRollCombatMontage()
{
	// 8방향 구르기 구체화 하기(CurrentDirection 사용)
	if (IsLockOn == true)
	{
		if (CurrentSpeed == 0.0f && CurrentDirection == 0.0f) Montage_Play(BackStep_Montage, 1.0f);
		else if (CurrentSpeed > 0 && CurrentDirection == 0.0f) Montage_Play(RollCombat_F0_Montage, 1.0f);
		else if (CurrentSpeed > 0 && CurrentDirection == 0.5f) Montage_Play(RollCombat_FR45_Montage, 1.0f);
		else if (CurrentSpeed > 0 && CurrentDirection == 1.0f) Montage_Play(RollCombat_FR90_Montage, 1.0f);
		else if (CurrentSpeed > 0 && CurrentDirection == -0.5f) Montage_Play(RollCombat_FL45_Montage, 1.0f);
		else if (CurrentSpeed > 0 && CurrentDirection == -1.0f) Montage_Play(RollCombat_FL90_Montage, 1.0f);
		else if (CurrentSpeed < 0 && CurrentDirection == 0.0f) Montage_Play(RollCombat_B180_Montage, 1.0f);
		else if (CurrentSpeed < 0 && CurrentDirection == 0.5f) Montage_Play(RollCombat_BR45_Montage, 1.0f);
		else if (CurrentSpeed < 0 && CurrentDirection == -0.5f) Montage_Play(RollCombat_BL45_Montage, 1.0f);
	}
	else if (IsLockOn == false)
	{
		if (CurrentSpeed == 0.0f) Montage_Play(BackStep_Montage, 1.0f);
		else if (CurrentSpeed > 0) Montage_Play(RollCombat_F0_Montage, 1.0f);
	}
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

void UPlayerCharacterAnimInstance::PlayExecution1()
{
	Montage_Play(Execution1, 1.0f);
}

void UPlayerCharacterAnimInstance::PlayExecution2()
{
	Montage_Play(Execution2, 1.0f);
}

void UPlayerCharacterAnimInstance::PlayExecutionBack()
{
	Montage_Play(Execution_Back, 1.0f);
}

void UPlayerCharacterAnimInstance::PlayIssenMontage()
{
	Montage_Play(Issen, 1.0f);
}

void UPlayerCharacterAnimInstance::PlayRandomImpactMontage()
{
	int32 tmp = FMath::RandRange(0, 2);

	if (tmp == 0) Montage_Play(ImpactStrong1, 1.0f);
	else if(tmp == 1) Montage_Play(ImpactStrong2, 1.0f);
	else if(tmp == 2) Montage_Play(ImpactStrong3, 1.0f);
}

void UPlayerCharacterAnimInstance::PlayImpactBackMontage()
{
	Montage_Play(ImpactBack1, 1.0f);
}

void UPlayerCharacterAnimInstance::PlayShieldBlockWeak()
{
	Montage_Play(ShieldBlockWeak, 1.0f);
}

void UPlayerCharacterAnimInstance::PlayShieldBlockStrong()
{
	Montage_Play(ShieldBlockStrong, 1.0f);
}

void UPlayerCharacterAnimInstance::AnimNotify_InitState()
{
	auto Character = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		// 가드 상태면 가드 유지
		if (Character->GetState() == EPLAYER_STATE::GUARD
			|| Character->GetState() == EPLAYER_STATE::GUARD_IMPACT_WEAK
			|| Character->GetState() == EPLAYER_STATE::GUARD_IMPACT_STRONG)
		{
			Character->ChangeState(EPLAYER_STATE::GUARD);
			Character->SetIsParrying(false);
		}
		else
		{
			Character->ChangeState(EPLAYER_STATE::IDLE);
			Character->SetIsParrying(false);
		}
	}
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

void UPlayerCharacterAnimInstance::AnimNotify_ParryStart()
{
	auto Character = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		Character->SetIsParrying(true);
	}
}

void UPlayerCharacterAnimInstance::AnimNotify_ParryEnd()
{
	auto Character = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		Character->SetIsParrying(false);
	}
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

		// 몽타주를 먼저 멈추고(안멈추면 가까운 다음 노티파이를 실행시킬 수 있음)
		Montage_Stop(0.25f, GetCurrentActiveMontage());

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

void UPlayerCharacterAnimInstance::AnimNotify_InvinsibleStart()
{
	auto Character = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		Character->GetMesh()->SetCollisionProfileName(FName("NoCollision"));
	}
}

void UPlayerCharacterAnimInstance::AnimNotify_InvinsibleEnd()
{
	auto Character = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		Character->GetMesh()->SetCollisionProfileName(FName("PlayerPhysicsActor"));
	}
}

void UPlayerCharacterAnimInstance::AnimNotify_UseStaminaLightAttack()
{
	auto Character = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		Character->SetCurStamina(StaminaUse * (-15.0f));
		//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Cyan, TEXT("LightAttack Stamina Use Notify"));
	}
}

void UPlayerCharacterAnimInstance::AnimNotify_UseStaminaHeavyAttack()
{
	auto Character = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		Character->SetCurStamina(StaminaUse * (-33.0f));
	}
}