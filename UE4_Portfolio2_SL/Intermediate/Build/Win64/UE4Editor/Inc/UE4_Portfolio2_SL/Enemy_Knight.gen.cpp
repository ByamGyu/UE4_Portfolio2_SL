// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/Enemy_Knight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Knight() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AEnemy_Knight_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AEnemy_Knight();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AEnemy_Base();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AWeapon_Common_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AShield_Common_NoRegister();
// End Cross Module References
	void AEnemy_Knight::StaticRegisterNativesAEnemy_Knight()
	{
	}
	UClass* Z_Construct_UClass_AEnemy_Knight_NoRegister()
	{
		return AEnemy_Knight::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Knight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightWeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RightWeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftWeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LeftWeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Knight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Knight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy_Knight.h" },
		{ "ModuleRelativePath", "Enemy_Knight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_RightWeaponClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Enemy_Knight.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_RightWeaponClass = { "RightWeaponClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Knight, RightWeaponClass), Z_Construct_UClass_AWeapon_Common_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_RightWeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_RightWeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_LeftWeaponClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Enemy_Knight.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_LeftWeaponClass = { "LeftWeaponClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Knight, LeftWeaponClass), Z_Construct_UClass_AShield_Common_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_LeftWeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_LeftWeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_RightWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "Comment", "// ???? ???? ????\n" },
		{ "ModuleRelativePath", "Enemy_Knight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_RightWeapon = { "RightWeapon", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Knight, RightWeapon), Z_Construct_UClass_AWeapon_Common_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_RightWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_RightWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_LeftWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Enemy_Knight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_LeftWeapon = { "LeftWeapon", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Knight, LeftWeapon), Z_Construct_UClass_AShield_Common_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_LeftWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_LeftWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Knight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_RightWeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_LeftWeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_RightWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Knight_Statics::NewProp_LeftWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Knight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Knight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Knight_Statics::ClassParams = {
		&AEnemy_Knight::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy_Knight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Knight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Knight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Knight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_Knight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemy_Knight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy_Knight, 2451956595);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<AEnemy_Knight>()
	{
		return AEnemy_Knight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy_Knight(Z_Construct_UClass_AEnemy_Knight, &AEnemy_Knight::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("AEnemy_Knight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Knight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
