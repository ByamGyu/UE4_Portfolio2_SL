#include "Enemy_DarkKnight.h"
#include "AI_Base.h"


AEnemy_DarkKnight::AEnemy_DarkKnight()
{
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM_tmp(TEXT("SkeletalMesh'/Game/Fallen_Knight/Mesh/SK_Fallen_Knight.SK_Fallen_Knight'"));
	if (SM_tmp.Succeeded()) GetMesh()->SetSkeletalMesh(SM_tmp.Object);

	GetCapsuleComponent()->InitCapsuleSize(42.f, 88.0f);
	GetCapsuleComponent()->SetCollisionProfileName("Pawn");

	// UClass* pEnemyInfo = AEnemy_DarkKnight::StaticClass();

	static ConstructorHelpers::FClassFinder<UEnemy_DarkKnight_AnimInst> ABP_DarkKnight(TEXT("AnimBlueprint'/Game/MyFolder/Enemy_DarkKnight/ABP_DarkKnight.ABP_DarkKnight_C'"));
	if (ABP_DarkKnight.Succeeded()) GetMesh()->SetAnimInstanceClass(ABP_DarkKnight.Class);

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = 350.0f;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 270.0f, 0.0f);
	//GetCharacterMovement()->JumpZVelocity = 300.0f; // 기본값(420)
	GetCharacterMovement()->AirControl = 0.1f;

	AttackDamage = 10.0f;

	RightWeaponClass = AWeapon_DarkKnightSword::StaticClass();
	//LeftWeaponClass = AShield_DarkKnightShield::StaticClass();

	ExecutionAnimationNum = 1;
	ExecutionBackAnimationNum = 1;

	Cur_EquipmentState = EEQUIPMENT_STATE::SWORD;


	//// UI관련 체력바
	//WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
	//WidgetComponent->SetupAttachment(GetMesh()); // 스켈레탈메쉬를 기준으로
}

void AEnemy_DarkKnight::BeginPlay()
{
	Super::BeginPlay();

	// 전용 장비(오른손) 들고있기
	FName RightArmWeaponSocket(TEXT("RightArm_Weapon"));
	if (GetMesh()->DoesSocketExist(RightArmWeaponSocket))
	{
		auto NewWeapon = GetWorld()->SpawnActor<AWeapon_DarkKnightSword>(RightWeaponClass, FVector::ZeroVector, FRotator::ZeroRotator);
		if (NewWeapon != nullptr)
		{
			RightWeapon = NewWeapon;
			NewWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, RightArmWeaponSocket);
			NewWeapon->SetOwner(this);
		}
	}

	// 전용 장비(왼손) 들고있기
	//FName LeftArmWeaponSocket(TEXT("LeftArm_Weapon"));
	//if (GetMesh()->DoesSocketExist(LeftArmWeaponSocket))
	//{
	//	auto NewWeapon = GetWorld()->SpawnActor<AShield_DarkKnightShield>(LeftWeaponClass, FVector::ZeroVector, FRotator::ZeroRotator);
	//	if (NewWeapon != nullptr)
	//	{
	//		LeftWeapon = NewWeapon;
	//		NewWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, LeftArmWeaponSocket);
	//		NewWeapon->SetOwner(this);
	//	}
	//}
}

void AEnemy_DarkKnight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// HP 퍼센트 관리
	HPRatio = CurHP / MaxHP;

	if (GetVelocity().Size() > 0.0f)
	{
		// 조건 조절 필요
		if (Cur_State == EMONSTER_STATE::ATTACK
			|| Cur_State == EMONSTER_STATE::DEAD
			|| Cur_State == EMONSTER_STATE::FALL
			|| Cur_State == EMONSTER_STATE::GUARD_BREAK
			|| Cur_State == EMONSTER_STATE::KNOCK_DOWN
			|| Cur_State == EMONSTER_STATE::IMPACT_WEAK
			|| Cur_State == EMONSTER_STATE::IMPACT_STRONG
			|| Cur_State == EMONSTER_STATE::GUARD_IMPACT_WEAK
			|| Cur_State == EMONSTER_STATE::GUARD_IMPACT_STRONG
			|| Cur_State == EMONSTER_STATE::EXECUTED
			|| Cur_State == EMONSTER_STATE::EXECUTION
			)
		{
			// 아무것도 하지 않음
		}
		else
		{
			ChangeState(EMONSTER_STATE::MOVE);
		}
	}


	// 체력바 변경
	/*UUserWidget_HPBar* pHPBar = Cast<UUserWidget_HPBar>(WidgetComponent->GetWidget());
	if (pHPBar != nullptr)
	{
		pHPBar->SetPercent(HPRatio);
	}*/
}

void AEnemy_DarkKnight::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (!IsPlayerControlled())
	{
		//GetCharacterMovement()->bUseControllerDesiredRotation = false;
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 480.0f, 0.0f);
	}
}

float AEnemy_DarkKnight::GetCurHP()
{
	return CurHP;
}

void AEnemy_DarkKnight::SetCurHP(float _Value)
{
	Super::SetCurHP(_Value);


}

void AEnemy_DarkKnight::SetRightWeapon(AWeapon_Common* _NewWeapon)
{
}

void AEnemy_DarkKnight::SetLeftWeapon(AShield_Common* _NewShield)
{
}

void AEnemy_DarkKnight::DedicatedAnim_PlaySwordRandomAttackAll()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE)
	{
		auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			IsAttacking = true;

			int32 tmp = FMath::RandRange(0, 2);
			if (tmp == 0) DedicatedAnim_PlaySwordCombo01Montage();
			else if (tmp == 1) DedicatedAnim_PlaySwordCombo02Montage();
			else if (tmp == 2) DedicatedAnim_PlaySwordCombo03Montage();
		}
		else return;
	}
}

void AEnemy_DarkKnight::DedicatedAnim_PlaySwordCombo01Montage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		IsAttacking = true;
		ChangeState(EMONSTER_STATE::ATTACK);
		pAnimInst->PlaySwordCombo01Montage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlaySwordCombo02Montage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		IsAttacking = true;
		ChangeState(EMONSTER_STATE::ATTACK);
		pAnimInst->PlaySwordCombo02Montage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlaySwordCombo03Montage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		IsAttacking = true;
		ChangeState(EMONSTER_STATE::ATTACK);
		pAnimInst->PlaySwordCombo03Montage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlaySwordJumpAttackMontage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		IsAttacking = true;
		ChangeState(EMONSTER_STATE::ATTACK);
		pAnimInst->PlaySwordJumpAttackMontage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayGreatSwordRandomAttackAll()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::IMPACT_WEAK
		|| Cur_State == EMONSTER_STATE::IMPACT_STRONG)
	{
		auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			IsAttacking = true;

			int32 tmp = FMath::RandRange(0, 3);
			if (tmp == 0) DedicatedAnim_PlayGreatSwordCombo01AttackMontage();
			else if (tmp == 1) DedicatedAnim_PlayGreatSwordCombo02AttackMontage();
			else if (tmp == 2) DedicatedAnim_PlayGreatSwordCombo03AttackMontage();
			else if (tmp == 3) DedicatedAnim_PlayGreatSwordUppercutMontage();
		}
		else return;
	}
}

void AEnemy_DarkKnight::DedicatedAnim_PlayGreatSwordRandomRunningAttackAll()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::IMPACT_WEAK
		|| Cur_State == EMONSTER_STATE::IMPACT_STRONG)
	{
		auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			IsAttacking = true;

			int32 tmp = FMath::RandRange(0, 1);
			if (tmp == 0) DedicatedAnim_PlayGreatSwordRunningAttackMontage();
			else if (tmp == 1) DedicatedAnim_PlayGreatSwordRunningAOEAttackMontage();
		}
		else return;
	}
}

void AEnemy_DarkKnight::DedicatedAnim_PlayGreatSwordCombo01AttackMontage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		IsAttacking = true;
		ChangeState(EMONSTER_STATE::ATTACK);
		pAnimInst->PlayGreatSwordCombo01Montage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayGreatSwordCombo02AttackMontage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		IsAttacking = true;
		ChangeState(EMONSTER_STATE::ATTACK);
		pAnimInst->PlayGreatSwordCombo02Montage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayGreatSwordCombo03AttackMontage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		IsAttacking = true;
		ChangeState(EMONSTER_STATE::ATTACK);
		pAnimInst->PlayGreatSwordCombo03Montage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayGreatSwordUppercutMontage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		IsAttacking = true;
		ChangeState(EMONSTER_STATE::ATTACK);
		pAnimInst->PlayGreatSwordUppercutMontage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayGreatSwordRunningAttackMontage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		IsAttacking = true;
		ChangeState(EMONSTER_STATE::ATTACK);
		pAnimInst->PlayGreatSwordRunningAttackMontage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayGreatSwordRunningAOEAttackMontage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		IsAttacking = true;
		ChangeState(EMONSTER_STATE::ATTACK);
		pAnimInst->PlayGreatSwordRunningAOEAttackMontage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayGuardBreakMontage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		ChangeState(EMONSTER_STATE::GUARD_BREAK);
		pAnimInst->PlayGuardBreakMontage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayExecutionMontage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		ChangeState(EMONSTER_STATE::EXECUTION);
		pAnimInst->PlayExecutionMontage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayExecutedMontage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		ChangeState(EMONSTER_STATE::EXECUTED);
		pAnimInst->PlayExecutedMontage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayExecutedBackMontage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		ChangeState(EMONSTER_STATE::EXECUTED);
		pAnimInst->PlayExecutedBack();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayDodgeB180Montage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		// 전용 State 필요
		//ChangeState(EMONSTER_STATE::EXECUTED);
		pAnimInst->PlayDodgeB180Montage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayDodgeBL45Montage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		// 전용 State 필요
		//ChangeState(EMONSTER_STATE::EXECUTED);
		pAnimInst->PlayDodgeBL45Montage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayDodgeBR45Montage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		// 전용 State 필요
		//ChangeState(EMONSTER_STATE::EXECUTED);
		pAnimInst->PlayDodgeBR45Montage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayDeadMontage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		ChangeState(EMONSTER_STATE::DEAD);
		pAnimInst->PlayDeadMontage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayImpactMontage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		ChangeState(EMONSTER_STATE::IMPACT_WEAK);
		pAnimInst->PlayImpactMontage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayHitBackMontage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		ChangeState(EMONSTER_STATE::IMPACT_WEAK);
		pAnimInst->PlayHitBackMontage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayBossBattleEntranceMontage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		// 전용 State 필요함
		//ChangeState(EMONSTER_STATE::IMPACT_WEAK);
		pAnimInst->PlayBossBattleEntranceMontage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayIdleToCombateMontage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		// 전용 State 필요함
		//ChangeState(EMONSTER_STATE::IMPACT_WEAK);
		pAnimInst->PlayIdleToCombatMontage();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_DarkKnight::DedicatedAnim_PlayCombateToIdleMontage()
{
	auto pAnimInst = Cast<UEnemy_DarkKnight_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		// 전용 State 필요함
		//ChangeState(EMONSTER_STATE::IMPACT_WEAK);
		pAnimInst->PlayCombatToIdleMontage();

		// TODO (효과음?)
	}
	else return;
}