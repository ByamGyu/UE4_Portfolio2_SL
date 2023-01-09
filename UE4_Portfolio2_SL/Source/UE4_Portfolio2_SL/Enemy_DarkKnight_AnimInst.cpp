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
	/*static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_ComboAttack01(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonWarrior/Animation_Montages/Anim_ComboAttack01_Stand.Anim_ComboAttack01_Stand'"));
	if (AM_ComboAttack01.Succeeded()) Attack_Combo_01_Stand = AM_ComboAttack01.Object;*/
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