// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4_PORTFOLIO2_SL_Enemy_SkeletonArcher_AnimInst_generated_h
#error "Enemy_SkeletonArcher_AnimInst.generated.h already included, missing '#pragma once' in Enemy_SkeletonArcher_AnimInst.h"
#endif
#define UE4_PORTFOLIO2_SL_Enemy_SkeletonArcher_AnimInst_generated_h

#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_SPARSE_DATA
#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_Fire); \
	DECLARE_FUNCTION(execAnimNotify_PauseDeadMontage); \
	DECLARE_FUNCTION(execAnimNotify_InitState);


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_Fire); \
	DECLARE_FUNCTION(execAnimNotify_PauseDeadMontage); \
	DECLARE_FUNCTION(execAnimNotify_InitState);


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemy_SkeletonArcher_AnimInst(); \
	friend struct Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics; \
public: \
	DECLARE_CLASS(UEnemy_SkeletonArcher_AnimInst, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UE4_Portfolio2_SL"), NO_API) \
	DECLARE_SERIALIZER(UEnemy_SkeletonArcher_AnimInst)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUEnemy_SkeletonArcher_AnimInst(); \
	friend struct Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics; \
public: \
	DECLARE_CLASS(UEnemy_SkeletonArcher_AnimInst, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UE4_Portfolio2_SL"), NO_API) \
	DECLARE_SERIALIZER(UEnemy_SkeletonArcher_AnimInst)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemy_SkeletonArcher_AnimInst(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemy_SkeletonArcher_AnimInst) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemy_SkeletonArcher_AnimInst); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemy_SkeletonArcher_AnimInst); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemy_SkeletonArcher_AnimInst(UEnemy_SkeletonArcher_AnimInst&&); \
	NO_API UEnemy_SkeletonArcher_AnimInst(const UEnemy_SkeletonArcher_AnimInst&); \
public:


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemy_SkeletonArcher_AnimInst(UEnemy_SkeletonArcher_AnimInst&&); \
	NO_API UEnemy_SkeletonArcher_AnimInst(const UEnemy_SkeletonArcher_AnimInst&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemy_SkeletonArcher_AnimInst); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemy_SkeletonArcher_AnimInst); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnemy_SkeletonArcher_AnimInst)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentSpeed() { return STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, CurrentSpeed); } \
	FORCEINLINE static uint32 __PPO__CurrentDirection() { return STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, CurrentDirection); } \
	FORCEINLINE static uint32 __PPO__IsFight() { return STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, IsFight); } \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__KnockDown_Time() { return STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, KnockDown_Time); } \
	FORCEINLINE static uint32 __PPO__Cur_State() { return STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, Cur_State); } \
	FORCEINLINE static uint32 __PPO__Attack_Melee() { return STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, Attack_Melee); } \
	FORCEINLINE static uint32 __PPO__Attack_Range_Slow() { return STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, Attack_Range_Slow); } \
	FORCEINLINE static uint32 __PPO__Attack_Range_Fast() { return STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, Attack_Range_Fast); } \
	FORCEINLINE static uint32 __PPO__HitBack() { return STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, HitBack); } \
	FORCEINLINE static uint32 __PPO__Hit1() { return STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, Hit1); } \
	FORCEINLINE static uint32 __PPO__Hit2() { return STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, Hit2); } \
	FORCEINLINE static uint32 __PPO__Hit3() { return STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, Hit3); }


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_10_PROLOG
#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_SPARSE_DATA \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_RPC_WRAPPERS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_INCLASS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_SPARSE_DATA \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_INCLASS_NO_PURE_DECLS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<class UEnemy_SkeletonArcher_AnimInst>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_SkeletonArcher_AnimInst_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
