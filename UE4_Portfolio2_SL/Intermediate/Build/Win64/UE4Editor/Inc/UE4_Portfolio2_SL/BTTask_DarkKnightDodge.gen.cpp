// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/BTTask_DarkKnightDodge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_DarkKnightDodge() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTTask_DarkKnightDodge_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTTask_DarkKnightDodge();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void UBTTask_DarkKnightDodge::StaticRegisterNativesUBTTask_DarkKnightDodge()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_DarkKnightDodge_NoRegister()
	{
		return UBTTask_DarkKnightDodge::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_DarkKnightDodge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToTaret_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToTaret;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_DarkKnightDodge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_DarkKnightDodge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_DarkKnightDodge.h" },
		{ "ModuleRelativePath", "BTTask_DarkKnightDodge.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_DarkKnightDodge_Statics::NewProp_DistanceToTaret_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "BTTask_DarkKnightDodge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_DarkKnightDodge_Statics::NewProp_DistanceToTaret = { "DistanceToTaret", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_DarkKnightDodge, DistanceToTaret), METADATA_PARAMS(Z_Construct_UClass_UBTTask_DarkKnightDodge_Statics::NewProp_DistanceToTaret_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DarkKnightDodge_Statics::NewProp_DistanceToTaret_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_DarkKnightDodge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_DarkKnightDodge_Statics::NewProp_DistanceToTaret,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_DarkKnightDodge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_DarkKnightDodge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_DarkKnightDodge_Statics::ClassParams = {
		&UBTTask_DarkKnightDodge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_DarkKnightDodge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DarkKnightDodge_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_DarkKnightDodge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DarkKnightDodge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_DarkKnightDodge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_DarkKnightDodge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_DarkKnightDodge, 2471850390);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UBTTask_DarkKnightDodge>()
	{
		return UBTTask_DarkKnightDodge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_DarkKnightDodge(Z_Construct_UClass_UBTTask_DarkKnightDodge, &UBTTask_DarkKnightDodge::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UBTTask_DarkKnightDodge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_DarkKnightDodge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
