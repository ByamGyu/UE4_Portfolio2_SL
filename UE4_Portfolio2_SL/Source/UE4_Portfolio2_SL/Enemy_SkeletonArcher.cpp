#include "Enemy_SkeletonArcher.h"
#include "PlayerCharacter.h"
#include "AI_Base.h"
#include "BehaviorTree/BlackboardComponent.h"


AEnemy_SkeletonArcher::AEnemy_SkeletonArcher()
{
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM_tmp(TEXT("SkeletalMesh'/Game/SkeletonArcher/Mesh/SK_Skeleton_Archer.SK_Skeleton_Archer'"));
	if (SM_tmp.Succeeded()) GetMesh()->SetSkeletalMesh(SM_tmp.Object);

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	GetCapsuleComponent()->SetCollisionProfileName("Pawn");

	UClass* pEnemyInfo = AEnemy_SkeletonArcher::StaticClass();

	static ConstructorHelpers::FClassFinder<UEnemy_SkeletonArcher_AnimInst> ABP_SkeletonArcher(TEXT("AnimBlueprint'/Game/MyFolder/Enemy_SkeletonArcher/ABP_SkeletonArcher.ABP_SkeletonArcher_C'"));
	if (ABP_SkeletonArcher.Succeeded()) GetMesh()->SetAnimInstanceClass(ABP_SkeletonArcher.Class);

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = 200.0f;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 270.0f, 0.0f);
	//GetCharacterMovement()->JumpZVelocity = 300.0f; // 기본값(420)
	GetCharacterMovement()->AirControl = 0.1f;

	AttackDamage = 5.0f;

	// 실제 위치는 왼손임
	RightWeaponClass = AWeapon_SkeletonArcherBow::StaticClass();

	Projectile_ArrowClass = AProjectile_SkeletonArcherArrow::StaticClass();

	ExecutionAnimationNum = 0;
	ExecutionBackAnimationNum = 1;

	
	// UI관련 체력바
	WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
	WidgetComponent->SetupAttachment(GetMesh());
}

void AEnemy_SkeletonArcher::BeginPlay()
{
	Super::BeginPlay();


	// 전용 장비(왼손) 들고있기
	FName RightArmWeaponSocket(TEXT("LeftArm_Weapon"));
	if (GetMesh()->DoesSocketExist(RightArmWeaponSocket))
	{
		auto NewWeapon = GetWorld()->SpawnActor<AWeapon_SkeletonArcherBow>(RightWeaponClass, FVector::ZeroVector, FRotator::ZeroRotator);
		if (NewWeapon != nullptr)
		{
			RightWeapon = NewWeapon;
			NewWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, RightArmWeaponSocket);
			NewWeapon->SetOwner(this);
		}
	}
}

void AEnemy_SkeletonArcher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (GetVelocity().Size() > 0.0f)
	{
		// 조건 조절 필요
		if (Cur_State == EMONSTER_STATE::ATTACK
			|| Cur_State == EMONSTER_STATE::RANGE_AIM
			|| Cur_State == EMONSTER_STATE::RANGE_FIRE
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

	// HP 퍼센트 관리
	HPRatio = CurHP / MaxHP;

	// 체력바 변경
	UUserWidget_HPBar* pHPBar = Cast<UUserWidget_HPBar>(WidgetComponent->GetWidget());
	if (pHPBar != nullptr)
	{
		pHPBar->SetPercent(HPRatio);
	}
}

void AEnemy_SkeletonArcher::PossessedBy(AController* NewController)
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

void AEnemy_SkeletonArcher::ChangeState(EMONSTER_STATE _NextState)
{
	if (Cur_State == _NextState) return;
	else if (Cur_State == EMONSTER_STATE::DEAD) return;
	else Cur_State = _NextState;
}

float AEnemy_SkeletonArcher::GetCurrentSpeed()
{
	return GetVelocity().Size();
}

float AEnemy_SkeletonArcher::GetCurHP()
{
	return CurHP;
}

void AEnemy_SkeletonArcher::SetCurHP(float _Value)
{
	Super::SetCurHP(_Value);
}

void AEnemy_SkeletonArcher::SetRightWeapon(AWeapon_SkeletonArcherBow* _NewWeapon)
{
	FName RightArmWeaponSocket(TEXT("LeftArm_Weapon"));

	if (_NewWeapon != nullptr)
	{
		RightWeapon = _NewWeapon;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("_NewRightWeapon is Nullptr"));
	}
}

void AEnemy_SkeletonArcher::RandomAttackAll()
{
	Play_Fire_Arrow();
}

void AEnemy_SkeletonArcher::Play_Fire_Arrow()
{
	AWeapon_SkeletonArcherBow* CurWeapon = Cast<AWeapon_SkeletonArcherBow>(GetRightWeapon());
	if (CurWeapon != nullptr)
	{
		Play_Attack_Range_Slow();
	}
	else GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Bow Is Null"));
}

void AEnemy_SkeletonArcher::Spawn_And_Fire_Arrow()
{
	AWeapon_SkeletonArcherBow* CurWeapon = Cast<AWeapon_SkeletonArcherBow>(GetRightWeapon());
	if (CurWeapon != nullptr)
	{
		FVector TargetLoc;
		FVector SpawnLoc = CurWeapon->GetMesh()->GetSocketLocation(FName("Socket_Projectile"));
		FVector TargetDir;

		// 컨트롤러(AI) 가져오기
		auto AIController = Cast<AAI_Base>(GetController());
		if (AIController == nullptr)
		{
			return;
		}

		// AI의 BB로 부터 Target 정보 가져오기
		APlayerCharacter * Target = Cast<APlayerCharacter>(AIController->GetBlackboardComponent()->GetValueAsObject(AAI_Base::TargetKey));
		if (Target != nullptr)
		{
			// 화살의 방향을 살짝 위로 조절(위치 차이 때문에 살짝 아래로 날아감)
			TargetLoc = Target->GetActorLocation() + FVector(0.0f, 0.0f, 25.0f);
			TargetDir = (TargetLoc - SpawnLoc).GetSafeNormal();
		}

		if (Target != nullptr)
		{
			FActorSpawnParameters SpawnParams; // 더미

			// 화살을 스폰하고
			AProjectile_SkeletonArcherArrow* Arrow = GetWorld()->SpawnActor<AProjectile_SkeletonArcherArrow>(Projectile_ArrowClass, SpawnLoc, FRotator::ZeroRotator, SpawnParams);
			// 화살을 발사
			Arrow->FireInDirection(TargetDir);
			Arrow->SetDamage(AttackDamage);
		}
	}
	else GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Bow Is Null"));
}

void AEnemy_SkeletonArcher::Play_Attack_Melee()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonArcher_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::ATTACK);

			IsAttacking = true;

			pAnimInst->Play_Attack_Melee();
		}
		else return;
	}
}

void AEnemy_SkeletonArcher::Play_Attack_Range_Slow()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonArcher_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::RANGE_ATTACK);

			IsAttacking = true;

			pAnimInst->Play_Attack_Range_Slow();
		}
		else return;
	}
}

void AEnemy_SkeletonArcher::Play_Attack_Range_Fast()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonArcher_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::RANGE_ATTACK);

			IsAttacking = true;

			pAnimInst->Play_Attack_Range_Fast();
		}
		else return;
	}
}

void AEnemy_SkeletonArcher::Play_HitRandom()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonArcher_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::IMPACT_WEAK);

			pAnimInst->Play_HitRandom();
		}
		else return;
	}
}

void AEnemy_SkeletonArcher::Play_Hit_Back()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonArcher_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::IMPACT_WEAK);

			pAnimInst->Play_Hit_Back();
		}
		else return;
	}
}

void AEnemy_SkeletonArcher::Play_Hit1()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonArcher_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::IMPACT_WEAK);

			pAnimInst->Play_Hit1();
		}
		else return;
	}
}

void AEnemy_SkeletonArcher::Play_Hit2()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonArcher_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::IMPACT_WEAK);

			pAnimInst->Play_Hit2();
		}
		else return;
	}
}

void AEnemy_SkeletonArcher::Play_Hit3()
{
	if (Cur_State == EMONSTER_STATE::IDLE
		|| Cur_State == EMONSTER_STATE::MOVE
		|| Cur_State == EMONSTER_STATE::DEAD)
	{
		auto pAnimInst = Cast<UEnemy_SkeletonArcher_AnimInst>(GetMesh()->GetAnimInstance());
		if (pAnimInst != nullptr)
		{
			ChangeState(EMONSTER_STATE::IMPACT_WEAK);

			pAnimInst->Play_Hit3();
		}
		else return;
	}
}

void AEnemy_SkeletonArcher::PlayExecutedBackAnimation()
{
	Super::PlayExecutedBackAnimation();

	auto pAnimInst = Cast<UEnemy_SkeletonArcher_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		ChangeState(EMONSTER_STATE::EXECUTED);
		pAnimInst->Play_Executed_Back();

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_SkeletonArcher::PlayHitAniamtion(float _Degree)
{
	Super::PlayHitAniamtion(_Degree);

	auto pAnimInst = Cast<UEnemy_SkeletonArcher_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		ChangeState(EMONSTER_STATE::IMPACT_WEAK);

		if (_Degree >= 90.0f)
		{
			pAnimInst->Play_HitRandom();
		}
		else if (_Degree < 90.0f)
		{
			pAnimInst->Play_Hit_Back();
		}

		// TODO (효과음?)
	}
	else return;
}

void AEnemy_SkeletonArcher::Dead()
{
	Super::Dead();

	// UI를 모두 안보이게 한다
	WidgetComponent->SetVisibility(false);

	auto pAnimInst = Cast<UEnemy_SkeletonArcher_AnimInst>(GetMesh()->GetAnimInstance());
	if (pAnimInst != nullptr)
	{
		ChangeState(EMONSTER_STATE::DEAD);

		// 처형애니메이션 실행중이면 return;
		if (Cur_State == EMONSTER_STATE::EXECUTED) return;

		pAnimInst->Play_Dead();

		// TODO (효과음?)
	}
	else return;
}
