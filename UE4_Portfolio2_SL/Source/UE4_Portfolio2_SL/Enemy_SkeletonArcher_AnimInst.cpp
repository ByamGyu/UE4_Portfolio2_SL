#include "Enemy_SkeletonArcher_AnimInst.h"
#include "Enemy_SkeletonArcher.h"


UEnemy_SkeletonArcher_AnimInst::UEnemy_SkeletonArcher_AnimInst()
	: CurrentSpeed(0.0f),
	CurrentDirection(0.0f),
	IsFight(false),
	IsAttacking(false),
	KnockDown_Time(0.0f),
	Cur_State(EMONSTER_STATE::IDLE)
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Attack_Melee(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonArcher/Animation_Montages/Standing_Melee_Punch_mixamo_com_Montage.Standing_Melee_Punch_mixamo_com_Montage'"));
	if (AM_Attack_Melee.Succeeded()) Attack_Melee = AM_Attack_Melee.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Attack_Range_Slow(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonArcher/Animation_Montages/RangeAttack_Slow.RangeAttack_Slow'"));
	if (AM_Attack_Range_Slow.Succeeded()) Attack_Range_Slow = AM_Attack_Range_Slow.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Attack_Range_Fast(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonArcher/Animation_Montages/RangeAttack_Fast.RangeAttack_Fast'"));
	if (AM_Attack_Range_Fast.Succeeded()) Attack_Range_Fast = AM_Attack_Range_Fast.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_HitBack(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonArcher/Animation_Montages/Standing_React_Small_From_Front_mixamo_com_Montage.Standing_React_Small_From_Front_mixamo_com_Montage'"));
	if (AM_HitBack.Succeeded()) HitBack = AM_HitBack.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Hit1(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonArcher/Animation_Montages/Standing_React_Small_From_Headshot_mixamo_com_Montage.Standing_React_Small_From_Headshot_mixamo_com_Montage'"));
	if (AM_Hit1.Succeeded()) Hit1 = AM_Hit1.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Hit2(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonArcher/Animation_Montages/Standing_React_Small_From_Left_mixamo_com_Montage.Standing_React_Small_From_Left_mixamo_com_Montage'"));
	if (AM_Hit2.Succeeded()) Hit2 = AM_Hit2.Object;
	static ConstructorHelpers::FObjectFinder<UAnimMontage> AM_Hit3(TEXT("AnimMontage'/Game/MyFolder/Enemy_SkeletonArcher/Animation_Montages/Standing_React_Small_From_Right_mixamo_com_Montage.Standing_React_Small_From_Right_mixamo_com_Montage'"));
	if (AM_Hit3.Succeeded()) Hit3 = AM_Hit3.Object;
}

void UEnemy_SkeletonArcher_AnimInst::AnimNotify_InitState()
{
	auto Character = Cast<AEnemy_SkeletonArcher>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		Character->ChangeState(EMONSTER_STATE::IDLE);
		Character->SetIsAttacking(false);
	}
}

void UEnemy_SkeletonArcher_AnimInst::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Character = Cast<AEnemy_SkeletonArcher>(TryGetPawnOwner());
	if (IsValid(Character))
	{
		CurrentSpeed = Character->GetCurrentSpeed();
		Cur_State = Character->GetState();
		IsFight = Character->GetIsFight();
		IsAttacking = Character->GetIsAttacking();
		// KnockDown_Time = Character->GetKnockDownTime();
	}
	else GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("SkeletonArcher: Character Owner Is Null!"));
}

void UEnemy_SkeletonArcher_AnimInst::Play_Attack_Melee()
{
	Montage_Play(Attack_Melee, 1.0f);
}

void UEnemy_SkeletonArcher_AnimInst::Play_Attack_Range_Slow()
{
	Montage_Play(Attack_Range_Slow, 1.0f);
}

void UEnemy_SkeletonArcher_AnimInst::Play_Attack_Range_Fast()
{
	Montage_Play(Attack_Range_Fast, 1.0f);
}

void UEnemy_SkeletonArcher_AnimInst::Play_HitRandom()
{
	int32 tmp = FMath::RandRange(0, 2);

	if (tmp == 0) Play_Hit1();
	else if (tmp == 1) Play_Hit2();
	else if (tmp == 2) Play_Hit3();
}

void UEnemy_SkeletonArcher_AnimInst::Play_Hit_Back()
{
	Montage_Play(HitBack, 1.0f);
}

void UEnemy_SkeletonArcher_AnimInst::Play_Hit1()
{
	Montage_Play(Hit1, 1.0f);
}

void UEnemy_SkeletonArcher_AnimInst::Play_Hit2()
{
	Montage_Play(Hit2, 1.0f);
}

void UEnemy_SkeletonArcher_AnimInst::Play_Hit3()
{
	Montage_Play(Hit3, 1.0f);
}

void UEnemy_SkeletonArcher_AnimInst::AnimNotify_PauseDeadMontage()
{
	auto Character = Cast<AEnemy_SkeletonArcher>(TryGetPawnOwner());
	if (Character != nullptr)
	{
		//if (Montage_IsPlaying(Dead1))
		//{
		//	Montage_Pause(Dead1);

		//	// TODO
		//}
		//else if (Montage_IsPlaying(Dead2))
		//{
		//	Montage_Pause(Dead2);

		//	// TODO
		//}
	}
	else GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("asdf"));
}

void UEnemy_SkeletonArcher_AnimInst::AnimNotify_Fire()
{
	// 화살 발사
}