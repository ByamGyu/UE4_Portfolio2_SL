// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/BTDeco_HasTargetAndInDefensDist.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDeco_HasTargetAndInDefensDist() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTDeco_HasTargetAndInDefensDist_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTDeco_HasTargetAndInDefensDist();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void UBTDeco_HasTargetAndInDefensDist::StaticRegisterNativesUBTDeco_HasTargetAndInDefensDist()
	{
	}
	UClass* Z_Construct_UClass_UBTDeco_HasTargetAndInDefensDist_NoRegister()
	{
		return UBTDeco_HasTargetAndInDefensDist::StaticClass();
	}
	struct Z_Construct_UClass_UBTDeco_HasTargetAndInDefensDist_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDeco_HasTargetAndInDefensDist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDeco_HasTargetAndInDefensDist_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTDeco_HasTargetAndInDefensDist.h" },
		{ "ModuleRelativePath", "BTDeco_HasTargetAndInDefensDist.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDeco_HasTargetAndInDefensDist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDeco_HasTargetAndInDefensDist>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDeco_HasTargetAndInDefensDist_Statics::ClassParams = {
		&UBTDeco_HasTargetAndInDefensDist::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDeco_HasTargetAndInDefensDist_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDeco_HasTargetAndInDefensDist_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDeco_HasTargetAndInDefensDist()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDeco_HasTargetAndInDefensDist_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDeco_HasTargetAndInDefensDist, 1864730984);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UBTDeco_HasTargetAndInDefensDist>()
	{
		return UBTDeco_HasTargetAndInDefensDist::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDeco_HasTargetAndInDefensDist(Z_Construct_UClass_UBTDeco_HasTargetAndInDefensDist, &UBTDeco_HasTargetAndInDefensDist::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UBTDeco_HasTargetAndInDefensDist"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDeco_HasTargetAndInDefensDist);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
