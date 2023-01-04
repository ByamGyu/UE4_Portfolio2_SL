// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/Enemy_SkeletonWarrior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_SkeletonWarrior() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AEnemy_SkeletonWarrior_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AEnemy_SkeletonWarrior();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AEnemy_Base();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void AEnemy_SkeletonWarrior::StaticRegisterNativesAEnemy_SkeletonWarrior()
	{
	}
	UClass* Z_Construct_UClass_AEnemy_SkeletonWarrior_NoRegister()
	{
		return AEnemy_SkeletonWarrior::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_SkeletonWarrior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_SkeletonWarrior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_SkeletonWarrior_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy_SkeletonWarrior.h" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_SkeletonWarrior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_SkeletonWarrior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_SkeletonWarrior_Statics::ClassParams = {
		&AEnemy_SkeletonWarrior::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_SkeletonWarrior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_SkeletonWarrior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_SkeletonWarrior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemy_SkeletonWarrior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy_SkeletonWarrior, 670162179);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<AEnemy_SkeletonWarrior>()
	{
		return AEnemy_SkeletonWarrior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy_SkeletonWarrior(Z_Construct_UClass_AEnemy_SkeletonWarrior, &AEnemy_SkeletonWarrior::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("AEnemy_SkeletonWarrior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_SkeletonWarrior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
