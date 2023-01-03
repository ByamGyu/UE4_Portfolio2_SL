// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4_PORTFOLIO2_SL_Enemy_SkeletonWarrior_AnimInst_generated_h
#error "Enemy_SkeletonWarrior_AnimInst.generated.h already included, missing '#pragma once' in Enemy_SkeletonWarrior_AnimInst.h"
#endif
#define UE4_PORTFOLIO2_SL_Enemy_SkeletonWarrior_AnimInst_generated_h

#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_SPARSE_DATA
#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_InvinsibleEnd); \
	DECLARE_FUNCTION(execAnimNotify_InvinsibleStart); \
	DECLARE_FUNCTION(execAnimNotify_PauseMontage); \
	DECLARE_FUNCTION(execAnimNotify_InitState);


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_InvinsibleEnd); \
	DECLARE_FUNCTION(execAnimNotify_InvinsibleStart); \
	DECLARE_FUNCTION(execAnimNotify_PauseMontage); \
	DECLARE_FUNCTION(execAnimNotify_InitState);


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemy_SkeletonWarrior_AnimInst(); \
	friend struct Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics; \
public: \
	DECLARE_CLASS(UEnemy_SkeletonWarrior_AnimInst, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UE4_Portfolio2_SL"), NO_API) \
	DECLARE_SERIALIZER(UEnemy_SkeletonWarrior_AnimInst)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUEnemy_SkeletonWarrior_AnimInst(); \
	friend struct Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics; \
public: \
	DECLARE_CLASS(UEnemy_SkeletonWarrior_AnimInst, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UE4_Portfolio2_SL"), NO_API) \
	DECLARE_SERIALIZER(UEnemy_SkeletonWarrior_AnimInst)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemy_SkeletonWarrior_AnimInst(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemy_SkeletonWarrior_AnimInst) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemy_SkeletonWarrior_AnimInst); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemy_SkeletonWarrior_AnimInst); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemy_SkeletonWarrior_AnimInst(UEnemy_SkeletonWarrior_AnimInst&&); \
	NO_API UEnemy_SkeletonWarrior_AnimInst(const UEnemy_SkeletonWarrior_AnimInst&); \
public:


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemy_SkeletonWarrior_AnimInst(UEnemy_SkeletonWarrior_AnimInst&&); \
	NO_API UEnemy_SkeletonWarrior_AnimInst(const UEnemy_SkeletonWarrior_AnimInst&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemy_SkeletonWarrior_AnimInst); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemy_SkeletonWarrior_AnimInst); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnemy_SkeletonWarrior_AnimInst)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentSpeed() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, CurrentSpeed); } \
	FORCEINLINE static uint32 __PPO__CurrentDirection() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, CurrentDirection); } \
	FORCEINLINE static uint32 __PPO__CurHP() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, CurHP); } \
	FORCEINLINE static uint32 __PPO__IsFight() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, IsFight); } \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__KnockDown_Time() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, KnockDown_Time); } \
	FORCEINLINE static uint32 __PPO__Cur_State() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Cur_State); } \
	FORCEINLINE static uint32 __PPO__Attack_Combo_01_Stand() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Combo_01_Stand); } \
	FORCEINLINE static uint32 __PPO__Attack_Combo_02_Move() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Combo_02_Move); } \
	FORCEINLINE static uint32 __PPO__Attack_Combo_03_Mix() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Combo_03_Mix); } \
	FORCEINLINE static uint32 __PPO__Attack_Slash_Stand() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Slash_Stand); } \
	FORCEINLINE static uint32 __PPO__Attack_Strike_Stand() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Strike_Stand); } \
	FORCEINLINE static uint32 __PPO__Attack_Thrust_Stand() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Thrust_Stand); } \
	FORCEINLINE static uint32 __PPO__Attack_Slash_Move() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Slash_Move); } \
	FORCEINLINE static uint32 __PPO__Attack_Strike_Move() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Strike_Move); } \
	FORCEINLINE static uint32 __PPO__Attack_Thrust_Move() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Thrust_Move); } \
	FORCEINLINE static uint32 __PPO__GuardBreak() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, GuardBreak); } \
	FORCEINLINE static uint32 __PPO__Executed1() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Executed1); } \
	FORCEINLINE static uint32 __PPO__Executed2() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Executed2); } \
	FORCEINLINE static uint32 __PPO__Executed_Back() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Executed_Back); } \
	FORCEINLINE static uint32 __PPO__Dead1() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Dead1); } \
	FORCEINLINE static uint32 __PPO__Dead2() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Dead2); } \
	FORCEINLINE static uint32 __PPO__Hit01() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Hit01); } \
	FORCEINLINE static uint32 __PPO__Hit02() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Hit02); } \
	FORCEINLINE static uint32 __PPO__HitBack() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, HitBack); } \
	FORCEINLINE static uint32 __PPO__SleepStand() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, SleepStand); } \
	FORCEINLINE static uint32 __PPO__SleepSitdown() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, SleepSitdown); } \
	FORCEINLINE static uint32 __PPO__Standup() { return STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Standup); }


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_9_PROLOG
#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_SPARSE_DATA \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_RPC_WRAPPERS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_INCLASS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_SPARSE_DATA \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_INCLASS_NO_PURE_DECLS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<class UEnemy_SkeletonWarrior_AnimInst>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonWarrior_AnimInst_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
