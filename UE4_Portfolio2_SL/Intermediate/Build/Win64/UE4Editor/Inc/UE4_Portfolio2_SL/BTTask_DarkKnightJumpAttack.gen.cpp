// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/BTTask_DarkKnightJumpAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_DarkKnightJumpAttack() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTTask_DarkKnightJumpAttack_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTTask_DarkKnightJumpAttack();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void UBTTask_DarkKnightJumpAttack::StaticRegisterNativesUBTTask_DarkKnightJumpAttack()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_DarkKnightJumpAttack_NoRegister()
	{
		return UBTTask_DarkKnightJumpAttack::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_DarkKnightJumpAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_DarkKnightJumpAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_DarkKnightJumpAttack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_DarkKnightJumpAttack.h" },
		{ "ModuleRelativePath", "BTTask_DarkKnightJumpAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_DarkKnightJumpAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_DarkKnightJumpAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_DarkKnightJumpAttack_Statics::ClassParams = {
		&UBTTask_DarkKnightJumpAttack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_DarkKnightJumpAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DarkKnightJumpAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_DarkKnightJumpAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_DarkKnightJumpAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_DarkKnightJumpAttack, 324110338);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UBTTask_DarkKnightJumpAttack>()
	{
		return UBTTask_DarkKnightJumpAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_DarkKnightJumpAttack(Z_Construct_UClass_UBTTask_DarkKnightJumpAttack, &UBTTask_DarkKnightJumpAttack::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UBTTask_DarkKnightJumpAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_DarkKnightJumpAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
