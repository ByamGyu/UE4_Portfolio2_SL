// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/AI_SkeletonWarrior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_SkeletonWarrior() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AAI_SkeletonWarrior_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AAI_SkeletonWarrior();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
// End Cross Module References
	void AAI_SkeletonWarrior::StaticRegisterNativesAAI_SkeletonWarrior()
	{
	}
	UClass* Z_Construct_UClass_AAI_SkeletonWarrior_NoRegister()
	{
		return AAI_SkeletonWarrior::StaticClass();
	}
	struct Z_Construct_UClass_AAI_SkeletonWarrior_Statics
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
	UObject* (*const Z_Construct_UClass_AAI_SkeletonWarrior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_SkeletonWarrior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI_SkeletonWarrior.h" },
		{ "ModuleRelativePath", "AI_SkeletonWarrior.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_SkeletonWarrior_Statics::NewProp_BT_MetaData[] = {
		{ "ModuleRelativePath", "AI_SkeletonWarrior.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_SkeletonWarrior_Statics::NewProp_BT = { "BT", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_SkeletonWarrior, BT), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_SkeletonWarrior_Statics::NewProp_BT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_SkeletonWarrior_Statics::NewProp_BT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_SkeletonWarrior_Statics::NewProp_BB_MetaData[] = {
		{ "ModuleRelativePath", "AI_SkeletonWarrior.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_SkeletonWarrior_Statics::NewProp_BB = { "BB", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_SkeletonWarrior, BB), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_SkeletonWarrior_Statics::NewProp_BB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_SkeletonWarrior_Statics::NewProp_BB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_SkeletonWarrior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_SkeletonWarrior_Statics::NewProp_BT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_SkeletonWarrior_Statics::NewProp_BB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_SkeletonWarrior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_SkeletonWarrior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_SkeletonWarrior_Statics::ClassParams = {
		&AAI_SkeletonWarrior::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAI_SkeletonWarrior_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAI_SkeletonWarrior_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_SkeletonWarrior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_SkeletonWarrior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_SkeletonWarrior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_SkeletonWarrior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_SkeletonWarrior, 2265292423);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<AAI_SkeletonWarrior>()
	{
		return AAI_SkeletonWarrior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_SkeletonWarrior(Z_Construct_UClass_AAI_SkeletonWarrior, &AAI_SkeletonWarrior::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("AAI_SkeletonWarrior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_SkeletonWarrior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
