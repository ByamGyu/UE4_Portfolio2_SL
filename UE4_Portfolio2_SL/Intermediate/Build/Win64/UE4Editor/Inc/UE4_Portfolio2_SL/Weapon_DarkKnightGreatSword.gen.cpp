// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/Weapon_DarkKnightGreatSword.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_DarkKnightGreatSword() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AWeapon_DarkKnightGreatSword_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AWeapon_DarkKnightGreatSword();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AWeapon_Common();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void AWeapon_DarkKnightGreatSword::StaticRegisterNativesAWeapon_DarkKnightGreatSword()
	{
	}
	UClass* Z_Construct_UClass_AWeapon_DarkKnightGreatSword_NoRegister()
	{
		return AWeapon_DarkKnightGreatSword::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_DarkKnightGreatSword_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_DarkKnightGreatSword_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon_Common,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_DarkKnightGreatSword_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon_DarkKnightGreatSword.h" },
		{ "ModuleRelativePath", "Weapon_DarkKnightGreatSword.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_DarkKnightGreatSword_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_DarkKnightGreatSword>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_DarkKnightGreatSword_Statics::ClassParams = {
		&AWeapon_DarkKnightGreatSword::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_DarkKnightGreatSword_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_DarkKnightGreatSword_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_DarkKnightGreatSword()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_DarkKnightGreatSword_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_DarkKnightGreatSword, 3140180577);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<AWeapon_DarkKnightGreatSword>()
	{
		return AWeapon_DarkKnightGreatSword::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_DarkKnightGreatSword(Z_Construct_UClass_AWeapon_DarkKnightGreatSword, &AWeapon_DarkKnightGreatSword::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("AWeapon_DarkKnightGreatSword"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_DarkKnightGreatSword);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
