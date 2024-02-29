// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EQSNavigationSystem/Public/EQSNavTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQSNavTypes() {}
// Cross Module References
	EQSNAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_EQSNavigationSystem_EEQSNavPathFollowingStatus();
	UPackage* Z_Construct_UPackage__Script_EQSNavigationSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEQSNavPathFollowingStatus;
	static UEnum* EEQSNavPathFollowingStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEQSNavPathFollowingStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEQSNavPathFollowingStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EQSNavigationSystem_EEQSNavPathFollowingStatus, (UObject*)Z_Construct_UPackage__Script_EQSNavigationSystem(), TEXT("EEQSNavPathFollowingStatus"));
		}
		return Z_Registration_Info_UEnum_EEQSNavPathFollowingStatus.OuterSingleton;
	}
	template<> EQSNAVIGATIONSYSTEM_API UEnum* StaticEnum<EEQSNavPathFollowingStatus>()
	{
		return EEQSNavPathFollowingStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_EQSNavigationSystem_EEQSNavPathFollowingStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EQSNavigationSystem_EEQSNavPathFollowingStatus_Statics::Enumerators[] = {
		{ "EEQSNavPathFollowingStatus::Idle", (int64)EEQSNavPathFollowingStatus::Idle },
		{ "EEQSNavPathFollowingStatus::Moving", (int64)EEQSNavPathFollowingStatus::Moving },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EQSNavigationSystem_EEQSNavPathFollowingStatus_Statics::Enum_MetaDataParams[] = {
		{ "Idle.Name", "EEQSNavPathFollowingStatus::Idle" },
		{ "ModuleRelativePath", "Public/EQSNavTypes.h" },
		{ "Moving.Name", "EEQSNavPathFollowingStatus::Moving" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EQSNavigationSystem_EEQSNavPathFollowingStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EQSNavigationSystem,
		nullptr,
		"EEQSNavPathFollowingStatus",
		"EEQSNavPathFollowingStatus",
		Z_Construct_UEnum_EQSNavigationSystem_EEQSNavPathFollowingStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EQSNavigationSystem_EEQSNavPathFollowingStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EQSNavigationSystem_EEQSNavPathFollowingStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EQSNavigationSystem_EEQSNavPathFollowingStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_EQSNavigationSystem_EEQSNavPathFollowingStatus()
	{
		if (!Z_Registration_Info_UEnum_EEQSNavPathFollowingStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEQSNavPathFollowingStatus.InnerSingleton, Z_Construct_UEnum_EQSNavigationSystem_EEQSNavPathFollowingStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEQSNavPathFollowingStatus.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavTypes_h_Statics::EnumInfo[] = {
		{ EEQSNavPathFollowingStatus_StaticEnum, TEXT("EEQSNavPathFollowingStatus"), &Z_Registration_Info_UEnum_EEQSNavPathFollowingStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4240300755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavTypes_h_2053347850(TEXT("/Script/EQSNavigationSystem"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
