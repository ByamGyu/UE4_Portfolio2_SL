// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/AI_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_Base() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AAI_Base_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AAI_Base();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
// End Cross Module References
	void AAI_Base::StaticRegisterNativesAAI_Base()
	{
	}
	UClass* Z_Construct_UClass_AAI_Base_NoRegister()
	{
		return AAI_Base::StaticClass();
	}
	struct Z_Construct_UClass_AAI_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Base_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI_Base.h" },
		{ "ModuleRelativePath", "AI_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Base_Statics::NewProp_BT_MetaData[] = {
		{ "ModuleRelativePath", "AI_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_Base_Statics::NewProp_BT = { "BT", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Base, BT), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_Base_Statics::NewProp_BT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Base_Statics::NewProp_BT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Base_Statics::NewProp_BB_MetaData[] = {
		{ "ModuleRelativePath", "AI_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_Base_Statics::NewProp_BB = { "BB", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Base, BB), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_Base_Statics::NewProp_BB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Base_Statics::NewProp_BB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Base_Statics::NewProp_BT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Base_Statics::NewProp_BB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_Base_Statics::ClassParams = {
		&AAI_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAI_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Base_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_Base, 2456360152);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<AAI_Base>()
	{
		return AAI_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_Base(Z_Construct_UClass_AAI_Base, &AAI_Base::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("AAI_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
