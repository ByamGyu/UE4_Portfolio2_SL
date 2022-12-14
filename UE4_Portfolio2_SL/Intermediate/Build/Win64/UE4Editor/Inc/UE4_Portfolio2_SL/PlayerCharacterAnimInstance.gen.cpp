// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_Portfolio2_SL/PlayerCharacterAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacterAnimInstance() {}
// Cross Module References
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UPlayerCharacterAnimInstance_NoRegister();
	UE4_PORTFOLIO2_SL_API UClass* Z_Construct_UClass_UPlayerCharacterAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_UE4_Portfolio2_SL();
	UE4_PORTFOLIO2_SL_API UEnum* Z_Construct_UEnum_UE4_Portfolio2_SL_EPLAYER_STATE();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerCharacterAnimInstance::execAnimNotify_CanRoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_CanRoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacterAnimInstance::execAnimNotify_UseStaminaHeavyAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_UseStaminaHeavyAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacterAnimInstance::execAnimNotify_UseStaminaLightAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_UseStaminaLightAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacterAnimInstance::execAnimNotify_InvinsibleEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_InvinsibleEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacterAnimInstance::execAnimNotify_InvinsibleStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_InvinsibleStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacterAnimInstance::execAnimNotify_AttackInputCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_AttackInputCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacterAnimInstance::execAnimNotify_AttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_AttackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacterAnimInstance::execAnimNotify_GuardStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_GuardStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacterAnimInstance::execAnimNotify_NockDownRecover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_NockDownRecover();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacterAnimInstance::execAnimNotify_ParryEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_ParryEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacterAnimInstance::execAnimNotify_ParryStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_ParryStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacterAnimInstance::execAnimNotify_SpellEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_SpellEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacterAnimInstance::execAnimNotify_RollEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_RollEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacterAnimInstance::execAnimNotify_JumpEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_JumpEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerCharacterAnimInstance::execAnimNotify_InitState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_InitState();
		P_NATIVE_END;
	}
	void UPlayerCharacterAnimInstance::StaticRegisterNativesUPlayerCharacterAnimInstance()
	{
		UClass* Class = UPlayerCharacterAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_AttackEnd", &UPlayerCharacterAnimInstance::execAnimNotify_AttackEnd },
			{ "AnimNotify_AttackInputCheck", &UPlayerCharacterAnimInstance::execAnimNotify_AttackInputCheck },
			{ "AnimNotify_CanRoll", &UPlayerCharacterAnimInstance::execAnimNotify_CanRoll },
			{ "AnimNotify_GuardStart", &UPlayerCharacterAnimInstance::execAnimNotify_GuardStart },
			{ "AnimNotify_InitState", &UPlayerCharacterAnimInstance::execAnimNotify_InitState },
			{ "AnimNotify_InvinsibleEnd", &UPlayerCharacterAnimInstance::execAnimNotify_InvinsibleEnd },
			{ "AnimNotify_InvinsibleStart", &UPlayerCharacterAnimInstance::execAnimNotify_InvinsibleStart },
			{ "AnimNotify_JumpEnd", &UPlayerCharacterAnimInstance::execAnimNotify_JumpEnd },
			{ "AnimNotify_NockDownRecover", &UPlayerCharacterAnimInstance::execAnimNotify_NockDownRecover },
			{ "AnimNotify_ParryEnd", &UPlayerCharacterAnimInstance::execAnimNotify_ParryEnd },
			{ "AnimNotify_ParryStart", &UPlayerCharacterAnimInstance::execAnimNotify_ParryStart },
			{ "AnimNotify_RollEnd", &UPlayerCharacterAnimInstance::execAnimNotify_RollEnd },
			{ "AnimNotify_SpellEnd", &UPlayerCharacterAnimInstance::execAnimNotify_SpellEnd },
			{ "AnimNotify_UseStaminaHeavyAttack", &UPlayerCharacterAnimInstance::execAnimNotify_UseStaminaHeavyAttack },
			{ "AnimNotify_UseStaminaLightAttack", &UPlayerCharacterAnimInstance::execAnimNotify_UseStaminaLightAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_AttackEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_AttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_AttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterAnimInstance, nullptr, "AnimNotify_AttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_AttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_AttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_AttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_AttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_AttackInputCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_AttackInputCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_AttackInputCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterAnimInstance, nullptr, "AnimNotify_AttackInputCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_AttackInputCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_AttackInputCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_AttackInputCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_AttackInputCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_CanRoll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_CanRoll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_CanRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterAnimInstance, nullptr, "AnimNotify_CanRoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_CanRoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_CanRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_CanRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_CanRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_GuardStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_GuardStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_GuardStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterAnimInstance, nullptr, "AnimNotify_GuardStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_GuardStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_GuardStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_GuardStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_GuardStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InitState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InitState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterAnimInstance, nullptr, "AnimNotify_InitState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InitState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InitState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InitState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InitState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InvinsibleEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InvinsibleEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InvinsibleEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterAnimInstance, nullptr, "AnimNotify_InvinsibleEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InvinsibleEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InvinsibleEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InvinsibleEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InvinsibleEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InvinsibleStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InvinsibleStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InvinsibleStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterAnimInstance, nullptr, "AnimNotify_InvinsibleStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InvinsibleStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InvinsibleStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InvinsibleStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InvinsibleStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_JumpEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_JumpEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_JumpEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterAnimInstance, nullptr, "AnimNotify_JumpEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_JumpEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_JumpEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_JumpEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_JumpEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_NockDownRecover_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_NockDownRecover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_NockDownRecover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterAnimInstance, nullptr, "AnimNotify_NockDownRecover", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_NockDownRecover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_NockDownRecover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_NockDownRecover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_NockDownRecover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_ParryEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_ParryEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_ParryEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterAnimInstance, nullptr, "AnimNotify_ParryEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_ParryEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_ParryEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_ParryEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_ParryEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_ParryStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_ParryStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_ParryStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterAnimInstance, nullptr, "AnimNotify_ParryStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_ParryStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_ParryStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_ParryStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_ParryStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_RollEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_RollEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_RollEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterAnimInstance, nullptr, "AnimNotify_RollEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_RollEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_RollEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_RollEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_RollEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_SpellEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_SpellEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_SpellEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterAnimInstance, nullptr, "AnimNotify_SpellEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_SpellEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_SpellEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_SpellEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_SpellEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_UseStaminaHeavyAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_UseStaminaHeavyAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_UseStaminaHeavyAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterAnimInstance, nullptr, "AnimNotify_UseStaminaHeavyAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_UseStaminaHeavyAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_UseStaminaHeavyAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_UseStaminaHeavyAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_UseStaminaHeavyAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_UseStaminaLightAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_UseStaminaLightAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_UseStaminaLightAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterAnimInstance, nullptr, "AnimNotify_UseStaminaLightAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_UseStaminaLightAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_UseStaminaLightAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_UseStaminaLightAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_UseStaminaLightAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerCharacterAnimInstance_NoRegister()
	{
		return UPlayerCharacterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeedAndDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeedAndDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentForwardDirectionInputValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentForwardDirectionInputValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDirectionInputValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDirectionInputValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsGround_MetaData[];
#endif
		static void NewProp_IsGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFalling_MetaData[];
#endif
		static void NewProp_IsFalling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFalling;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAttackButtonWhenAttack_MetaData[];
#endif
		static void NewProp_IsAttackButtonWhenAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAttackButtonWhenAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboCnt_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ComboCnt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLockOn_MetaData[];
#endif
		static void NewProp_IsLockOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLockOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockDown_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KnockDown_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurStamina;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Cur_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cur_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Cur_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaUse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaminaUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollIdle_F0_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollIdle_F0_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollIdle_FL45_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollIdle_FL45_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollIdle_FL90_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollIdle_FL90_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollIdle_FR45_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollIdle_FR45_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollIdle_FR90_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollIdle_FR90_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollIdle_B180_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollIdle_B180_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollIdle_BL45_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollIdle_BL45_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollIdle_BR45_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollIdle_BR45_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollCombat_F0_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollCombat_F0_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollCombat_FL45_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollCombat_FL45_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollCombat_FL90_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollCombat_FL90_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollCombat_FR45_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollCombat_FR45_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollCombat_FR90_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollCombat_FR90_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollCombat_B180_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollCombat_B180_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollCombat_BL45_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollCombat_BL45_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollCombat_BR45_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollCombat_BR45_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackStep_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackStep_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightAttackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightAttackMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeavyAttackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeavyAttackMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardBreakMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GuardBreakMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParryMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Execution1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Execution1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Execution2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Execution2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Execution_Back_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Execution_Back;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Issen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Issen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactStrong1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactStrong1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactStrong2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactStrong2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactStrong3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactStrong3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactBack1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactBack1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldBlockWeak_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShieldBlockWeak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldBlockStrong_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShieldBlockStrong;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_Portfolio2_SL,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_AttackEnd, "AnimNotify_AttackEnd" }, // 816944370
		{ &Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_AttackInputCheck, "AnimNotify_AttackInputCheck" }, // 1040418465
		{ &Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_CanRoll, "AnimNotify_CanRoll" }, // 1154189989
		{ &Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_GuardStart, "AnimNotify_GuardStart" }, // 625723640
		{ &Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InitState, "AnimNotify_InitState" }, // 3696852591
		{ &Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InvinsibleEnd, "AnimNotify_InvinsibleEnd" }, // 474231052
		{ &Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_InvinsibleStart, "AnimNotify_InvinsibleStart" }, // 1801731387
		{ &Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_JumpEnd, "AnimNotify_JumpEnd" }, // 2070447448
		{ &Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_NockDownRecover, "AnimNotify_NockDownRecover" }, // 2853493014
		{ &Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_ParryEnd, "AnimNotify_ParryEnd" }, // 2176938433
		{ &Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_ParryStart, "AnimNotify_ParryStart" }, // 3092346518
		{ &Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_RollEnd, "AnimNotify_RollEnd" }, // 1148083175
		{ &Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_SpellEnd, "AnimNotify_SpellEnd" }, // 1838090597
		{ &Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_UseStaminaHeavyAttack, "AnimNotify_UseStaminaHeavyAttack" }, // 3773665626
		{ &Z_Construct_UFunction_UPlayerCharacterAnimInstance_AnimNotify_UseStaminaLightAttack, "AnimNotify_UseStaminaLightAttack" }, // 938185989
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PlayerCharacterAnimInstance.h" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, CurrentSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentSpeedAndDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "Comment", "// ?????? ?????\xcc\xbd?(??????)?? ????\n" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
		{ "ToolTip", "?????? ?????\xcc\xbd?(??????)?? ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentSpeedAndDirection = { "CurrentSpeedAndDirection", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, CurrentSpeedAndDirection), METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentSpeedAndDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentSpeedAndDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentForwardDirectionInputValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "Comment", "// ?????? ?????\xcc\xbd?(??????)?? ????\n" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
		{ "ToolTip", "?????? ?????\xcc\xbd?(??????)?? ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentForwardDirectionInputValue = { "CurrentForwardDirectionInputValue", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, CurrentForwardDirectionInputValue), METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentForwardDirectionInputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentForwardDirectionInputValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentDirectionInputValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "Comment", "// -1 ~ 1 ??\xc4\xa1 // ???? ???\xc2\xb0? ?\xc6\xb4? ?????? ?????? ???\xe2\xbf\xa1 ????\n" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
		{ "ToolTip", "-1 ~ 1 ??\xc4\xa1  ???? ???\xc2\xb0? ?\xc6\xb4? ?????? ?????? ???\xe2\xbf\xa1 ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentDirectionInputValue = { "CurrentDirectionInputValue", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, CurrentDirectionInputValue), METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentDirectionInputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentDirectionInputValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsGround_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "Comment", "// -1 ~ 1 ??\xc4\xa1 // ?????? ?????\xcc\xbd?(??????)?? ???? // PlayerCharacter???? ?\xde\xbe\xc6\xbf?\n" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
		{ "ToolTip", "-1 ~ 1 ??\xc4\xa1  ?????? ?????\xcc\xbd?(??????)?? ????  PlayerCharacter???? ?\xde\xbe\xc6\xbf?" },
	};
#endif
	void Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsGround_SetBit(void* Obj)
	{
		((UPlayerCharacterAnimInstance*)Obj)->IsGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsGround = { "IsGround", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerCharacterAnimInstance), &Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsFalling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "Comment", "// ???? ???\xd6\xb4??? ???? (IsFall?? ?\xdf\xb6?!)\n" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
		{ "ToolTip", "???? ???\xd6\xb4??? ???? (IsFall?? ?\xdf\xb6?!)" },
	};
#endif
	void Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsFalling_SetBit(void* Obj)
	{
		((UPlayerCharacterAnimInstance*)Obj)->IsFalling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsFalling = { "IsFalling", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerCharacterAnimInstance), &Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsFight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "Comment", "// ?\xdf\xb6? ???? (IsFalling?? ?\xdf\xb6?!)\n" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
		{ "ToolTip", "?\xdf\xb6? ???? (IsFalling?? ?\xdf\xb6?!)" },
	};
#endif
	void Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsFight_SetBit(void* Obj)
	{
		((UPlayerCharacterAnimInstance*)Obj)->IsFight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsFight = { "IsFight", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerCharacterAnimInstance), &Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsFight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsFight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsFight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsAttacking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsAttacking_SetBit(void* Obj)
	{
		((UPlayerCharacterAnimInstance*)Obj)->IsAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsAttacking = { "IsAttacking", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerCharacterAnimInstance), &Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsAttackButtonWhenAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsAttackButtonWhenAttack_SetBit(void* Obj)
	{
		((UPlayerCharacterAnimInstance*)Obj)->IsAttackButtonWhenAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsAttackButtonWhenAttack = { "IsAttackButtonWhenAttack", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerCharacterAnimInstance), &Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsAttackButtonWhenAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsAttackButtonWhenAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsAttackButtonWhenAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ComboCnt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ComboCnt = { "ComboCnt", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, ComboCnt), METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ComboCnt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ComboCnt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsLockOn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsLockOn_SetBit(void* Obj)
	{
		((UPlayerCharacterAnimInstance*)Obj)->IsLockOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsLockOn = { "IsLockOn", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerCharacterAnimInstance), &Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsLockOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsLockOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsLockOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_KnockDown_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_KnockDown_Time = { "KnockDown_Time", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, KnockDown_Time), METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_KnockDown_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_KnockDown_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurHP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurHP = { "CurHP", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, CurHP), METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurStamina_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurStamina = { "CurStamina", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, CurStamina), METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurStamina_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Cur_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Cur_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Cur_State = { "Cur_State", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, Cur_State), Z_Construct_UEnum_UE4_Portfolio2_SL_EPLAYER_STATE, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Cur_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Cur_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_StaminaUse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_StaminaUse = { "StaminaUse", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, StaminaUse), METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_StaminaUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_StaminaUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_F0_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// ?\xcf\xb9? ?????? ????\n" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
		{ "ToolTip", "?\xcf\xb9? ?????? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_F0_Montage = { "RollIdle_F0_Montage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollIdle_F0_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_F0_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_F0_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FL45_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// class?? ?\xd9\xbf??? ???\xe6\xbc\xb1??\n" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
		{ "ToolTip", "class?? ?\xd9\xbf??? ???\xe6\xbc\xb1??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FL45_Montage = { "RollIdle_FL45_Montage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollIdle_FL45_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FL45_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FL45_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FL90_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FL90_Montage = { "RollIdle_FL90_Montage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollIdle_FL90_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FL90_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FL90_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FR45_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FR45_Montage = { "RollIdle_FR45_Montage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollIdle_FR45_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FR45_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FR45_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FR90_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FR90_Montage = { "RollIdle_FR90_Montage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollIdle_FR90_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FR90_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FR90_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_B180_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_B180_Montage = { "RollIdle_B180_Montage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollIdle_B180_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_B180_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_B180_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_BL45_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_BL45_Montage = { "RollIdle_BL45_Montage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollIdle_BL45_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_BL45_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_BL45_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_BR45_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_BR45_Montage = { "RollIdle_BR45_Montage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollIdle_BR45_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_BR45_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_BR45_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_F0_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// ???? ?????? ????\n" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_F0_Montage = { "RollCombat_F0_Montage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollCombat_F0_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_F0_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_F0_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FL45_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FL45_Montage = { "RollCombat_FL45_Montage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollCombat_FL45_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FL45_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FL45_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FL90_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FL90_Montage = { "RollCombat_FL90_Montage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollCombat_FL90_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FL90_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FL90_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FR45_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FR45_Montage = { "RollCombat_FR45_Montage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollCombat_FR45_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FR45_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FR45_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FR90_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FR90_Montage = { "RollCombat_FR90_Montage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollCombat_FR90_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FR90_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FR90_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_B180_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_B180_Montage = { "RollCombat_B180_Montage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollCombat_B180_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_B180_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_B180_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_BL45_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_BL45_Montage = { "RollCombat_BL45_Montage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollCombat_BL45_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_BL45_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_BL45_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_BR45_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_BR45_Montage = { "RollCombat_BR45_Montage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, RollCombat_BR45_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_BR45_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_BR45_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_BackStep_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "Comment", "// ?\xe9\xbd\xba??\n" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
		{ "ToolTip", "?\xe9\xbd\xba??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_BackStep_Montage = { "BackStep_Montage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, BackStep_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_BackStep_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_BackStep_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_LightAttackMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_LightAttackMontage = { "LightAttackMontage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, LightAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_LightAttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_LightAttackMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_HeavyAttackMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_HeavyAttackMontage = { "HeavyAttackMontage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, HeavyAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_HeavyAttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_HeavyAttackMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_GuardBreakMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_GuardBreakMontage = { "GuardBreakMontage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, GuardBreakMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_GuardBreakMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_GuardBreakMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ParryMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ParryMontage = { "ParryMontage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, ParryMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ParryMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ParryMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Execution1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Execution1 = { "Execution1", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, Execution1), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Execution1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Execution1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Execution2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Execution2 = { "Execution2", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, Execution2), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Execution2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Execution2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Execution_Back_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Execution_Back = { "Execution_Back", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, Execution_Back), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Execution_Back_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Execution_Back_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Issen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Issen = { "Issen", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, Issen), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Issen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Issen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactStrong1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactStrong1 = { "ImpactStrong1", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, ImpactStrong1), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactStrong1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactStrong1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactStrong2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactStrong2 = { "ImpactStrong2", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, ImpactStrong2), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactStrong2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactStrong2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactStrong3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactStrong3 = { "ImpactStrong3", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, ImpactStrong3), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactStrong3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactStrong3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactBack1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactBack1 = { "ImpactBack1", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, ImpactBack1), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactBack1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactBack1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ShieldBlockWeak_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ShieldBlockWeak = { "ShieldBlockWeak", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, ShieldBlockWeak), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ShieldBlockWeak_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ShieldBlockWeak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ShieldBlockStrong_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "PlayerCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ShieldBlockStrong = { "ShieldBlockStrong", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCharacterAnimInstance, ShieldBlockStrong), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ShieldBlockStrong_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ShieldBlockStrong_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentSpeedAndDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentForwardDirectionInputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurrentDirectionInputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsFight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsAttackButtonWhenAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ComboCnt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_IsLockOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_KnockDown_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_CurStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Cur_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Cur_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_StaminaUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_F0_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FL45_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FL90_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FR45_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_FR90_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_B180_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_BL45_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollIdle_BR45_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_F0_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FL45_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FL90_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FR45_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_FR90_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_B180_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_BL45_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_RollCombat_BR45_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_BackStep_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_LightAttackMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_HeavyAttackMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_GuardBreakMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ParryMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Execution1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Execution2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Execution_Back,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_Issen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactStrong1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactStrong2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactStrong3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ImpactBack1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ShieldBlockWeak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::NewProp_ShieldBlockStrong,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerCharacterAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::ClassParams = {
		&UPlayerCharacterAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerCharacterAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerCharacterAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerCharacterAnimInstance, 853265226);
	template<> UE4_PORTFOLIO2_SL_API UClass* StaticClass<UPlayerCharacterAnimInstance>()
	{
		return UPlayerCharacterAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerCharacterAnimInstance(Z_Construct_UClass_UPlayerCharacterAnimInstance, &UPlayerCharacterAnimInstance::StaticClass, TEXT("/Script/UE4_Portfolio2_SL"), TEXT("UPlayerCharacterAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCharacterAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
