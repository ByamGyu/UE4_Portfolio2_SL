// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/MyAttackNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAttackNotifyState() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UMyAttackNotifyState_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UMyAttackNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	void UMyAttackNotifyState::StaticRegisterNativesUMyAttackNotifyState()
	{
	}
	UClass* Z_Construct_UClass_UMyAttackNotifyState_NoRegister()
	{
		return UMyAttackNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UMyAttackNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_arrHitResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrHitResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arrHitResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyAttackNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAttackNotifyState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MyAttackNotifyState.h" },
		{ "ModuleRelativePath", "MyAttackNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_arrHitResults_Inner = { "arrHitResults", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_arrHitResults_MetaData[] = {
		{ "ModuleRelativePath", "MyAttackNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_arrHitResults = { "arrHitResults", nullptr, (EPropertyFlags)0x0040008000000010, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyAttackNotifyState, arrHitResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_arrHitResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_arrHitResults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyAttackNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_arrHitResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAttackNotifyState_Statics::NewProp_arrHitResults,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyAttackNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAttackNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyAttackNotifyState_Statics::ClassParams = {
		&UMyAttackNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyAttackNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyAttackNotifyState_Statics::PropPointers),
		0,
		0x009130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyAttackNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyAttackNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyAttackNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyAttackNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyAttackNotifyState, 2252084570);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UMyAttackNotifyState>()
	{
		return UMyAttackNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyAttackNotifyState(Z_Construct_UClass_UMyAttackNotifyState, &UMyAttackNotifyState::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UMyAttackNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAttackNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
