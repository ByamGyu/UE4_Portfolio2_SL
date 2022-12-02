// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/UE4_Portfolio2_SLCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4_Portfolio2_SLCharacter() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_AUE4_Portfolio2_SLCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	UE4_PORTFOLIO2_SL_API UEnum* Z_Construct_UEnum_UE4_Portfolio2_SL_EPLAYER_STATE();
// End Cross Module References
	void AUE4_Portfolio2_SLCharacter::StaticRegisterNativesAUE4_Portfolio2_SLCharacter()
	{
	}
	UClass* Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_NoRegister()
	{
		return AUE4_Portfolio2_SLCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CameraArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_CameraArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Camera;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Cur_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cur_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Cur_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HPRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaminaRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UE4_Portfolio2_SLCharacter.h" },
		{ "ModuleRelativePath", "UE4_Portfolio2_SLCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_m_CameraArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UE4_Portfolio2_SLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_m_CameraArm = { "m_CameraArm", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4_Portfolio2_SLCharacter, m_CameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_m_CameraArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_m_CameraArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_m_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UE4_Portfolio2_SLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_m_Camera = { "m_Camera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4_Portfolio2_SLCharacter, m_Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_m_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_m_Camera_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_Cur_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_Cur_State_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "UE4_Portfolio2_SLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_Cur_State = { "Cur_State", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4_Portfolio2_SLCharacter, Cur_State), Z_Construct_UEnum_UE4_Portfolio2_SL_EPLAYER_STATE, METADATA_PARAMS(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_Cur_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_Cur_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_MaxHP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "UE4_Portfolio2_SLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4_Portfolio2_SLCharacter, MaxHP), METADATA_PARAMS(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_MaxHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_MaxHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_CurHP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "UE4_Portfolio2_SLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_CurHP = { "CurHP", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4_Portfolio2_SLCharacter, CurHP), METADATA_PARAMS(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_CurHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_CurHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_HPRatio_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "UE4_Portfolio2_SLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_HPRatio = { "HPRatio", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4_Portfolio2_SLCharacter, HPRatio), METADATA_PARAMS(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_HPRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_HPRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "UE4_Portfolio2_SLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0040000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4_Portfolio2_SLCharacter, MaxStamina), METADATA_PARAMS(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_MaxStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_MaxStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_CurStamina_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "UE4_Portfolio2_SLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_CurStamina = { "CurStamina", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4_Portfolio2_SLCharacter, CurStamina), METADATA_PARAMS(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_CurStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_CurStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_StaminaRatio_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Info" },
		{ "ModuleRelativePath", "UE4_Portfolio2_SLCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_StaminaRatio = { "StaminaRatio", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4_Portfolio2_SLCharacter, StaminaRatio), METADATA_PARAMS(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_StaminaRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_StaminaRatio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_m_CameraArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_m_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_Cur_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_Cur_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_MaxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_CurHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_HPRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_MaxStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_CurStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::NewProp_StaminaRatio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4_Portfolio2_SLCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::ClassParams = {
		&AUE4_Portfolio2_SLCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE4_Portfolio2_SLCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE4_Portfolio2_SLCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE4_Portfolio2_SLCharacter, 2514743858);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<AUE4_Portfolio2_SLCharacter>()
	{
		return AUE4_Portfolio2_SLCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4_Portfolio2_SLCharacter(Z_Construct_UClass_AUE4_Portfolio2_SLCharacter, &AUE4_Portfolio2_SLCharacter::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("AUE4_Portfolio2_SLCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4_Portfolio2_SLCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
