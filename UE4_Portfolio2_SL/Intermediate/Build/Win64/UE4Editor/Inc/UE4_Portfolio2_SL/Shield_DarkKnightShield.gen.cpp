// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/Shield_DarkKnightShield.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShield_DarkKnightShield() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AShield_DarkKnightShield_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AShield_DarkKnightShield();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AShield_Common();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void AShield_DarkKnightShield::StaticRegisterNativesAShield_DarkKnightShield()
	{
	}
	UClass* Z_Construct_UClass_AShield_DarkKnightShield_NoRegister()
	{
		return AShield_DarkKnightShield::StaticClass();
	}
	struct Z_Construct_UClass_AShield_DarkKnightShield_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShield_DarkKnightShield_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShield_Common,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShield_DarkKnightShield_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Shield_DarkKnightShield.h" },
		{ "ModuleRelativePath", "Shield_DarkKnightShield.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShield_DarkKnightShield_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShield_DarkKnightShield>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShield_DarkKnightShield_Statics::ClassParams = {
		&AShield_DarkKnightShield::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AShield_DarkKnightShield_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShield_DarkKnightShield_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShield_DarkKnightShield()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShield_DarkKnightShield_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShield_DarkKnightShield, 819431193);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<AShield_DarkKnightShield>()
	{
		return AShield_DarkKnightShield::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShield_DarkKnightShield(Z_Construct_UClass_AShield_DarkKnightShield, &AShield_DarkKnightShield::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("AShield_DarkKnightShield"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShield_DarkKnightShield);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
