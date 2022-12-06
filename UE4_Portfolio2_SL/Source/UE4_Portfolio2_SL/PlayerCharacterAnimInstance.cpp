#include "PlayerCharacterAnimInstance.h"
#include "PlayerCharacter.h"


UPlayerCharacterAnimInstance::UPlayerCharacterAnimInstance()
{
	CurrentSpeed = 0.0f;
	IsGround = true;
	IsFight = false; // ���� �������� Idle ��������	
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
		//CurrentSpeedAndDirection = (Pawn->GetVelocity().Size()) * (Pawn->GetMoveForwardValue()); // ���� �ӵ� ����ϱ�
		CurrentSpeed = (Pawn->GetVelocity().Size()); // ���� �ӵ� ����ϱ�
		//CurrentDirection = Pawn->GetMoveLeftRightValue(); // ������ ���� �̵� ��ġ(-1 ~ 1) ��������

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

	// ����� �ִϸ��̼��� ���������� ������
	if (!Montage_IsPlaying(LightAttackMontage))
	{
		Montage_Play(LightAttackMontage, 1.0f);
	}
	// ����� �ִϸ��̼��� �������̸� (���� ����)
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
		// ���� �ִϸ��̼�(����)�� ������
		Character->SetIsAttacking(false); // ���ݻ��� false�� �ٲٰ�,
		Character->SetComboCnt(0); // �޺�Cnt�� 0���� �ٲٰ�
		Character->SetIsAttackButtonWhenAttack(false); // ���� ���� �Է� ���� false�� �ٲٰ�,

		Character->ChangeState(EPLAYER_STATE::IDLE); // ĳ���� ���¸� IDLE�� ��ȯ
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
