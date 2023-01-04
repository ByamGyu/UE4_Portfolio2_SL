// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/UserWidget_HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserWidget_HUD() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UUserWidget_HUD_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UUserWidget_HUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void UUserWidget_HUD::StaticRegisterNativesUUserWidget_HUD()
	{
	}
	UClass* Z_Construct_UClass_UUserWidget_HUD_NoRegister()
	{
		return UUserWidget_HUD::StaticClass();
	}
	struct Z_Construct_UClass_UUserWidget_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserWidget_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_HUD_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UserWidget_HUD.h" },
		{ "ModuleRelativePath", "UserWidget_HUD.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserWidget_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserWidget_HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserWidget_HUD_Statics::ClassParams = {
		&UUserWidget_HUD::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUserWidget_HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserWidget_HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserWidget_HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserWidget_HUD, 1639642220);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UUserWidget_HUD>()
	{
		return UUserWidget_HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserWidget_HUD(Z_Construct_UClass_UUserWidget_HUD, &UUserWidget_HUD::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UUserWidget_HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserWidget_HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
