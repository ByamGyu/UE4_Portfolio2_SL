// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDamageEvent;
class AController;
class AActor;
#ifdef UE4_PORTFOLIO2_SL_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define UE4_PORTFOLIO2_SL_PlayerCharacter_generated_h

#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_SPARSE_DATA
#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4_Portfolio2_SL"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4_Portfolio2_SL"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_CameraArm() { return STRUCT_OFFSET(APlayerCharacter, m_CameraArm); } \
	FORCEINLINE static uint32 __PPO__m_Camera() { return STRUCT_OFFSET(APlayerCharacter, m_Camera); } \
	FORCEINLINE static uint32 __PPO__Cur_State() { return STRUCT_OFFSET(APlayerCharacter, Cur_State); } \
	FORCEINLINE static uint32 __PPO__IsFight() { return STRUCT_OFFSET(APlayerCharacter, IsFight); } \
	FORCEINLINE static uint32 __PPO__IsFall() { return STRUCT_OFFSET(APlayerCharacter, IsFall); } \
	FORCEINLINE static uint32 __PPO__MaxHP() { return STRUCT_OFFSET(APlayerCharacter, MaxHP); } \
	FORCEINLINE static uint32 __PPO__CurHP() { return STRUCT_OFFSET(APlayerCharacter, CurHP); } \
	FORCEINLINE static uint32 __PPO__HPRatio() { return STRUCT_OFFSET(APlayerCharacter, HPRatio); } \
	FORCEINLINE static uint32 __PPO__MaxStamina() { return STRUCT_OFFSET(APlayerCharacter, MaxStamina); } \
	FORCEINLINE static uint32 __PPO__CurStamina() { return STRUCT_OFFSET(APlayerCharacter, CurStamina); } \
	FORCEINLINE static uint32 __PPO__StaminaRatio() { return STRUCT_OFFSET(APlayerCharacter, StaminaRatio); } \
	FORCEINLINE static uint32 __PPO__AttackDamage() { return STRUCT_OFFSET(APlayerCharacter, AttackDamage); } \
	FORCEINLINE static uint32 __PPO__DefaultDamage() { return STRUCT_OFFSET(APlayerCharacter, DefaultDamage); } \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(APlayerCharacter, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__IsAttackButtonWhenAttack() { return STRUCT_OFFSET(APlayerCharacter, IsAttackButtonWhenAttack); } \
	FORCEINLINE static uint32 __PPO__ComboCnt() { return STRUCT_OFFSET(APlayerCharacter, ComboCnt); } \
	FORCEINLINE static uint32 __PPO__IsParrying() { return STRUCT_OFFSET(APlayerCharacter, IsParrying); } \
	FORCEINLINE static uint32 __PPO__IssenAbleTime() { return STRUCT_OFFSET(APlayerCharacter, IssenAbleTime); } \
	FORCEINLINE static uint32 __PPO__StaminaUse() { return STRUCT_OFFSET(APlayerCharacter, StaminaUse); } \
	FORCEINLINE static uint32 __PPO__RightWeaponClass() { return STRUCT_OFFSET(APlayerCharacter, RightWeaponClass); } \
	FORCEINLINE static uint32 __PPO__LeftWeaponClass() { return STRUCT_OFFSET(APlayerCharacter, LeftWeaponClass); } \
	FORCEINLINE static uint32 __PPO__RightWeapon() { return STRUCT_OFFSET(APlayerCharacter, RightWeapon); } \
	FORCEINLINE static uint32 __PPO__LeftWeapon() { return STRUCT_OFFSET(APlayerCharacter, LeftWeapon); }


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_23_PROLOG
#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_PRIVATE_PROPERTY_OFFSET \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_SPARSE_DATA \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_RPC_WRAPPERS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_INCLASS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_PRIVATE_PROPERTY_OFFSET \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_SPARSE_DATA \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_INCLASS_NO_PURE_DECLS \
	UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_Portfolio2_SL_Source_UE4_Portfolio2_SL_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
