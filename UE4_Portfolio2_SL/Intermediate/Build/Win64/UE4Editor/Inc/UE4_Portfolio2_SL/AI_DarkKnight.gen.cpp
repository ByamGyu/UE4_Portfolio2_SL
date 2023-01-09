// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/AI_DarkKnight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_DarkKnight() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AAI_DarkKnight_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AAI_DarkKnight();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AAI_Base();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void AAI_DarkKnight::StaticRegisterNativesAAI_DarkKnight()
	{
	}
	UClass* Z_Construct_UClass_AAI_DarkKnight_NoRegister()
	{
		return AAI_DarkKnight::StaticClass();
	}
	struct Z_Construct_UClass_AAI_DarkKnight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_DarkKnight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAI_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_DarkKnight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI_DarkKnight.h" },
		{ "ModuleRelativePath", "AI_DarkKnight.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_DarkKnight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_DarkKnight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_DarkKnight_Statics::ClassParams = {
		&AAI_DarkKnight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_DarkKnight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_DarkKnight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_DarkKnight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_DarkKnight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_DarkKnight, 4202593705);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<AAI_DarkKnight>()
	{
		return AAI_DarkKnight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_DarkKnight(Z_Construct_UClass_AAI_DarkKnight, &AAI_DarkKnight::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("AAI_DarkKnight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_DarkKnight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
