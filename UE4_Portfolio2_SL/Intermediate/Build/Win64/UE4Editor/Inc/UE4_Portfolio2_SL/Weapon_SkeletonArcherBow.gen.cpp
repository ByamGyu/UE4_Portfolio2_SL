// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/Weapon_SkeletonArcherBow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_SkeletonArcherBow() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AWeapon_SkeletonArcherBow_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AWeapon_SkeletonArcherBow();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AWeapon_Common();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void AWeapon_SkeletonArcherBow::StaticRegisterNativesAWeapon_SkeletonArcherBow()
	{
	}
	UClass* Z_Construct_UClass_AWeapon_SkeletonArcherBow_NoRegister()
	{
		return AWeapon_SkeletonArcherBow::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_SkeletonArcherBow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_SkeletonArcherBow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon_Common,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_SkeletonArcherBow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon_SkeletonArcherBow.h" },
		{ "ModuleRelativePath", "Weapon_SkeletonArcherBow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_SkeletonArcherBow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_SkeletonArcherBow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_SkeletonArcherBow_Statics::ClassParams = {
		&AWeapon_SkeletonArcherBow::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_SkeletonArcherBow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_SkeletonArcherBow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_SkeletonArcherBow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_SkeletonArcherBow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_SkeletonArcherBow, 3516926113);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<AWeapon_SkeletonArcherBow>()
	{
		return AWeapon_SkeletonArcherBow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_SkeletonArcherBow(Z_Construct_UClass_AWeapon_SkeletonArcherBow, &AWeapon_SkeletonArcherBow::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("AWeapon_SkeletonArcherBow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_SkeletonArcherBow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
