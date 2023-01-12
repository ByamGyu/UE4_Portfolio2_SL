#include "Enemy_DarkKnight_AnimInst.h"
#include "Enemy_DarkKnight.h"
#include "Kismet/KismetMathLibrary.h"
#include "AI_DarkKnight.h"
#include "AI_Base.h"
#include "PlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"



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

	static ConstructorHelpers::FObjectFinder<UAnimMontage> Dodge_Back_180(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Dodge_Combat_B_180_Seq_Montage.Dodge_Combat_B_180_Seq_Montage'"));
	if (Dodge_Back_180.Succeeded()) Dodge_B180 = Dodge_Back_180.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> Dodge_BL_45(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Dodge_Combat_B_L_45_Seq_Montage.Dodge_Combat_B_L_45_Seq_Montage'"));
	if (Dodge_BL_45.Succeeded()) Dodge_BL45 = Dodge_BL_45.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> Dodge_BR_45(TEXT("AnimMontage'/Game/MyFolder/Enemy_DarkKnight/Animations/Dodge_Combat_B_R_45_Seq_Montage.Dodge_Combat_B_R_45_Seq_Montage'"));
	if (Dodge_BR_45.Succeeded()) Dodge_BR45 = Dodge_BR_45.Object;

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

		/*Character->SetActorRotation(FRotator(
			Character->GetActorRotation().Pitch,
			0.0f,
			Character->GetActorRotation().Roll)
		);*/
		//SetActorRotation(FRotator(0, GetControlRotation().Yaw, 0));
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

void UEnemy_DarkKnight_AnimInst::AnimNotify_DodgeEnd()
{
	auto Character = Cast<AEnemy_DarkKnight>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		// 목표물을 향해서 캐릭터를 즉시 회전시킴		
		auto tmpai = Cast<AAI_Base>(Character->GetController());
		if (tmpai == nullptr) return;
		auto tmpbb = tmpai->GetBlackboardComponent();
		if (tmpbb == nullptr) return;

		auto Target = Cast<APlayerCharacter>(tmpbb->GetValueAsObject(AAI_Base::TargetKey));
		if (Target == nullptr) return;
		FVector thisLocation = Character->GetActorLocation();
		FVector TargetLocation = Target->GetActorLocation();
		FRotator tmpRot = UKismetMathLibrary::FindLookAtRotation(thisLocation, TargetLocation);
		Character->SetActorRotation(tmpRot);
	}
}

void UEnemy_DarkKnight_AnimInst::PlaySwordCombo01Montage()
{
	Montage_Play(Attack_SS_Combo1, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlaySwordCombo02Montage()
{
	Montage_Play(Attack_SS_Combo2, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlaySwordCombo03Montage()
{
	Montage_Play(Attack_SS_Combo3, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlaySwordJumpAttackMontage()
{
	Montage_Play(Attack_SS_JumpAttack, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlayGreatSwordCombo01Montage()
{
	Montage_Play(Attack_GS_ChargedCombo, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlayGreatSwordCombo02Montage()
{
	Montage_Play(Attack_GS_HandAndSwordSwing, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlayGreatSwordCombo03Montage()
{
	Montage_Play(Attack_GS_SwingAndSlam, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlayGreatSwordUppercutMontage()
{
	Montage_Play(Attack_GS_Uppercut, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlayGreatSwordRunningAttackMontage()
{
	Montage_Play(Attack_GS_RunningAttackSimple, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlayGreatSwordRunningAOEAttackMontage()
{
	Montage_Play(Attack_GS_RunningAttackWithAOE, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlayGuardBreakMontage()
{
	auto Character = Cast<AEnemy_DarkKnight>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		if (Character->GetEquipmentState() == EEQUIPMENT_STATE::SWORD)
		{
			Montage_Play(GuardBreak_SS, 1.0f);
		}
		else if (Character->GetEquipmentState() == EEQUIPMENT_STATE::GREATSWORD)
		{
			Montage_Play(GuardBreak_GS, 1.0f);
		}
	}
}

void UEnemy_DarkKnight_AnimInst::PlayExecutionMontage()
{
	Montage_Play(Execute2, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlayExecutedMontage()
{
	Montage_Play(Executed_FalldownBack, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlayExecutedBack()
{
	Montage_Play(Executed_FalldownFront, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlayDeadMontage()
{
	Montage_Play(Boss_Death, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlayImpactMontage()
{
	auto Character = Cast<AEnemy_DarkKnight>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		if (Character->GetEquipmentState() == EEQUIPMENT_STATE::SWORD)
		{
			Montage_Play(Hit_SS_F, 1.0f);
		}
		else if (Character->GetEquipmentState() == EEQUIPMENT_STATE::GREATSWORD)
		{
			Montage_Play(Hit_GS_F, 1.0f);
		}
	}
}

void UEnemy_DarkKnight_AnimInst::PlayHitBackMontage()
{
	auto Character = Cast<AEnemy_DarkKnight>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		if (Character->GetEquipmentState() == EEQUIPMENT_STATE::SWORD)
		{
			Montage_Play(Hit_SS_B, 1.0f);
		}
		else if (Character->GetEquipmentState() == EEQUIPMENT_STATE::GREATSWORD)
		{
			Montage_Play(Hit_GS_B, 1.0f);
		}
	}
}

void UEnemy_DarkKnight_AnimInst::PlayDodgeB180Montage()
{
	Montage_Play(Dodge_B180, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlayDodgeBL45Montage()
{
	Montage_Play(Dodge_BL45, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlayDodgeBR45Montage()
{
	Montage_Play(Dodge_BR45, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlayBossBattleEntranceMontage()
{
	Montage_Play(Boss_Battle_Entrance, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlayIdleToCombatMontage()
{
	Montage_Play(Idle_To_Combat, 1.0f);
}

void UEnemy_DarkKnight_AnimInst::PlayCombatToIdleMontage()
{
	Montage_Play(Combat_To_Idle, 1.0f);
}