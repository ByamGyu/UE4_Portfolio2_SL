// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/BTTask_TurntoTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_TurntoTarget() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTTask_TurntoTarget_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTTask_TurntoTarget();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void UBTTask_TurntoTarget::StaticRegisterNativesUBTTask_TurntoTarget()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_TurntoTarget_NoRegister()
	{
		return UBTTask_TurntoTarget::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_TurntoTarget_Statics
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
	UObject* (*const Z_Construct_UClass_UBTTask_TurntoTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_TurntoTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_TurntoTarget.h" },
		{ "ModuleRelativePath", "BTTask_TurntoTarget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_TurntoTarget_Statics::NewProp_TurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "BTTask_TurntoTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_TurntoTarget_Statics::NewProp_TurnRate = { "TurnRate", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_TurntoTarget, TurnRate), METADATA_PARAMS(Z_Construct_UClass_UBTTask_TurntoTarget_Statics::NewProp_TurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_TurntoTarget_Statics::NewProp_TurnRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_TurntoTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_TurntoTarget_Statics::NewProp_TurnRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_TurntoTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_TurntoTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_TurntoTarget_Statics::ClassParams = {
		&UBTTask_TurntoTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_TurntoTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_TurntoTarget_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_TurntoTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_TurntoTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_TurntoTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_TurntoTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_TurntoTarget, 3951724007);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UBTTask_TurntoTarget>()
	{
		return UBTTask_TurntoTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_TurntoTarget(Z_Construct_UClass_UBTTask_TurntoTarget, &UBTTask_TurntoTarget::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UBTTask_TurntoTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_TurntoTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
