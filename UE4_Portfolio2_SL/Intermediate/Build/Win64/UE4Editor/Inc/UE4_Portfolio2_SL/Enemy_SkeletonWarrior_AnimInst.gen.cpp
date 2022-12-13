// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/Enemy_SkeletonWarrior_AnimInst.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_SkeletonWarrior_AnimInst() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
	UE4_PORTFOLIO2_SL_API UEnum* Z_Construct_UEnum_UE4_Portfolio2_SL_EMONSTER_STATE();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEnemy_SkeletonWarrior_AnimInst::execAnimNotify_InitState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_InitState();
		P_NATIVE_END;
	}
	void UEnemy_SkeletonWarrior_AnimInst::StaticRegisterNativesUEnemy_SkeletonWarrior_AnimInst()
	{
		UClass* Class = UEnemy_SkeletonWarrior_AnimInst::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_InitState", &UEnemy_SkeletonWarrior_AnimInst::execAnimNotify_InitState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemy_SkeletonWarrior_AnimInst_AnimNotify_InitState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemy_SkeletonWarrior_AnimInst_AnimNotify_InitState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_SkeletonWarrior_AnimInst_AnimNotify_InitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst, nullptr, "AnimNotify_InitState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemy_SkeletonWarrior_AnimInst_AnimNotify_InitState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_SkeletonWarrior_AnimInst_AnimNotify_InitState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemy_SkeletonWarrior_AnimInst_AnimNotify_InitState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemy_SkeletonWarrior_AnimInst_AnimNotify_InitState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_NoRegister()
	{
		return UEnemy_SkeletonWarrior_AnimInst::StaticClass();
	}
	struct Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_Combo_01_Stand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_Combo_01_Stand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_Combo_02_Move_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_Combo_02_Move;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_Combo_03_Mix_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_Combo_03_Mix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_Slash_Stand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_Slash_Stand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_Strike_Stand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_Strike_Stand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_Thrust_Stand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_Thrust_Stand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_Slash_Move_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_Slash_Move;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_Strike_Move_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_Strike_Move;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_Thrust_Move_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_Thrust_Move;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardBreak_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GuardBreak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dead1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dead1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dead2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dead2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit01_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hit01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit02_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hit02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepStand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SleepStand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepSitdown_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SleepSitdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Standup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Standup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemy_SkeletonWarrior_AnimInst_AnimNotify_InitState, "AnimNotify_InitState" }, // 2263863201
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Enemy_SkeletonWarrior_AnimInst.h" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_CurrentSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, CurrentSpeed), METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_CurrentSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_CurrentSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_CurrentDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_CurrentDirection = { "CurrentDirection", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, CurrentDirection), METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_CurrentDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_CurrentDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_IsFight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	void Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_IsFight_SetBit(void* Obj)
	{
		((UEnemy_SkeletonWarrior_AnimInst*)Obj)->IsFight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_IsFight = { "IsFight", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemy_SkeletonWarrior_AnimInst), &Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_IsFight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_IsFight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_IsFight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_IsAttacking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	void Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_IsAttacking_SetBit(void* Obj)
	{
		((UEnemy_SkeletonWarrior_AnimInst*)Obj)->IsAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_IsAttacking = { "IsAttacking", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemy_SkeletonWarrior_AnimInst), &Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_IsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_IsAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_KnockDown_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_KnockDown_Time = { "KnockDown_Time", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, KnockDown_Time), METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_KnockDown_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_KnockDown_Time_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Cur_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Cur_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Cur_State = { "Cur_State", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Cur_State), Z_Construct_UEnum_UE4_Portfolio2_SL_EMONSTER_STATE, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Cur_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Cur_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Combo_01_Stand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// 2???? ????\n" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
		{ "ToolTip", "2???? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Combo_01_Stand = { "Attack_Combo_01_Stand", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Combo_01_Stand), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Combo_01_Stand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Combo_01_Stand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Combo_02_Move_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Combo_02_Move = { "Attack_Combo_02_Move", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Combo_02_Move), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Combo_02_Move_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Combo_02_Move_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Combo_03_Mix_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Combo_03_Mix = { "Attack_Combo_03_Mix", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Combo_03_Mix), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Combo_03_Mix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Combo_03_Mix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Slash_Stand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// ?\xdc\xb9\xdf\xbc? ????(???\xda\xb8?)\n" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
		{ "ToolTip", "?\xdc\xb9\xdf\xbc? ????(???\xda\xb8?)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Slash_Stand = { "Attack_Slash_Stand", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Slash_Stand), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Slash_Stand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Slash_Stand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Strike_Stand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Strike_Stand = { "Attack_Strike_Stand", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Strike_Stand), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Strike_Stand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Strike_Stand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Thrust_Stand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Thrust_Stand = { "Attack_Thrust_Stand", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Thrust_Stand), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Thrust_Stand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Thrust_Stand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Slash_Move_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// ?\xdc\xb9\xdf\xbc? ????(??????)\n" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
		{ "ToolTip", "?\xdc\xb9\xdf\xbc? ????(??????)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Slash_Move = { "Attack_Slash_Move", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Slash_Move), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Slash_Move_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Slash_Move_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Strike_Move_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Strike_Move = { "Attack_Strike_Move", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Strike_Move), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Strike_Move_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Strike_Move_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Thrust_Move_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Thrust_Move = { "Attack_Thrust_Move", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Attack_Thrust_Move), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Thrust_Move_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Thrust_Move_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_GuardBreak_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// ???? ?\xea\xb7\xb9??\xc5\xa9\n" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
		{ "ToolTip", "???? ?\xea\xb7\xb9??\xc5\xa9" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_GuardBreak = { "GuardBreak", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, GuardBreak), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_GuardBreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_GuardBreak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Dead1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// ????\n" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Dead1 = { "Dead1", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Dead1), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Dead1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Dead1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Dead2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Dead2 = { "Dead2", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Dead2), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Dead2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Dead2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Hit01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// ?\xc7\xb0?\n" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
		{ "ToolTip", "?\xc7\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Hit01 = { "Hit01", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Hit01), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Hit01_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Hit01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Hit02_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Hit02 = { "Hit02", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Hit02), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Hit02_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Hit02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_HitBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_HitBack = { "HitBack", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, HitBack), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_HitBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_HitBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_SleepStand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// ?\xde\xb8? ????\n" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
		{ "ToolTip", "?\xde\xb8? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_SleepStand = { "SleepStand", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, SleepStand), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_SleepStand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_SleepStand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_SleepSitdown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_SleepSitdown = { "SleepSitdown", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, SleepSitdown), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_SleepSitdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_SleepSitdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Standup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_SkeletonWarrior_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Standup = { "Standup", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_SkeletonWarrior_AnimInst, Standup), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Standup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Standup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_CurrentSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_CurrentDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_IsFight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_IsAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_KnockDown_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Cur_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Cur_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Combo_01_Stand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Combo_02_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Combo_03_Mix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Slash_Stand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Strike_Stand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Thrust_Stand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Slash_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Strike_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Attack_Thrust_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_GuardBreak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Dead1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Dead2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Hit01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Hit02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_HitBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_SleepStand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_SleepSitdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::NewProp_Standup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemy_SkeletonWarrior_AnimInst>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::ClassParams = {
		&UEnemy_SkeletonWarrior_AnimInst::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemy_SkeletonWarrior_AnimInst, 2507539922);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UEnemy_SkeletonWarrior_AnimInst>()
	{
		return UEnemy_SkeletonWarrior_AnimInst::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemy_SkeletonWarrior_AnimInst(Z_Construct_UClass_UEnemy_SkeletonWarrior_AnimInst, &UEnemy_SkeletonWarrior_AnimInst::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UEnemy_SkeletonWarrior_AnimInst"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemy_SkeletonWarrior_AnimInst);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
