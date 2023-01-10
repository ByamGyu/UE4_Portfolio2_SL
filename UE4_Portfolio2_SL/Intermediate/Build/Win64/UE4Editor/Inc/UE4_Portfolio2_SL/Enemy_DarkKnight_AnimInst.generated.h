// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4_PORTFOLIO2_SL_Enemy_DarkKnight_AnimInst_generated_h
#error "Enemy_DarkKnight_AnimInst.generated.h already included, missing '#pragma once' in Enemy_DarkKnight_AnimInst.h"
#endif
#define UE4_PORTFOLIO2_SL_Enemy_DarkKnight_AnimInst_generated_h

#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_SPARSE_DATA
#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_InvinsibleEnd); \
	DECLARE_FUNCTION(execAnimNotify_InvinsibleStart); \
	DECLARE_FUNCTION(execAnimNotify_PauseMontage); \
	DECLARE_FUNCTION(execAnimNotify_InitState);


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_InvinsibleEnd); \
	DECLARE_FUNCTION(execAnimNotify_InvinsibleStart); \
	DECLARE_FUNCTION(execAnimNotify_PauseMontage); \
	DECLARE_FUNCTION(execAnimNotify_InitState);


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemy_DarkKnight_AnimInst(); \
	friend struct Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics; \
public: \
	DECLARE_CLASS(UEnemy_DarkKnight_AnimInst, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UE4_Portfolio2_SL"), NO_API) \
	DECLARE_SERIALIZER(UEnemy_DarkKnight_AnimInst)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUEnemy_DarkKnight_AnimInst(); \
	friend struct Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics; \
public: \
	DECLARE_CLASS(UEnemy_DarkKnight_AnimInst, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UE4_Portfolio2_SL"), NO_API) \
	DECLARE_SERIALIZER(UEnemy_DarkKnight_AnimInst)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemy_DarkKnight_AnimInst(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemy_DarkKnight_AnimInst) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemy_DarkKnight_AnimInst); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemy_DarkKnight_AnimInst); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemy_DarkKnight_AnimInst(UEnemy_DarkKnight_AnimInst&&); \
	NO_API UEnemy_DarkKnight_AnimInst(const UEnemy_DarkKnight_AnimInst&); \
public:


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemy_DarkKnight_AnimInst(UEnemy_DarkKnight_AnimInst&&); \
	NO_API UEnemy_DarkKnight_AnimInst(const UEnemy_DarkKnight_AnimInst&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemy_DarkKnight_AnimInst); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemy_DarkKnight_AnimInst); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnemy_DarkKnight_AnimInst)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentSpeed() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, CurrentSpeed); } \
	FORCEINLINE static uint32 __PPO__CurrentDirection() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, CurrentDirection); } \
	FORCEINLINE static uint32 __PPO__CurHP() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, CurHP); } \
	FORCEINLINE static uint32 __PPO__IsFight() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, IsFight); } \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__KnockDown_Time() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, KnockDown_Time); } \
	FORCEINLINE static uint32 __PPO__Cur_State() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Cur_State); } \
	FORCEINLINE static uint32 __PPO__Cur_EquipmentState() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Cur_EquipmentState); } \
	FORCEINLINE static uint32 __PPO__Execute1() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Execute1); } \
	FORCEINLINE static uint32 __PPO__Execute2() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Execute2); } \
	FORCEINLINE static uint32 __PPO__Executed_FalldownFront() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Executed_FalldownFront); } \
	FORCEINLINE static uint32 __PPO__Executed_FalldownBack() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Executed_FalldownBack); } \
	FORCEINLINE static uint32 __PPO__GuardBreak_GS() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, GuardBreak_GS); } \
	FORCEINLINE static uint32 __PPO__GuardBreak_SS() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, GuardBreak_SS); } \
	FORCEINLINE static uint32 __PPO__Attack_GS_ChargedCombo() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_GS_ChargedCombo); } \
	FORCEINLINE static uint32 __PPO__Attack_GS_HandAndSwordSwing() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_GS_HandAndSwordSwing); } \
	FORCEINLINE static uint32 __PPO__Attack_GS_RunningAttackSimple() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_GS_RunningAttackSimple); } \
	FORCEINLINE static uint32 __PPO__Attack_GS_RunningAttackWithAOE() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_GS_RunningAttackWithAOE); } \
	FORCEINLINE static uint32 __PPO__Attack_GS_SwingAndSlam() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_GS_SwingAndSlam); } \
	FORCEINLINE static uint32 __PPO__Attack_GS_Uppercut() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_GS_Uppercut); } \
	FORCEINLINE static uint32 __PPO__Attack_SS_Combo1() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_SS_Combo1); } \
	FORCEINLINE static uint32 __PPO__Attack_SS_Combo2() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_SS_Combo2); } \
	FORCEINLINE static uint32 __PPO__Attack_SS_Combo3() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_SS_Combo3); } \
	FORCEINLINE static uint32 __PPO__Attack_SS_JumpAttack() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_SS_JumpAttack); } \
	FORCEINLINE static uint32 __PPO__Hit_GS_F() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Hit_GS_F); } \
	FORCEINLINE static uint32 __PPO__Hit_GS_B() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Hit_GS_B); } \
	FORCEINLINE static uint32 __PPO__Hit_SS_F() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Hit_SS_F); } \
	FORCEINLINE static uint32 __PPO__Hit_SS_B() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Hit_SS_B); } \
	FORCEINLINE static uint32 __PPO__Boss_Battle_Entrance() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Boss_Battle_Entrance); } \
	FORCEINLINE static uint32 __PPO__Idle_To_Combat() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Idle_To_Combat); } \
	FORCEINLINE static uint32 __PPO__Combat_To_Idle() { return STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Combat_To_Idle); }


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_10_PROLOG
#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_SPARSE_DATA \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_RPC_WRAPPERS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_INCLASS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_SPARSE_DATA \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_INCLASS_NO_PURE_DECLS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<class UEnemy_DarkKnight_AnimInst>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_DarkKnight_AnimInst_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
