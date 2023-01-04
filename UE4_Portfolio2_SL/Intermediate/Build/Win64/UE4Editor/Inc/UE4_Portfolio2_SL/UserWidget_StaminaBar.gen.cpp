// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/UserWidget_StaminaBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserWidget_StaminaBar() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UUserWidget_StaminaBar_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UUserWidget_StaminaBar();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void UUserWidget_StaminaBar::StaticRegisterNativesUUserWidget_StaminaBar()
	{
	}
	UClass* Z_Construct_UClass_UUserWidget_StaminaBar_NoRegister()
	{
		return UUserWidget_StaminaBar::StaticClass();
	}
	struct Z_Construct_UClass_UUserWidget_StaminaBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserWidget_StaminaBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_StaminaBar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UserWidget_StaminaBar.h" },
		{ "ModuleRelativePath", "UserWidget_StaminaBar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserWidget_StaminaBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserWidget_StaminaBar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserWidget_StaminaBar_Statics::ClassParams = {
		&UUserWidget_StaminaBar::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUserWidget_StaminaBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_StaminaBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserWidget_StaminaBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserWidget_StaminaBar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserWidget_StaminaBar, 3287105684);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UUserWidget_StaminaBar>()
	{
		return UUserWidget_StaminaBar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserWidget_StaminaBar(Z_Construct_UClass_UUserWidget_StaminaBar, &UUserWidget_StaminaBar::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UUserWidget_StaminaBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserWidget_StaminaBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
