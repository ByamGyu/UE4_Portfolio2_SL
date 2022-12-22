// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/Projectile_SkeletonArcherArrow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectile_SkeletonArcherArrow() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AProjectile_SkeletonArcherArrow_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AProjectile_SkeletonArcherArrow();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AProjectile_Base();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void AProjectile_SkeletonArcherArrow::StaticRegisterNativesAProjectile_SkeletonArcherArrow()
	{
	}
	UClass* Z_Construct_UClass_AProjectile_SkeletonArcherArrow_NoRegister()
	{
		return AProjectile_SkeletonArcherArrow::StaticClass();
	}
	struct Z_Construct_UClass_AProjectile_SkeletonArcherArrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectile_SkeletonArcherArrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectile_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_SkeletonArcherArrow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Projectile_SkeletonArcherArrow.h" },
		{ "ModuleRelativePath", "Projectile_SkeletonArcherArrow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectile_SkeletonArcherArrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectile_SkeletonArcherArrow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectile_SkeletonArcherArrow_Statics::ClassParams = {
		&AProjectile_SkeletonArcherArrow::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectile_SkeletonArcherArrow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_SkeletonArcherArrow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectile_SkeletonArcherArrow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectile_SkeletonArcherArrow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectile_SkeletonArcherArrow, 683031624);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<AProjectile_SkeletonArcherArrow>()
	{
		return AProjectile_SkeletonArcherArrow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectile_SkeletonArcherArrow(Z_Construct_UClass_AProjectile_SkeletonArcherArrow, &AProjectile_SkeletonArcherArrow::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("AProjectile_SkeletonArcherArrow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile_SkeletonArcherArrow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
