// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TMP_tmpGameMode_generated_h
#error "tmpGameMode.generated.h already included, missing '#pragma once' in tmpGameMode.h"
#endif
#define TMP_tmpGameMode_generated_h

#define tmp_Source_tmp_tmpGameMode_h_12_SPARSE_DATA
#define tmp_Source_tmp_tmpGameMode_h_12_RPC_WRAPPERS
#define tmp_Source_tmp_tmpGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define tmp_Source_tmp_tmpGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtmpGameMode(); \
	friend struct Z_Construct_UClass_AtmpGameMode_Statics; \
public: \
	DECLARE_CLASS(AtmpGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/tmp"), TMP_API) \
	DECLARE_SERIALIZER(AtmpGameMode)


#define tmp_Source_tmp_tmpGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAtmpGameMode(); \
	friend struct Z_Construct_UClass_AtmpGameMode_Statics; \
public: \
	DECLARE_CLASS(AtmpGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/tmp"), TMP_API) \
	DECLARE_SERIALIZER(AtmpGameMode)


#define tmp_Source_tmp_tmpGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TMP_API AtmpGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AtmpGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TMP_API, AtmpGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtmpGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TMP_API AtmpGameMode(AtmpGameMode&&); \
	TMP_API AtmpGameMode(const AtmpGameMode&); \
public:


#define tmp_Source_tmp_tmpGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TMP_API AtmpGameMode(AtmpGameMode&&); \
	TMP_API AtmpGameMode(const AtmpGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TMP_API, AtmpGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtmpGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AtmpGameMode)


#define tmp_Source_tmp_tmpGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define tmp_Source_tmp_tmpGameMode_h_9_PROLOG
#define tmp_Source_tmp_tmpGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	tmp_Source_tmp_tmpGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	tmp_Source_tmp_tmpGameMode_h_12_SPARSE_DATA \
	tmp_Source_tmp_tmpGameMode_h_12_RPC_WRAPPERS \
	tmp_Source_tmp_tmpGameMode_h_12_INCLASS \
	tmp_Source_tmp_tmpGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define tmp_Source_tmp_tmpGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	tmp_Source_tmp_tmpGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	tmp_Source_tmp_tmpGameMode_h_12_SPARSE_DATA \
	tmp_Source_tmp_tmpGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	tmp_Source_tmp_tmpGameMode_h_12_INCLASS_NO_PURE_DECLS \
	tmp_Source_tmp_tmpGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TMP_API UClass* StaticClass<class AtmpGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID tmp_Source_tmp_tmpGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
