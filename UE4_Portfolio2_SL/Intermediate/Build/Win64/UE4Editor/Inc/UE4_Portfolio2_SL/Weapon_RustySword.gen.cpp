// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/Weapon_RustySword.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_RustySword() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AWeapon_RustySword_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AWeapon_RustySword();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AWeapon_Common();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void AWeapon_RustySword::StaticRegisterNativesAWeapon_RustySword()
	{
	}
	UClass* Z_Construct_UClass_AWeapon_RustySword_NoRegister()
	{
		return AWeapon_RustySword::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_RustySword_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_RustySword_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon_Common,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_RustySword_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon_RustySword.h" },
		{ "ModuleRelativePath", "Weapon_RustySword.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_RustySword_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_RustySword>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_RustySword_Statics::ClassParams = {
		&AWeapon_RustySword::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_RustySword_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_RustySword_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_RustySword()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_RustySword_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_RustySword, 647529151);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<AWeapon_RustySword>()
	{
		return AWeapon_RustySword::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_RustySword(Z_Construct_UClass_AWeapon_RustySword, &AWeapon_RustySword::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("AWeapon_RustySword"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_RustySword);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
