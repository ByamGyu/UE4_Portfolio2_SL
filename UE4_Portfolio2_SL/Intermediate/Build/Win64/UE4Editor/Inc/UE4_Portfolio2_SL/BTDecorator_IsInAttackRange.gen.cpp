// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/BTDecorator_IsInAttackRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsInAttackRange() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTDecorator_IsInAttackRange_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTDecorator_IsInAttackRange();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void UBTDecorator_IsInAttackRange::StaticRegisterNativesUBTDecorator_IsInAttackRange()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_IsInAttackRange_NoRegister()
	{
		return UBTDecorator_IsInAttackRange::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_IsInAttackRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_IsInAttackRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsInAttackRange_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTDecorator_IsInAttackRange.h" },
		{ "ModuleRelativePath", "BTDecorator_IsInAttackRange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_IsInAttackRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_IsInAttackRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_IsInAttackRange_Statics::ClassParams = {
		&UBTDecorator_IsInAttackRange::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsInAttackRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInAttackRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_IsInAttackRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_IsInAttackRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_IsInAttackRange, 537985950);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UBTDecorator_IsInAttackRange>()
	{
		return UBTDecorator_IsInAttackRange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_IsInAttackRange(Z_Construct_UClass_UBTDecorator_IsInAttackRange, &UBTDecorator_IsInAttackRange::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UBTDecorator_IsInAttackRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsInAttackRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
