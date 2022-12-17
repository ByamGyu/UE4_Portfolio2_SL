// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4_PORTFOLIO2_SL_Enemy_Base_generated_h
#error "Enemy_Base.generated.h already included, missing '#pragma once' in Enemy_Base.h"
#endif
#define UE4_PORTFOLIO2_SL_Enemy_Base_generated_h

#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_SPARSE_DATA
#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_RPC_WRAPPERS
#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy_Base(); \
	friend struct Z_Construct_UClass_AEnemy_Base_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Base, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4_Portfolio2_SL"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Base)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy_Base(); \
	friend struct Z_Construct_UClass_AEnemy_Base_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Base, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4_Portfolio2_SL"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Base)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy_Base(AEnemy_Base&&); \
	NO_API AEnemy_Base(const AEnemy_Base&); \
public:


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy_Base(AEnemy_Base&&); \
	NO_API AEnemy_Base(const AEnemy_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy_Base)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Cur_State() { return STRUCT_OFFSET(AEnemy_Base, Cur_State); } \
	FORCEINLINE static uint32 __PPO__MaxHP() { return STRUCT_OFFSET(AEnemy_Base, MaxHP); } \
	FORCEINLINE static uint32 __PPO__CurHP() { return STRUCT_OFFSET(AEnemy_Base, CurHP); } \
	FORCEINLINE static uint32 __PPO__HPRatio() { return STRUCT_OFFSET(AEnemy_Base, HPRatio); } \
	FORCEINLINE static uint32 __PPO__AttackDamage() { return STRUCT_OFFSET(AEnemy_Base, AttackDamage); } \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(AEnemy_Base, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__IsFight() { return STRUCT_OFFSET(AEnemy_Base, IsFight); }


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_10_PROLOG
#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_SPARSE_DATA \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_RPC_WRAPPERS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_INCLASS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_SPARSE_DATA \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_INCLASS_NO_PURE_DECLS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<class AEnemy_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_Enemy_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
