// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/Weapon_DarkKnightSword.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_DarkKnightSword() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AWeapon_DarkKnightSword_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AWeapon_DarkKnightSword();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AWeapon_Common();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void AWeapon_DarkKnightSword::StaticRegisterNativesAWeapon_DarkKnightSword()
	{
	}
	UClass* Z_Construct_UClass_AWeapon_DarkKnightSword_NoRegister()
	{
		return AWeapon_DarkKnightSword::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_DarkKnightSword_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_DarkKnightSword_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon_Common,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_DarkKnightSword_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon_DarkKnightSword.h" },
		{ "ModuleRelativePath", "Weapon_DarkKnightSword.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_DarkKnightSword_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_DarkKnightSword>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_DarkKnightSword_Statics::ClassParams = {
		&AWeapon_DarkKnightSword::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_DarkKnightSword_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_DarkKnightSword_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_DarkKnightSword()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_DarkKnightSword_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_DarkKnightSword, 3131821106);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<AWeapon_DarkKnightSword>()
	{
		return AWeapon_DarkKnightSword::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_DarkKnightSword(Z_Construct_UClass_AWeapon_DarkKnightSword, &AWeapon_DarkKnightSword::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("AWeapon_DarkKnightSword"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_DarkKnightSword);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
