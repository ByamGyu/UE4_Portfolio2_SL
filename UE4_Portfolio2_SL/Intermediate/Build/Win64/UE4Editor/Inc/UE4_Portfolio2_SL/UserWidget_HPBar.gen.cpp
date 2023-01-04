// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/UserWidget_HPBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserWidget_HPBar() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UUserWidget_HPBar_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UUserWidget_HPBar();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void UUserWidget_HPBar::StaticRegisterNativesUUserWidget_HPBar()
	{
	}
	UClass* Z_Construct_UClass_UUserWidget_HPBar_NoRegister()
	{
		return UUserWidget_HPBar::StaticClass();
	}
	struct Z_Construct_UClass_UUserWidget_HPBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserWidget_HPBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_HPBar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UserWidget_HPBar.h" },
		{ "ModuleRelativePath", "UserWidget_HPBar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserWidget_HPBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserWidget_HPBar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserWidget_HPBar_Statics::ClassParams = {
		&UUserWidget_HPBar::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUserWidget_HPBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_HPBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserWidget_HPBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserWidget_HPBar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserWidget_HPBar, 2738810760);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UUserWidget_HPBar>()
	{
		return UUserWidget_HPBar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserWidget_HPBar(Z_Construct_UClass_UUserWidget_HPBar, &UUserWidget_HPBar::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UUserWidget_HPBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserWidget_HPBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
