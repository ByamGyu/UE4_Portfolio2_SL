// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/Enemy_SkeletonArcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_SkeletonArcher() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AEnemy_SkeletonArcher_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AEnemy_SkeletonArcher();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AEnemy_Base();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AProjectile_SkeletonArcherArrow_NoRegister();
// End Cross Module References
	void AEnemy_SkeletonArcher::StaticRegisterNativesAEnemy_SkeletonArcher()
	{
	}
	UClass* Z_Construct_UClass_AEnemy_SkeletonArcher_NoRegister()
	{
		return AEnemy_SkeletonArcher::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_SkeletonArcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectile_ArrowClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Projectile_ArrowClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_SkeletonArcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_SkeletonArcher_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy_SkeletonArcher.h" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_SkeletonArcher_Statics::NewProp_Projectile_ArrowClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemy_SkeletonArcher_Statics::NewProp_Projectile_ArrowClass = { "Projectile_ArrowClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_SkeletonArcher, Projectile_ArrowClass), Z_Construct_UClass_AProjectile_SkeletonArcherArrow_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemy_SkeletonArcher_Statics::NewProp_Projectile_ArrowClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_SkeletonArcher_Statics::NewProp_Projectile_ArrowClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_SkeletonArcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_SkeletonArcher_Statics::NewProp_Projectile_ArrowClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_SkeletonArcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_SkeletonArcher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_SkeletonArcher_Statics::ClassParams = {
		&AEnemy_SkeletonArcher::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy_SkeletonArcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_SkeletonArcher_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_SkeletonArcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_SkeletonArcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_SkeletonArcher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemy_SkeletonArcher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy_SkeletonArcher, 3908942952);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<AEnemy_SkeletonArcher>()
	{
		return AEnemy_SkeletonArcher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy_SkeletonArcher(Z_Construct_UClass_AEnemy_SkeletonArcher, &AEnemy_SkeletonArcher::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("AEnemy_SkeletonArcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_SkeletonArcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
