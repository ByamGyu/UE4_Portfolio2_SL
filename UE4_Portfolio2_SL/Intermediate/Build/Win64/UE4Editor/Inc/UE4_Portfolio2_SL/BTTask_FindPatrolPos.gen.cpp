// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/BTTask_FindPatrolPos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindPatrolPos() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTTask_FindPatrolPos_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTTask_FindPatrolPos();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void UBTTask_FindPatrolPos::StaticRegisterNativesUBTTask_FindPatrolPos()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_FindPatrolPos_NoRegister()
	{
		return UBTTask_FindPatrolPos::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_FindPatrolPos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_FindPatrolPos.h" },
		{ "ModuleRelativePath", "BTTask_FindPatrolPos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindPatrolPos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::ClassParams = {
		&UBTTask_FindPatrolPos::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_FindPatrolPos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_FindPatrolPos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_FindPatrolPos, 3454744344);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UBTTask_FindPatrolPos>()
	{
		return UBTTask_FindPatrolPos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_FindPatrolPos(Z_Construct_UClass_UBTTask_FindPatrolPos, &UBTTask_FindPatrolPos::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UBTTask_FindPatrolPos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindPatrolPos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
