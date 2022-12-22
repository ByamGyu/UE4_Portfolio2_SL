// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/Enemy_SkeletonArcher_AnimInst.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_SkeletonArcher_AnimInst() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void UEnemy_SkeletonArcher_AnimInst::StaticRegisterNativesUEnemy_SkeletonArcher_AnimInst()
	{
	}
	UClass* Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_NoRegister()
	{
		return UEnemy_SkeletonArcher_AnimInst::StaticClass();
	}
	struct Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Enemy_SkeletonArcher_AnimInst.h" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemy_SkeletonArcher_AnimInst>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::ClassParams = {
		&UEnemy_SkeletonArcher_AnimInst::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemy_SkeletonArcher_AnimInst, 937738704);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UEnemy_SkeletonArcher_AnimInst>()
	{
		return UEnemy_SkeletonArcher_AnimInst::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemy_SkeletonArcher_AnimInst(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst, &UEnemy_SkeletonArcher_AnimInst::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UEnemy_SkeletonArcher_AnimInst"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemy_SkeletonArcher_AnimInst);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
