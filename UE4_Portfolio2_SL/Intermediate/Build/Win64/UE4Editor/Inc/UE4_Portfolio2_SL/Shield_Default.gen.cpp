// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/Shield_Default.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShield_Default() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AShield_Default_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AShield_Default();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AShield_Common();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void AShield_Default::StaticRegisterNativesAShield_Default()
	{
	}
	UClass* Z_Construct_UClass_AShield_Default_NoRegister()
	{
		return AShield_Default::StaticClass();
	}
	struct Z_Construct_UClass_AShield_Default_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShield_Default_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShield_Common,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShield_Default_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Shield_Default.h" },
		{ "ModuleRelativePath", "Shield_Default.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShield_Default_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShield_Default>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShield_Default_Statics::ClassParams = {
		&AShield_Default::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AShield_Default_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShield_Default_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShield_Default()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShield_Default_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShield_Default, 2852392170);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<AShield_Default>()
	{
		return AShield_Default::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShield_Default(Z_Construct_UClass_AShield_Default, &AShield_Default::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("AShield_Default"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShield_Default);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
