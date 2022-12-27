// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/IssenTimingNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssenTimingNotifyState() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UIssenTimingNotifyState_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UIssenTimingNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UIssenTimingNotifyState::StaticRegisterNativesUIssenTimingNotifyState()
	{
	}
	UClass* Z_Construct_UClass_UIssenTimingNotifyState_NoRegister()
	{
		return UIssenTimingNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UIssenTimingNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_arrHittedReuslts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrHittedReuslts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arrHittedReuslts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIssenTimingNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIssenTimingNotifyState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "IssenTimingNotifyState.h" },
		{ "ModuleRelativePath", "IssenTimingNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIssenTimingNotifyState_Statics::NewProp_arrHittedReuslts_Inner = { "arrHittedReuslts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIssenTimingNotifyState_Statics::NewProp_arrHittedReuslts_MetaData[] = {
		{ "ModuleRelativePath", "IssenTimingNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIssenTimingNotifyState_Statics::NewProp_arrHittedReuslts = { "arrHittedReuslts", nullptr, (EPropertyFlags)0x0040000000000010, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIssenTimingNotifyState, arrHittedReuslts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIssenTimingNotifyState_Statics::NewProp_arrHittedReuslts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIssenTimingNotifyState_Statics::NewProp_arrHittedReuslts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIssenTimingNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIssenTimingNotifyState_Statics::NewProp_arrHittedReuslts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIssenTimingNotifyState_Statics::NewProp_arrHittedReuslts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIssenTimingNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIssenTimingNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIssenTimingNotifyState_Statics::ClassParams = {
		&UIssenTimingNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIssenTimingNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIssenTimingNotifyState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIssenTimingNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIssenTimingNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIssenTimingNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIssenTimingNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIssenTimingNotifyState, 3661471171);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UIssenTimingNotifyState>()
	{
		return UIssenTimingNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIssenTimingNotifyState(Z_Construct_UClass_UIssenTimingNotifyState, &UIssenTimingNotifyState::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UIssenTimingNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIssenTimingNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
