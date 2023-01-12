// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/BTTask_BossTurntoTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_BossTurntoTarget() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTTask_BossTurntoTarget_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTTask_BossTurntoTarget();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void UBTTask_BossTurntoTarget::StaticRegisterNativesUBTTask_BossTurntoTarget()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_BossTurntoTarget_NoRegister()
	{
		return UBTTask_BossTurntoTarget::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_BossTurntoTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_BossTurntoTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_BossTurntoTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_BossTurntoTarget.h" },
		{ "ModuleRelativePath", "BTTask_BossTurntoTarget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_BossTurntoTarget_Statics::NewProp_TurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "BTTask_BossTurntoTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_BossTurntoTarget_Statics::NewProp_TurnRate = { "TurnRate", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_BossTurntoTarget, TurnRate), METADATA_PARAMS(Z_Construct_UClass_UBTTask_BossTurntoTarget_Statics::NewProp_TurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BossTurntoTarget_Statics::NewProp_TurnRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_BossTurntoTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_BossTurntoTarget_Statics::NewProp_TurnRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_BossTurntoTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_BossTurntoTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_BossTurntoTarget_Statics::ClassParams = {
		&UBTTask_BossTurntoTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_BossTurntoTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BossTurntoTarget_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_BossTurntoTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BossTurntoTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_BossTurntoTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_BossTurntoTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_BossTurntoTarget, 2532369804);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UBTTask_BossTurntoTarget>()
	{
		return UBTTask_BossTurntoTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_BossTurntoTarget(Z_Construct_UClass_UBTTask_BossTurntoTarget, &UBTTask_BossTurntoTarget::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UBTTask_BossTurntoTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_BossTurntoTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
