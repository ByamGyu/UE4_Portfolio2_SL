// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TMP_tmpCharacter_generated_h
#error "tmpCharacter.generated.h already included, missing '#pragma once' in tmpCharacter.h"
#endif
#define TMP_tmpCharacter_generated_h

#define tmp_Source_tmp_tmpCharacter_h_12_SPARSE_DATA
#define tmp_Source_tmp_tmpCharacter_h_12_RPC_WRAPPERS
#define tmp_Source_tmp_tmpCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define tmp_Source_tmp_tmpCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtmpCharacter(); \
	friend struct Z_Construct_UClass_AtmpCharacter_Statics; \
public: \
	DECLARE_CLASS(AtmpCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/tmp"), NO_API) \
	DECLARE_SERIALIZER(AtmpCharacter)


#define tmp_Source_tmp_tmpCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAtmpCharacter(); \
	friend struct Z_Construct_UClass_AtmpCharacter_Statics; \
public: \
	DECLARE_CLASS(AtmpCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/tmp"), NO_API) \
	DECLARE_SERIALIZER(AtmpCharacter)


#define tmp_Source_tmp_tmpCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AtmpCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AtmpCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtmpCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtmpCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtmpCharacter(AtmpCharacter&&); \
	NO_API AtmpCharacter(const AtmpCharacter&); \
public:


#define tmp_Source_tmp_tmpCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtmpCharacter(AtmpCharacter&&); \
	NO_API AtmpCharacter(const AtmpCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtmpCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtmpCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AtmpCharacter)


#define tmp_Source_tmp_tmpCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AtmpCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AtmpCharacter, FollowCamera); }


#define tmp_Source_tmp_tmpCharacter_h_9_PROLOG
#define tmp_Source_tmp_tmpCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	tmp_Source_tmp_tmpCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	tmp_Source_tmp_tmpCharacter_h_12_SPARSE_DATA \
	tmp_Source_tmp_tmpCharacter_h_12_RPC_WRAPPERS \
	tmp_Source_tmp_tmpCharacter_h_12_INCLASS \
	tmp_Source_tmp_tmpCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define tmp_Source_tmp_tmpCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	tmp_Source_tmp_tmpCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	tmp_Source_tmp_tmpCharacter_h_12_SPARSE_DATA \
	tmp_Source_tmp_tmpCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	tmp_Source_tmp_tmpCharacter_h_12_INCLASS_NO_PURE_DECLS \
	tmp_Source_tmp_tmpCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TMP_API UClass* StaticClass<class AtmpCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID tmp_Source_tmp_tmpCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
