// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4_PORTFOLIO2_SL_PlayerCharacterAnimInstance_generated_h
#error "PlayerCharacterAnimInstance.generated.h already included, missing '#pragma once' in PlayerCharacterAnimInstance.h"
#endif
#define UE4_PORTFOLIO2_SL_PlayerCharacterAnimInstance_generated_h

#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_SPARSE_DATA
#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_CanRoll); \
	DECLARE_FUNCTION(execAnimNotify_UseStaminaHeavyAttack); \
	DECLARE_FUNCTION(execAnimNotify_UseStaminaLightAttack); \
	DECLARE_FUNCTION(execAnimNotify_InvinsibleEnd); \
	DECLARE_FUNCTION(execAnimNotify_InvinsibleStart); \
	DECLARE_FUNCTION(execAnimNotify_AttackInputCheck); \
	DECLARE_FUNCTION(execAnimNotify_AttackEnd); \
	DECLARE_FUNCTION(execAnimNotify_GuardStart); \
	DECLARE_FUNCTION(execAnimNotify_NockDownRecover); \
	DECLARE_FUNCTION(execAnimNotify_ParryEnd); \
	DECLARE_FUNCTION(execAnimNotify_ParryStart); \
	DECLARE_FUNCTION(execAnimNotify_SpellEnd); \
	DECLARE_FUNCTION(execAnimNotify_RollEnd); \
	DECLARE_FUNCTION(execAnimNotify_JumpEnd); \
	DECLARE_FUNCTION(execAnimNotify_InitState);


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_CanRoll); \
	DECLARE_FUNCTION(execAnimNotify_UseStaminaHeavyAttack); \
	DECLARE_FUNCTION(execAnimNotify_UseStaminaLightAttack); \
	DECLARE_FUNCTION(execAnimNotify_InvinsibleEnd); \
	DECLARE_FUNCTION(execAnimNotify_InvinsibleStart); \
	DECLARE_FUNCTION(execAnimNotify_AttackInputCheck); \
	DECLARE_FUNCTION(execAnimNotify_AttackEnd); \
	DECLARE_FUNCTION(execAnimNotify_GuardStart); \
	DECLARE_FUNCTION(execAnimNotify_NockDownRecover); \
	DECLARE_FUNCTION(execAnimNotify_ParryEnd); \
	DECLARE_FUNCTION(execAnimNotify_ParryStart); \
	DECLARE_FUNCTION(execAnimNotify_SpellEnd); \
	DECLARE_FUNCTION(execAnimNotify_RollEnd); \
	DECLARE_FUNCTION(execAnimNotify_JumpEnd); \
	DECLARE_FUNCTION(execAnimNotify_InitState);


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerCharacterAnimInstance(); \
	friend struct Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPlayerCharacterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UE4_Portfolio2_SL"), NO_API) \
	DECLARE_SERIALIZER(UPlayerCharacterAnimInstance)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerCharacterAnimInstance(); \
	friend struct Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPlayerCharacterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UE4_Portfolio2_SL"), NO_API) \
	DECLARE_SERIALIZER(UPlayerCharacterAnimInstance)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerCharacterAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerCharacterAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerCharacterAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerCharacterAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerCharacterAnimInstance(UPlayerCharacterAnimInstance&&); \
	NO_API UPlayerCharacterAnimInstance(const UPlayerCharacterAnimInstance&); \
public:


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerCharacterAnimInstance(UPlayerCharacterAnimInstance&&); \
	NO_API UPlayerCharacterAnimInstance(const UPlayerCharacterAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerCharacterAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerCharacterAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerCharacterAnimInstance)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentSpeed() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, CurrentSpeed); } \
	FORCEINLINE static uint32 __PPO__CurrentSpeedAndDirection() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, CurrentSpeedAndDirection); } \
	FORCEINLINE static uint32 __PPO__CurrentForwardDirectionInputValue() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, CurrentForwardDirectionInputValue); } \
	FORCEINLINE static uint32 __PPO__CurrentDirectionInputValue() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, CurrentDirectionInputValue); } \
	FORCEINLINE static uint32 __PPO__IsGround() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, IsGround); } \
	FORCEINLINE static uint32 __PPO__IsFalling() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, IsFalling); } \
	FORCEINLINE static uint32 __PPO__IsFight() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, IsFight); } \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__IsAttackButtonWhenAttack() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, IsAttackButtonWhenAttack); } \
	FORCEINLINE static uint32 __PPO__ComboCnt() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, ComboCnt); } \
	FORCEINLINE static uint32 __PPO__IsLockOn() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, IsLockOn); } \
	FORCEINLINE static uint32 __PPO__KnockDown_Time() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, KnockDown_Time); } \
	FORCEINLINE static uint32 __PPO__CurHP() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, CurHP); } \
	FORCEINLINE static uint32 __PPO__CurStamina() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, CurStamina); } \
	FORCEINLINE static uint32 __PPO__Cur_State() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, Cur_State); } \
	FORCEINLINE static uint32 __PPO__StaminaUse() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, StaminaUse); } \
	FORCEINLINE static uint32 __PPO__RollIdle_F0_Montage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollIdle_F0_Montage); } \
	FORCEINLINE static uint32 __PPO__RollIdle_FL45_Montage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollIdle_FL45_Montage); } \
	FORCEINLINE static uint32 __PPO__RollIdle_FL90_Montage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollIdle_FL90_Montage); } \
	FORCEINLINE static uint32 __PPO__RollIdle_FR45_Montage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollIdle_FR45_Montage); } \
	FORCEINLINE static uint32 __PPO__RollIdle_FR90_Montage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollIdle_FR90_Montage); } \
	FORCEINLINE static uint32 __PPO__RollIdle_B180_Montage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollIdle_B180_Montage); } \
	FORCEINLINE static uint32 __PPO__RollIdle_BL45_Montage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollIdle_BL45_Montage); } \
	FORCEINLINE static uint32 __PPO__RollIdle_BR45_Montage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollIdle_BR45_Montage); } \
	FORCEINLINE static uint32 __PPO__RollCombat_F0_Montage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollCombat_F0_Montage); } \
	FORCEINLINE static uint32 __PPO__RollCombat_FL45_Montage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollCombat_FL45_Montage); } \
	FORCEINLINE static uint32 __PPO__RollCombat_FL90_Montage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollCombat_FL90_Montage); } \
	FORCEINLINE static uint32 __PPO__RollCombat_FR45_Montage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollCombat_FR45_Montage); } \
	FORCEINLINE static uint32 __PPO__RollCombat_FR90_Montage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollCombat_FR90_Montage); } \
	FORCEINLINE static uint32 __PPO__RollCombat_B180_Montage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollCombat_B180_Montage); } \
	FORCEINLINE static uint32 __PPO__RollCombat_BL45_Montage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollCombat_BL45_Montage); } \
	FORCEINLINE static uint32 __PPO__RollCombat_BR45_Montage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollCombat_BR45_Montage); } \
	FORCEINLINE static uint32 __PPO__BackStep_Montage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, BackStep_Montage); } \
	FORCEINLINE static uint32 __PPO__LightAttackMontage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, LightAttackMontage); } \
	FORCEINLINE static uint32 __PPO__HeavyAttackMontage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, HeavyAttackMontage); } \
	FORCEINLINE static uint32 __PPO__GuardBreakMontage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, GuardBreakMontage); } \
	FORCEINLINE static uint32 __PPO__ParryMontage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, ParryMontage); } \
	FORCEINLINE static uint32 __PPO__Execution1() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, Execution1); } \
	FORCEINLINE static uint32 __PPO__Execution2() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, Execution2); } \
	FORCEINLINE static uint32 __PPO__Execution_Back() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, Execution_Back); } \
	FORCEINLINE static uint32 __PPO__Issen() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, Issen); } \
	FORCEINLINE static uint32 __PPO__ImpactStrong1() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, ImpactStrong1); } \
	FORCEINLINE static uint32 __PPO__ImpactStrong2() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, ImpactStrong2); } \
	FORCEINLINE static uint32 __PPO__ImpactStrong3() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, ImpactStrong3); } \
	FORCEINLINE static uint32 __PPO__ImpactBack1() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, ImpactBack1); } \
	FORCEINLINE static uint32 __PPO__ShieldBlockWeak() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, ShieldBlockWeak); } \
	FORCEINLINE static uint32 __PPO__ShieldBlockStrong() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, ShieldBlockStrong); }


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_9_PROLOG
#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_SPARSE_DATA \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_RPC_WRAPPERS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_INCLASS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_SPARSE_DATA \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<class UPlayerCharacterAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
