// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/BTService_BossDetectPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_BossDetectPlayer() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTService_BossDetectPlayer_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UBTService_BossDetectPlayer();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
// End Cross Module References
	void UBTService_BossDetectPlayer::StaticRegisterNativesUBTService_BossDetectPlayer()
	{
	}
	UClass* Z_Construct_UClass_UBTService_BossDetectPlayer_NoRegister()
	{
		return UBTService_BossDetectPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_BossDetectPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_BossDetectPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_BossDetectPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_BossDetectPlayer.h" },
		{ "ModuleRelativePath", "BTService_BossDetectPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_BossDetectPlayer_Statics::NewProp_DetectRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "BTService_BossDetectPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_BossDetectPlayer_Statics::NewProp_DetectRadius = { "DetectRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_BossDetectPlayer, DetectRadius), METADATA_PARAMS(Z_Construct_UClass_UBTService_BossDetectPlayer_Statics::NewProp_DetectRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_BossDetectPlayer_Statics::NewProp_DetectRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_BossDetectPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_BossDetectPlayer_Statics::NewProp_DetectRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_BossDetectPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_BossDetectPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_BossDetectPlayer_Statics::ClassParams = {
		&UBTService_BossDetectPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_BossDetectPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_BossDetectPlayer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_BossDetectPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_BossDetectPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_BossDetectPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_BossDetectPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_BossDetectPlayer, 4112529465);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UBTService_BossDetectPlayer>()
	{
		return UBTService_BossDetectPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_BossDetectPlayer(Z_Construct_UClass_UBTService_BossDetectPlayer, &UBTService_BossDetectPlayer::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UBTService_BossDetectPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_BossDetectPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
