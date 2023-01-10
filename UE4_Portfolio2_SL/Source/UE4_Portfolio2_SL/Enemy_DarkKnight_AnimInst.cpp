#include "Enemy_DarkKnight_AnimInst.h"
#include "Enemy_DarkKnight.h"



UEnemy_DarkKnight_AnimInst::UEnemy_DarkKnight_AnimInst()
	:
	CurrentSpeed(0.0f),
	CurrentDirection(0.0f),
	IsFight(false),
	IsAttacking(false),
	KnockDown_Time(0.0f),
	Cur_State(EMONSTER_STATE::IDLE)
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> Execution1(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/ARPG_Ninja_Anim_UE_Execute_B_Montage.ARPG_Ninja_Anim_UE_Execute_B_Montage'"));
	if (Execution1.Succeeded()) Execute1 = Execution1.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> Execution2(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/ARPG_Ninja_Anim_UE_Execute_End_Montage.ARPG_Ninja_Anim_UE_Execute_End_Montage'"));
	if (Execution2.Succeeded()) Execute2 = Execution2.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Executed_Back(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/ARPG_Ninja_Anim_UE_Executed_B_2_Montage.ARPG_Ninja_Anim_UE_Executed_B_2_Montage'"));
	if (Executed_Back.Succeeded()) Executed_FalldownFront = Executed_Back.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> Executed_Front(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/ARPG_Ninja_Anim_UE_Executed_B_Montage.ARPG_Ninja_Anim_UE_Executed_B_Montage'"));
	if (Executed_Front.Succeeded()) Executed_FalldownBack = Executed_Front.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Parryed_GS(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Boss_Staggered_RM_Montage.Boss_Staggered_RM_Montage'"));
	if (Parryed_GS.Succeeded()) GuardBreak_GS = Parryed_GS.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> Parryed_SS(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Boss_Parried_RM_Montage.Boss_Parried_RM_Montage'"));
	if (Parryed_SS.Succeeded()) GuardBreak_SS = Parryed_SS.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> GS_ChargedCombo(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Boss_Attack_ChargedComboAttack_RM_Montage.Boss_Attack_ChargedComboAttack_RM_Montage'"));
	if (GS_ChargedCombo.Succeeded()) Attack_GS_ChargedCombo = GS_ChargedCombo.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> GS_HandAndSwordSwing(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Boss_Attack_HandAndSwordSwing_RM_Montage.Boss_Attack_HandAndSwordSwing_RM_Montage'"));
	if (GS_HandAndSwordSwing.Succeeded()) Attack_GS_HandAndSwordSwing = GS_HandAndSwordSwing.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> GS_RunningAttackSimple(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Boss_Attack_Running_Simple_RM_Montage.Boss_Attack_Running_Simple_RM_Montage'"));
	if (GS_RunningAttackSimple.Succeeded()) Attack_GS_RunningAttackSimple = GS_RunningAttackSimple.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> GS_RunningAttackWithAOE(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Boss_Attack_Running_WithAOEBlow_RM_Montage.Boss_Attack_Running_WithAOEBlow_RM_Montage'"));
	if (GS_RunningAttackWithAOE.Succeeded()) Attack_GS_RunningAttackWithAOE = GS_RunningAttackWithAOE.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> GS_SwingAndSlam(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Boss_Attack_SwingAndSlam_RM_Montage.Boss_Attack_SwingAndSlam_RM_Montage'"));
	if (GS_SwingAndSlam.Succeeded()) Attack_GS_SwingAndSlam = GS_SwingAndSlam.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> GS_Uppercut(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Boss_Attack_Uppercut_RM_Montage.Boss_Attack_Uppercut_RM_Montage'"));
	if (GS_Uppercut.Succeeded()) Attack_GS_Uppercut = GS_Uppercut.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> SS_Combo1(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Combo_Attack_01_All_Seq_Montage.Combo_Attack_01_All_Seq_Montage'"));
	if (SS_Combo1.Succeeded()) Attack_SS_Combo1 = SS_Combo1.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> SS_Combo2(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Combo_Attack_02_All_Seq_Montage.Combo_Attack_02_All_Seq_Montage'"));
	if (SS_Combo2.Succeeded()) Attack_SS_Combo2 = SS_Combo2.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> SS_Combo3(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Combo_Attack_04_All_Seq_Montage.Combo_Attack_04_All_Seq_Montage'"));
	if (SS_Combo3.Succeeded()) Attack_SS_Combo3 = SS_Combo3.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> SS_JumpAttack(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Run_Attack_02_Seq_Montage.Run_Attack_02_Seq_Montage'"));
	if (SS_JumpAttack.Succeeded()) Attack_SS_JumpAttack = SS_JumpAttack.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Hit_GS_Forward(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Boss_ReactionHit_F_Montage.Boss_ReactionHit_F_Montage'"));
	if (Hit_GS_Forward.Succeeded()) Hit_GS_F = Hit_GS_Forward.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> Hit_GS_Backward(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Boss_ReactionHit_B_Montage.Boss_ReactionHit_B_Montage'"));
	if (Hit_GS_Backward.Succeeded()) Hit_GS_B = Hit_GS_Backward.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Hit_SS_Forward(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Hit_Combat_Large_F_Seq_Montage.Hit_Combat_Large_F_Seq_Montage'"));
	if (Hit_SS_Forward.Succeeded()) Hit_SS_F = Hit_SS_Forward.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> Hit_SS_Backward(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Hit_Combat_Large_B_Seq_Montage.Hit_Combat_Large_B_Seq_Montage'"));
	if (Hit_SS_Backward.Succeeded()) Hit_SS_B = Hit_SS_Backward.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Battle_Entrance(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Boss_BattleEntrance_RM_Montage.Boss_BattleEntrance_RM_Montage'"));
	if (Battle_Entrance.Succeeded()) Boss_Battle_Entrance = Battle_Entrance.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> Idle_to_Combat(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Idle_to_Idle_Combat_Seq_Montage.Idle_to_Idle_Combat_Seq_Montage'"));
	if (Idle_to_Combat.Succeeded()) Idle_To_Combat = Idle_to_Combat.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> Combat_to_Idle(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Idle_Combat_to_Idle_Seq_Montage.Idle_Combat_to_Idle_Seq_Montage'"));
	if (Combat_to_Idle.Succeeded()) Combat_To_Idle = Combat_to_Idle.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> Death(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Hit_Combat_Death_Seq_Montage.Hit_Combat_Death_Seq_Montage'"));
	if (Death.Succeeded()) Boss_Death = Death.Object;
}

void UEnemy_DarkKnight_AnimInst::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);


	auto Character = Cast<AEnemy_DarkKnight>(TryGetPawnOwner());
	if (IsValid(Character))
	{
		CurrentSpeed = Character->GetCurrentSpeed();
		Cur_State = Character->GetState();
		IsFight = Character->GetIsFight();
		IsAttacking = Character->GetIsAttacking();
		CurHP = Character->GetCurHP();
		Cur_EquipmentState = Character->GetEquipmentState();
		// KnockDown_Time = Character->GetKnockDownTime();
	}
	else GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("DarkKnight: Character Owner Is Null!"));
}

void UEnemy_DarkKnight_AnimInst::AnimNotify_InitState()
{
	auto Character = Cast<AEnemy_DarkKnight>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		Character->ChangeState(EMONSTER_STATE::IDLE);
		Character->SetIsAttacking(false);
	}
}

void UEnemy_DarkKnight_AnimInst::AnimNotify_PauseMontage()
{
	auto Character = Cast<AEnemy_DarkKnight>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		if (CurHP <= 0.0f)
		{
			if (GetCurrentActiveMontage() != nullptr)
			{
				Montage_Pause(GetCurrentActiveMontage());
			}
		}
	}
}

void UEnemy_DarkKnight_AnimInst::AnimNotify_InvinsibleStart()
{
	auto Character = Cast<AEnemy_DarkKnight>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		Character->GetMesh()->SetCollisionProfileName(FName("NoCollision"));
	}
}

void UEnemy_DarkKnight_AnimInst::AnimNotify_InvinsibleEnd()
{
	auto Character = Cast<AEnemy_DarkKnight>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		Character->GetMesh()->SetCollisionProfileName(FName("EnemyPhysicsActor"));
	}
}