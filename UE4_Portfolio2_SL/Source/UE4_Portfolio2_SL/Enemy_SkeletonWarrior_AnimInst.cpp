#include "Enemy_SkeletonWarrior_AnimInst.h"
#include "Enemy_SkeletonWarrior.h"


UEnemy_SkeletonWarrior_AnimInst::UEnemy_SkeletonWarrior_AnimInst()
	: CurrentSpeed(0.0f),
	CurrentDirection(0.0f),
	IsFight(false),
	IsAttacking(false),
	KnockDown_Time(0.0f),
	Cur_State(EMONSTER_STATE::IDLE)
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_ComboAttack01(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_ComboAttack01_Stand.Anim_ComboAttack01_Stand'"));
	if (AM_ComboAttack01.Succeeded()) Attack_Combo_01_Stand = AM_ComboAttack01.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_ComboAttack02(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_ComboAttack02_Move.Anim_ComboAttack02_Move'"));
	if (AM_ComboAttack02.Succeeded()) Attack_Combo_02_Move = AM_ComboAttack02.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_ComboAttack03(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_ComboAttack03_Mix.Anim_ComboAttack03_Mix'"));
	if (AM_ComboAttack03.Succeeded()) Attack_Combo_03_Mix = AM_ComboAttack03.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Slash_Stand(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_attackstand_02_Montage.Anim_attackstand_02_Montage'"));
	if (AM_Slash_Stand.Succeeded()) Attack_Slash_Stand = AM_Slash_Stand.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Strike_Stand(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_attackstand_01_Montage.Anim_attackstand_01_Montage'"));
	if (AM_Strike_Stand.Succeeded()) Attack_Strike_Stand = AM_Strike_Stand.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Thrust_Stand(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_guardandattackstand_01_Montage.Anim_guardandattackstand_01_Montage'"));
	if (AM_Thrust_Stand.Succeeded()) Attack_Thrust_Stand = AM_Thrust_Stand.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Slash_Move(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_attackmove_02_Montage.Anim_attackmove_02_Montage'"));
	if (AM_Slash_Move.Succeeded()) Attack_Slash_Move = AM_Slash_Move.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Strike_Move(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_attackmove_01_Montage.Anim_attackmove_01_Montage'"));
	if (AM_Strike_Move.Succeeded()) Attack_Strike_Move = AM_Strike_Move.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Thrust_Move(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_guardandattackmove_01_Montage.Anim_guardandattackmove_01_Montage'"));
	if (AM_Thrust_Move.Succeeded()) Attack_Thrust_Move = AM_Thrust_Move.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_GuardBreak(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_guardbreak_Montage.Anim_guardbreak_Montage'"));
	if (AM_GuardBreak.Succeeded()) GuardBreak = AM_GuardBreak.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Dead1(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_death_01_Montage.Anim_death_01_Montage'"));
	if (AM_Dead1.Succeeded()) Dead1 = AM_Dead1.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Dead2(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_death_02_Montage.Anim_death_02_Montage'"));
	if (AM_Dead2.Succeeded()) Dead2 = AM_Dead2.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Hit01(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_hit_02_Montage.Anim_hit_02_Montage'"));
	if (AM_Hit01.Succeeded()) Hit01 = AM_Hit01.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Hit02(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_hit_03_Montage.Anim_hit_03_Montage'"));
	if (AM_Hit02.Succeeded()) Hit02 = AM_Hit02.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_HitBack(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_hitBack_Montage.Anim_hitBack_Montage'"));
	if (AM_HitBack.Succeeded()) HitBack = AM_HitBack.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_SleepStand(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_Idle_sleepstand_Montage.Anim_Idle_sleepstand_Montage'"));
	if (AM_SleepStand.Succeeded()) SleepStand = AM_SleepStand.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_SleepSitdown(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_sleepsitdown_Loop_Montage.Anim_sleepsitdown_Loop_Montage'"));
	if (AM_SleepSitdown.Succeeded()) SleepSitdown = AM_SleepSitdown.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Standup(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_stand_up_Montage.Anim_stand_up_Montage'"));
	if (AM_Standup.Succeeded()) Standup = AM_Standup.Object;
}

void UEnemy_SkeletonWarrior_AnimInst::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Character = Cast<AEnemy_SkeletonWarrior>(TryGetPawnOwner());
	if (IsValid(Character))
	{
		CurrentSpeed = Character->GetCurrentSpeed();
		Cur_State = Character->GetState();
		IsFight = Character->GetIsFight();
		IsAttacking = Character->GetIsAttacking();
		// KnockDown_Time = Character->GetKnockDownTime();
	}
	else GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Skeleton: Character Owner Is Null!"));
}

void UEnemy_SkeletonWarrior_AnimInst::PlayCombo01StandMontage()
{
	Montage_Play(Attack_Combo_01_Stand, 1.0f);
}

void UEnemy_SkeletonWarrior_AnimInst::PlayCombo02MoveMontage()
{
	Montage_Play(Attack_Combo_02_Move, 1.0f);
}

void UEnemy_SkeletonWarrior_AnimInst::PlayCombo03MixMontage()
{
	Montage_Play(Attack_Combo_03_Mix, 1.0f);
}

void UEnemy_SkeletonWarrior_AnimInst::PlayAttackSlashStandMontage()
{
	Montage_Play(Attack_Slash_Stand, 1.0f);
}

void UEnemy_SkeletonWarrior_AnimInst::PlayAttackStrikeStandMontage()
{
	Montage_Play(Attack_Strike_Stand, 1.0f);
}

void UEnemy_SkeletonWarrior_AnimInst::PlayAttackThrustStandMontage()
{
	Montage_Play(Attack_Thrust_Stand, 1.0f);
}

void UEnemy_SkeletonWarrior_AnimInst::PlayAttackSlashMoveMontage()
{
	Montage_Play(Attack_Slash_Move, 1.0f);
}

void UEnemy_SkeletonWarrior_AnimInst::PlayAttackStrikeMoveMontage()
{
	Montage_Play(Attack_Strike_Move, 1.0f);
}

void UEnemy_SkeletonWarrior_AnimInst::PlayAttackThrustMoveMontage()
{
	Montage_Play(Attack_Thrust_Move, 1.0f);
}

void UEnemy_SkeletonWarrior_AnimInst::PlayGuardBreakMontage()
{
	Montage_Play(GuardBreak, 1.0f);
}

void UEnemy_SkeletonWarrior_AnimInst::PlayDeadMontage()
{
	int32 tmp = FMath::RandRange(0, 1);

	if (tmp == 0) Montage_Play(Dead1, 1.0f);
	else if (tmp == 1) Montage_Play(Dead2, 1.0f);	
}

void UEnemy_SkeletonWarrior_AnimInst::PlayImpactMontage()
{
	int32 tmp = FMath::RandRange(0, 1);

	if (tmp == 0) Montage_Play(Hit01, 1.0f);
	else if (tmp == 1) Montage_Play(Hit02, 1.0f);
}

void UEnemy_SkeletonWarrior_AnimInst::PlayHitBackMontage()
{
	Montage_Play(HitBack, 1.0f);
}

void UEnemy_SkeletonWarrior_AnimInst::PlaySleepStandMontage()
{
	Montage_Play(SleepStand, 1.0f);
}

void UEnemy_SkeletonWarrior_AnimInst::PlaySleepSitdownMontage()
{
	Montage_Play(SleepSitdown, 1.0f);
}

void UEnemy_SkeletonWarrior_AnimInst::PlayStandupMontage()
{
	Montage_Play(Standup, 1.0f);
}

void UEnemy_SkeletonWarrior_AnimInst::AnimNotify_InitState()
{
	auto Character = Cast<AEnemy_SkeletonWarrior>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		Character->ChangeState(EMONSTER_STATE::IDLE);
		Character->SetIsAttacking(false);
	}
}

void UEnemy_SkeletonWarrior_AnimInst::AnimNotify_PauseDeadMontage()
{
	auto Character = Cast<AEnemy_SkeletonWarrior>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		if (Montage_IsPlaying(Dead1))
		{
			Montage_Pause(Dead1);

			// TODO
		}
		else if (Montage_IsPlaying(Dead2))
		{
			Montage_Pause(Dead2);

			// TODO
		}
	}
	else GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("asdf"));
}
