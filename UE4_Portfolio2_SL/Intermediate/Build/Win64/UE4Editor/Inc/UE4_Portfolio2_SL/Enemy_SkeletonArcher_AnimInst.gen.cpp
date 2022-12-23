// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/Enemy_SkeletonArcher_AnimInst.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_SkeletonArcher_AnimInst() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
	UE4_PORTFOLIO2_SL_API UEnum* Z_Construct_UEnum_UE4_Portfolio2_SL_EMONSTER_STATE();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEnemy_SkeletonArcher_AnimInst::execAnimNotify_Fire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemy_SkeletonArcher_AnimInst::execAnimNotify_PauseDeadMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_PauseDeadMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemy_SkeletonArcher_AnimInst::execAnimNotify_InitState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_InitState();
		P_NATIVE_END;
	}
	void UEnemy_SkeletonArcher_AnimInst::StaticRegisterNativesUEnemy_SkeletonArcher_AnimInst()
	{
		UClass* Class = UEnemy_SkeletonArcher_AnimInst::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_Fire", &UEnemy_SkeletonArcher_AnimInst::execAnimNotify_Fire },
			{ "AnimNotify_InitState", &UEnemy_SkeletonArcher_AnimInst::execAnimNotify_InitState },
			{ "AnimNotify_PauseDeadMontage", &UEnemy_SkeletonArcher_AnimInst::execAnimNotify_PauseDeadMontage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst, nullptr, "AnimNotify_Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_InitState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_InitState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_InitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst, nullptr, "AnimNotify_InitState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_InitState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_InitState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_InitState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_InitState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_PauseDeadMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_PauseDeadMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_PauseDeadMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst, nullptr, "AnimNotify_PauseDeadMontage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_PauseDeadMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_PauseDeadMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_PauseDeadMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_PauseDeadMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_NoRegister()
	{
		return UEnemy_SkeletonArcher_AnimInst::StaticClass();
	}
	struct Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFight_MetaData[];
#endif
		static void NewProp_IsFight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAttacking_MetaData[];
#endif
		static void NewProp_IsAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockDown_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KnockDown_Time;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Cur_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cur_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Cur_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_Melee_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_Melee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_Range_Slow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_Range_Slow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_Range_Fast_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_Range_Fast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hit1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hit2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hit3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dead1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dead1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_Fire, "AnimNotify_Fire" }, // 3045280403
		{ &Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_InitState, "AnimNotify_InitState" }, // 1561354325
		{ &Z_Construct_UFunction_UEnemy_SkeletonArcher_AnimInst_AnimNotify_PauseDeadMontage, "AnimNotify_PauseDeadMontage" }, // 3747111315
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Enemy_SkeletonArcher_AnimInst.h" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_CurrentSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, CurrentSpeed), METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_CurrentSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_CurrentSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_CurrentDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_CurrentDirection = { "CurrentDirection", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, CurrentDirection), METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_CurrentDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_CurrentDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_IsFight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	void Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_IsFight_SetBit(void* Obj)
	{
		((UEnemy_SkeletonArcher_AnimInst*)Obj)->IsFight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_IsFight = { "IsFight", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemy_SkeletonArcher_AnimInst), &Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_IsFight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_IsFight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_IsFight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_IsAttacking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	void Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_IsAttacking_SetBit(void* Obj)
	{
		((UEnemy_SkeletonArcher_AnimInst*)Obj)->IsAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_IsAttacking = { "IsAttacking", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemy_SkeletonArcher_AnimInst), &Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_IsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_IsAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_KnockDown_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_KnockDown_Time = { "KnockDown_Time", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, KnockDown_Time), METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_KnockDown_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_KnockDown_Time_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Cur_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Cur_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Cur_State = { "Cur_State", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, Cur_State), Z_Construct_UEnum_UE4_Portfolio2_SL_EMONSTER_STATE, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Cur_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Cur_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Attack_Melee_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Attack_Melee = { "Attack_Melee", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, Attack_Melee), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Attack_Melee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Attack_Melee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Attack_Range_Slow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Attack_Range_Slow = { "Attack_Range_Slow", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, Attack_Range_Slow), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Attack_Range_Slow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Attack_Range_Slow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Attack_Range_Fast_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Attack_Range_Fast = { "Attack_Range_Fast", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, Attack_Range_Fast), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Attack_Range_Fast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Attack_Range_Fast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_HitBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_HitBack = { "HitBack", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, HitBack), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_HitBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_HitBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Hit1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Hit1 = { "Hit1", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, Hit1), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Hit1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Hit1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Hit2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Hit2 = { "Hit2", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, Hit2), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Hit2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Hit2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Hit3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Hit3 = { "Hit3", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, Hit3), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Hit3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Hit3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Dead1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonArcher_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Dead1 = { "Dead1", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonArcher_AnimInst, Dead1), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Dead1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Dead1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_CurrentSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_CurrentDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_IsFight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_IsAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_KnockDown_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Cur_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Cur_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Attack_Melee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Attack_Range_Slow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Attack_Range_Fast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_HitBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Hit1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Hit2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Hit3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::NewProp_Dead1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemy_SkeletonArcher_AnimInst>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::ClassParams = {
		&UEnemy_SkeletonArcher_AnimInst::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemy_SkeletonArcher_AnimInst, 575424071);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UEnemy_SkeletonArcher_AnimInst>()
	{
		return UEnemy_SkeletonArcher_AnimInst::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemy_SkeletonArcher_AnimInst(Z_Construct_UClass_UEnemy_SkeletonArcher_AnimInst, &UEnemy_SkeletonArcher_AnimInst::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UEnemy_SkeletonArcher_AnimInst"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemy_SkeletonArcher_AnimInst);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
