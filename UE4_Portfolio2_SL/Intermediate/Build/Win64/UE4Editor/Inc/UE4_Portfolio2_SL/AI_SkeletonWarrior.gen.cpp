// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/AI_SkeletonWarrior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_SkeletonWarrior() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AAI_SkeletonWarrior_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AAI_SkeletonWarrior();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AAI_Base();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void AAI_SkeletonWarrior::StaticRegisterNativesAAI_SkeletonWarrior()
	{
	}
	UClass* Z_Construct_UClass_AAI_SkeletonWarrior_NoRegister()
	{
		return AAI_SkeletonWarrior::StaticClass();
	}
	struct Z_Construct_UClass_AAI_SkeletonWarrior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_SkeletonWarrior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAI_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_SkeletonWarrior_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI_SkeletonWarrior.h" },
		{ "ModuleRelativePath", "AI_SkeletonWarrior.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_SkeletonWarrior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_SkeletonWarrior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_SkeletonWarrior_Statics::ClassParams = {
		&AAI_SkeletonWarrior::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAI_SkeletonWarrior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_SkeletonWarrior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_SkeletonWarrior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_SkeletonWarrior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_SkeletonWarrior, 1263289098);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<AAI_SkeletonWarrior>()
	{
		return AAI_SkeletonWarrior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_SkeletonWarrior(Z_Construct_UClass_AAI_SkeletonWarrior, &AAI_SkeletonWarrior::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("AAI_SkeletonWarrior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_SkeletonWarrior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
