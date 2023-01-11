// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/Enemy_DarkKnight_AnimInst.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_DarkKnight_AnimInst() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UEnemy_DarkKnight_AnimInst();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
	UE4_PORTFOLIO2_SL_API UEnum* Z_Construct_UEnum_UE4_Portfolio2_SL_EMONSTER_STATE();
	UE4_PORTFOLIO2_SL_API UEnum* Z_Construct_UEnum_UE4_Portfolio2_SL_EEQUIPMENT_STATE();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEnemy_DarkKnight_AnimInst::execAnimNotify_InvinsibleEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_InvinsibleEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemy_DarkKnight_AnimInst::execAnimNotify_InvinsibleStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_InvinsibleStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemy_DarkKnight_AnimInst::execAnimNotify_PauseMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_PauseMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemy_DarkKnight_AnimInst::execAnimNotify_InitState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_InitState();
		P_NATIVE_END;
	}
	void UEnemy_DarkKnight_AnimInst::StaticRegisterNativesUEnemy_DarkKnight_AnimInst()
	{
		UClass* Class = UEnemy_DarkKnight_AnimInst::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_InitState", &UEnemy_DarkKnight_AnimInst::execAnimNotify_InitState },
			{ "AnimNotify_InvinsibleEnd", &UEnemy_DarkKnight_AnimInst::execAnimNotify_InvinsibleEnd },
			{ "AnimNotify_InvinsibleStart", &UEnemy_DarkKnight_AnimInst::execAnimNotify_InvinsibleStart },
			{ "AnimNotify_PauseMontage", &UEnemy_DarkKnight_AnimInst::execAnimNotify_PauseMontage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InitState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InitState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemy_DarkKnight_AnimInst, nullptr, "AnimNotify_InitState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InitState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InitState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InitState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InitState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemy_DarkKnight_AnimInst, nullptr, "AnimNotify_InvinsibleEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemy_DarkKnight_AnimInst, nullptr, "AnimNotify_InvinsibleStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_PauseMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_PauseMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_PauseMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemy_DarkKnight_AnimInst, nullptr, "AnimNotify_PauseMontage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_PauseMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_PauseMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_PauseMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_PauseMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_NoRegister()
	{
		return UEnemy_DarkKnight_AnimInst::StaticClass();
	}
	struct Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurHP;
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Cur_EquipmentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cur_EquipmentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Cur_EquipmentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Execute1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Execute1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Execute2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Execute2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Executed_FalldownFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Executed_FalldownFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Executed_FalldownBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Executed_FalldownBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardBreak_GS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GuardBreak_GS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardBreak_SS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GuardBreak_SS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_GS_ChargedCombo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_GS_ChargedCombo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_GS_HandAndSwordSwing_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_GS_HandAndSwordSwing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_GS_RunningAttackSimple_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_GS_RunningAttackSimple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_GS_RunningAttackWithAOE_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_GS_RunningAttackWithAOE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_GS_SwingAndSlam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_GS_SwingAndSlam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_GS_Uppercut_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_GS_Uppercut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_SS_Combo1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_SS_Combo1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_SS_Combo2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_SS_Combo2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_SS_Combo3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_SS_Combo3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_SS_JumpAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack_SS_JumpAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_GS_F_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hit_GS_F;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_GS_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hit_GS_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_SS_F_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hit_SS_F;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_SS_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hit_SS_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dodge_B180_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dodge_B180;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dodge_BL45_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dodge_BL45;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dodge_BR45_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dodge_BR45;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boss_Battle_Entrance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boss_Battle_Entrance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Idle_To_Combat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Idle_To_Combat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Combat_To_Idle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Combat_To_Idle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boss_Death_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boss_Death;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InitState, "AnimNotify_InitState" }, // 4113540051
		{ &Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleEnd, "AnimNotify_InvinsibleEnd" }, // 2135661077
		{ &Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_InvinsibleStart, "AnimNotify_InvinsibleStart" }, // 657960130
		{ &Z_Construct_UFunction_UEnemy_DarkKnight_AnimInst_AnimNotify_PauseMontage, "AnimNotify_PauseMontage" }, // 2529349852
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Enemy_DarkKnight_AnimInst.h" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, CurrentSpeed), METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentDirection = { "CurrentDirection", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, CurrentDirection), METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurHP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurHP = { "CurHP", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, CurHP), METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsFight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	void Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsFight_SetBit(void* Obj)
	{
		((UEnemy_DarkKnight_AnimInst*)Obj)->IsFight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsFight = { "IsFight", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemy_DarkKnight_AnimInst), &Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsFight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsFight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsFight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsAttacking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	void Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsAttacking_SetBit(void* Obj)
	{
		((UEnemy_DarkKnight_AnimInst*)Obj)->IsAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsAttacking = { "IsAttacking", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemy_DarkKnight_AnimInst), &Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_KnockDown_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_KnockDown_Time = { "KnockDown_Time", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, KnockDown_Time), METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_KnockDown_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_KnockDown_Time_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_State = { "Cur_State", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Cur_State), Z_Construct_UEnum_UE4_Portfolio2_SL_EMONSTER_STATE, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_EquipmentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_EquipmentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_EquipmentState = { "Cur_EquipmentState", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Cur_EquipmentState), Z_Construct_UEnum_UE4_Portfolio2_SL_EEQUIPMENT_STATE, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_EquipmentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_EquipmentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Execute1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// \xc3\xb3??1\n" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
		{ "ToolTip", "\xc3\xb3??1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Execute1 = { "Execute1", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Execute1), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Execute1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Execute1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Execute2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// \xc3\xb3??2 (?????? ????)\n" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
		{ "ToolTip", "\xc3\xb3??2 (?????? ????)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Execute2 = { "Execute2", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Execute2), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Execute2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Execute2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Executed_FalldownFront_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// \xc3\xb3?????? ?????? ?\xd1\xbe???(= ???? ????)\n" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
		{ "ToolTip", "\xc3\xb3?????? ?????? ?\xd1\xbe???(= ???? ????)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Executed_FalldownFront = { "Executed_FalldownFront", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Executed_FalldownFront), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Executed_FalldownFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Executed_FalldownFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Executed_FalldownBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// \xc3\xb3?????? ?\xda\xb7? ?\xd1\xbe???(= ???? ????)\n" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
		{ "ToolTip", "\xc3\xb3?????? ?\xda\xb7? ?\xd1\xbe???(= ???? ????)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Executed_FalldownBack = { "Executed_FalldownBack", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Executed_FalldownBack), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Executed_FalldownBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Executed_FalldownBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_GuardBreak_GS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// ?\xd0\xb8?????\n" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
		{ "ToolTip", "?\xd0\xb8?????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_GuardBreak_GS = { "GuardBreak_GS", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, GuardBreak_GS), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_GuardBreak_GS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_GuardBreak_GS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_GuardBreak_SS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_GuardBreak_SS = { "GuardBreak_SS", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, GuardBreak_SS), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_GuardBreak_SS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_GuardBreak_SS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_ChargedCombo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// ???? ?\xd6\xb4\xcf\xb8??\xcc\xbc\xc7\xb5?(?????\xcf\xb0? ????)\n" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
		{ "ToolTip", "???? ?\xd6\xb4\xcf\xb8??\xcc\xbc\xc7\xb5?(?????\xcf\xb0? ????)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_ChargedCombo = { "Attack_GS_ChargedCombo", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_GS_ChargedCombo), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_ChargedCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_ChargedCombo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_HandAndSwordSwing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_HandAndSwordSwing = { "Attack_GS_HandAndSwordSwing", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_GS_HandAndSwordSwing), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_HandAndSwordSwing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_HandAndSwordSwing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_RunningAttackSimple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_RunningAttackSimple = { "Attack_GS_RunningAttackSimple", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_GS_RunningAttackSimple), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_RunningAttackSimple_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_RunningAttackSimple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_RunningAttackWithAOE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_RunningAttackWithAOE = { "Attack_GS_RunningAttackWithAOE", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_GS_RunningAttackWithAOE), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_RunningAttackWithAOE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_RunningAttackWithAOE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_SwingAndSlam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_SwingAndSlam = { "Attack_GS_SwingAndSlam", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_GS_SwingAndSlam), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_SwingAndSlam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_SwingAndSlam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_Uppercut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_Uppercut = { "Attack_GS_Uppercut", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_GS_Uppercut), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_Uppercut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_Uppercut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_Combo1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// ?\xd1\xbc\xd5\xb0? + ???? ?\xd6\xb4\xcf\xb8??\xcc\xbc\xc7\xb5?(?????? ????)\n" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
		{ "ToolTip", "?\xd1\xbc\xd5\xb0? + ???? ?\xd6\xb4\xcf\xb8??\xcc\xbc\xc7\xb5?(?????? ????)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_Combo1 = { "Attack_SS_Combo1", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_SS_Combo1), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_Combo1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_Combo1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_Combo2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_Combo2 = { "Attack_SS_Combo2", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_SS_Combo2), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_Combo2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_Combo2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_Combo3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_Combo3 = { "Attack_SS_Combo3", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_SS_Combo3), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_Combo3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_Combo3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_JumpAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_JumpAttack = { "Attack_SS_JumpAttack", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Attack_SS_JumpAttack), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_JumpAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_JumpAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_GS_F_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// ?\xc7\xb0? ?\xd6\xb4\xcf\xb8??\xcc\xbc?(????)\n" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
		{ "ToolTip", "?\xc7\xb0? ?\xd6\xb4\xcf\xb8??\xcc\xbc?(????)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_GS_F = { "Hit_GS_F", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Hit_GS_F), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_GS_F_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_GS_F_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_GS_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_GS_B = { "Hit_GS_B", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Hit_GS_B), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_GS_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_GS_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_SS_F_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// ?\xc7\xb0? ?\xd6\xb4\xcf\xb8??\xcc\xbc?(?\xd1\xbc\xd8\xb0? + ????)\n" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
		{ "ToolTip", "?\xc7\xb0? ?\xd6\xb4\xcf\xb8??\xcc\xbc?(?\xd1\xbc\xd8\xb0? + ????)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_SS_F = { "Hit_SS_F", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Hit_SS_F), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_SS_F_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_SS_F_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_SS_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_SS_B = { "Hit_SS_B", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Hit_SS_B), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_SS_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_SS_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Dodge_B180_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// \xc8\xb8?? ?\xd6\xb4\xcf\xb8??\xcc\xbc?\n" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
		{ "ToolTip", "\xc8\xb8?? ?\xd6\xb4\xcf\xb8??\xcc\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Dodge_B180 = { "Dodge_B180", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Dodge_B180), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Dodge_B180_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Dodge_B180_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Dodge_BL45_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Dodge_BL45 = { "Dodge_BL45", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Dodge_BL45), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Dodge_BL45_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Dodge_BL45_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Dodge_BR45_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Dodge_BR45 = { "Dodge_BR45", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Dodge_BR45), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Dodge_BR45_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Dodge_BR45_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Boss_Battle_Entrance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// ??\xc5\xb8 ?\xd6\xb4\xcf\xb8??\xcc\xbc?\n" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
		{ "ToolTip", "??\xc5\xb8 ?\xd6\xb4\xcf\xb8??\xcc\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Boss_Battle_Entrance = { "Boss_Battle_Entrance", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Boss_Battle_Entrance), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Boss_Battle_Entrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Boss_Battle_Entrance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Idle_To_Combat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Idle_To_Combat = { "Idle_To_Combat", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Idle_To_Combat), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Idle_To_Combat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Idle_To_Combat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Combat_To_Idle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Combat_To_Idle = { "Combat_To_Idle", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Combat_To_Idle), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Combat_To_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Combat_To_Idle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Boss_Death_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "Enemy_DarkKnight_AnimInst.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Boss_Death = { "Boss_Death", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemy_DarkKnight_AnimInst, Boss_Death), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Boss_Death_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Boss_Death_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurrentDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_CurHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsFight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_IsAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_KnockDown_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_EquipmentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Cur_EquipmentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Execute1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Execute2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Executed_FalldownFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Executed_FalldownBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_GuardBreak_GS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_GuardBreak_SS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_ChargedCombo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_HandAndSwordSwing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_RunningAttackSimple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_RunningAttackWithAOE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_SwingAndSlam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_GS_Uppercut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_Combo1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_Combo2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_Combo3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Attack_SS_JumpAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_GS_F,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_GS_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_SS_F,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Hit_SS_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Dodge_B180,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Dodge_BL45,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Dodge_BR45,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Boss_Battle_Entrance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Idle_To_Combat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Combat_To_Idle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::NewProp_Boss_Death,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemy_DarkKnight_AnimInst>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::ClassParams = {
		&UEnemy_DarkKnight_AnimInst::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemy_DarkKnight_AnimInst()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemy_DarkKnight_AnimInst_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemy_DarkKnight_AnimInst, 3917420957);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UEnemy_DarkKnight_AnimInst>()
	{
		return UEnemy_DarkKnight_AnimInst::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemy_DarkKnight_AnimInst(Z_Construct_UClass_UEnemy_DarkKnight_AnimInst, &UEnemy_DarkKnight_AnimInst::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UEnemy_DarkKnight_AnimInst"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemy_DarkKnight_AnimInst);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
