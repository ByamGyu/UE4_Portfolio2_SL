// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "tmp/tmpGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetmpGameMode() {}
// Cross Module References
	TMP_API UClass* Z_Construct_UClass_AtmpGameMode_NoRegister();
	TMP_API UClass* Z_Construct_UClass_AtmpGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_tmp();
// End Cross Module References
	void AtmpGameMode::StaticRegisterNativesAtmpGameMode()
	{
	}
	UClass* Z_Construct_UClass_AtmpGameMode_NoRegister()
	{
		return AtmpGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AtmpGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AtmpGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_tmp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtmpGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "tmpGameMode.h" },
		{ "ModuleRelativePath", "tmpGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AtmpGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AtmpGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AtmpGameMode_Statics::ClassParams = {
		&AtmpGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AtmpGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AtmpGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AtmpGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AtmpGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AtmpGameMode, 4154510673);
	template<> TMP_API UClass* StaticClass<AtmpGameMode>()
	{
		return AtmpGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AtmpGameMode(Z_Construct_UClass_AtmpGameMode, &AtmpGameMode::StaticClass, TEXT("/Script/tmp"), TEXT("AtmpGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AtmpGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
