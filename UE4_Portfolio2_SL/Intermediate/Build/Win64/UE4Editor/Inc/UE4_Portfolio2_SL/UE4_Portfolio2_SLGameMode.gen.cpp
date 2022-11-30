// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/UE4_Portfolio2_SLGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4_Portfolio2_SLGameMode() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AUE4_Portfolio2_SLGameMode_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AUE4_Portfolio2_SLGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void AUE4_Portfolio2_SLGameMode::StaticRegisterNativesAUE4_Portfolio2_SLGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUE4_Portfolio2_SLGameMode_NoRegister()
	{
		return AUE4_Portfolio2_SLGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUE4_Portfolio2_SLGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE4_Portfolio2_SLGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4_Portfolio2_SLGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE4_Portfolio2_SLGameMode.h" },
		{ "ModuleRelativePath", "UE4_Portfolio2_SLGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE4_Portfolio2_SLGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4_Portfolio2_SLGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE4_Portfolio2_SLGameMode_Statics::ClassParams = {
		&AUE4_Portfolio2_SLGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE4_Portfolio2_SLGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4_Portfolio2_SLGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE4_Portfolio2_SLGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE4_Portfolio2_SLGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE4_Portfolio2_SLGameMode, 2084148144);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<AUE4_Portfolio2_SLGameMode>()
	{
		return AUE4_Portfolio2_SLGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4_Portfolio2_SLGameMode(Z_Construct_UClass_AUE4_Portfolio2_SLGameMode, &AUE4_Portfolio2_SLGameMode::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("AUE4_Portfolio2_SLGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4_Portfolio2_SLGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
