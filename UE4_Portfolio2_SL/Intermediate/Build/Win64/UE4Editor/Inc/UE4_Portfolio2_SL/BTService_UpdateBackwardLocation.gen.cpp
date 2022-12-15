// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/BTService_UpdateBackwardLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_UpdateBackwardLocation() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTService_UpdateBackwardLocation_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTService_UpdateBackwardLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void UBTService_UpdateBackwardLocation::StaticRegisterNativesUBTService_UpdateBackwardLocation()
	{
	}
	UClass* Z_Construct_UClass_UBTService_UpdateBackwardLocation_NoRegister()
	{
		return UBTService_UpdateBackwardLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_UpdateBackwardLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_UpdateBackwardLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_UpdateBackwardLocation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_UpdateBackwardLocation.h" },
		{ "ModuleRelativePath", "BTService_UpdateBackwardLocation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_UpdateBackwardLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_UpdateBackwardLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_UpdateBackwardLocation_Statics::ClassParams = {
		&UBTService_UpdateBackwardLocation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTService_UpdateBackwardLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateBackwardLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_UpdateBackwardLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_UpdateBackwardLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_UpdateBackwardLocation, 1360642564);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UBTService_UpdateBackwardLocation>()
	{
		return UBTService_UpdateBackwardLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_UpdateBackwardLocation(Z_Construct_UClass_UBTService_UpdateBackwardLocation, &UBTService_UpdateBackwardLocation::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UBTService_UpdateBackwardLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_UpdateBackwardLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
