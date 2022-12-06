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
	DECLARE_FUNCTION(execAnimNotify_AttackInputCheck); \
	DECLARE_FUNCTION(execAnimNotify_AttackEnd); \
	DECLARE_FUNCTION(execAnimNotify_GuardStart); \
	DECLARE_FUNCTION(execAnimNotify_NockDownRecover); \
	DECLARE_FUNCTION(execAnimNotify_ParryEnd); \
	DECLARE_FUNCTION(execAnimNotify_SpellEnd); \
	DECLARE_FUNCTION(execAnimNotify_RollEnd); \
	DECLARE_FUNCTION(execAnimNotify_JumpEnd); \
	DECLARE_FUNCTION(execAnimNotify_InitState);


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacterAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_AttackInputCheck); \
	DECLARE_FUNCTION(execAnimNotify_AttackEnd); \
	DECLARE_FUNCTION(execAnimNotify_GuardStart); \
	DECLARE_FUNCTION(execAnimNotify_NockDownRecover); \
	DECLARE_FUNCTION(execAnimNotify_ParryEnd); \
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
	FORCEINLINE static uint32 __PPO__CurrentDirection() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, CurrentDirection); } \
	FORCEINLINE static uint32 __PPO__IsGround() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, IsGround); } \
	FORCEINLINE static uint32 __PPO__IsFalling() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, IsFalling); } \
	FORCEINLINE static uint32 __PPO__IsFight() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, IsFight); } \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__IsAttackButtonWhenAttack() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, IsAttackButtonWhenAttack); } \
	FORCEINLINE static uint32 __PPO__ComboCnt() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, ComboCnt); } \
	FORCEINLINE static uint32 __PPO__KnockDown_Time() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, KnockDown_Time); } \
	FORCEINLINE static uint32 __PPO__CurHP() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, CurHP); } \
	FORCEINLINE static uint32 __PPO__CurStamina() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, CurStamina); } \
	FORCEINLINE static uint32 __PPO__Cur_State() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, Cur_State); } \
	FORCEINLINE static uint32 __PPO__RollIdleMontage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollIdleMontage); } \
	FORCEINLINE static uint32 __PPO__RollCombatMontage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollCombatMontage); } \
	FORCEINLINE static uint32 __PPO__LightAttackMontage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, LightAttackMontage); } \
	FORCEINLINE static uint32 __PPO__HeavyAttackMontage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, HeavyAttackMontage); } \
	FORCEINLINE static uint32 __PPO__GuardBreakMontage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, GuardBreakMontage); } \
	FORCEINLINE static uint32 __PPO__ParryMontage() { return STRUCT_OFFSET(UPlayerCharacterAnimInstance, ParryMontage); }


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
