// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EQSNavigationSystem/Public/EQSNavAgentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQSNavAgentInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	EQSNAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UEQSNavAgentInterface();
	EQSNAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UEQSNavAgentInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EQSNavigationSystem();
// End Cross Module References
	void UEQSNavAgentInterface::StaticRegisterNativesUEQSNavAgentInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEQSNavAgentInterface);
	UClass* Z_Construct_UClass_UEQSNavAgentInterface_NoRegister()
	{
		return UEQSNavAgentInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEQSNavAgentInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEQSNavAgentInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EQSNavigationSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavAgentInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavAgentInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/EQSNavAgentInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEQSNavAgentInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEQSNavAgentInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEQSNavAgentInterface_Statics::ClassParams = {
		&UEQSNavAgentInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavAgentInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEQSNavAgentInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEQSNavAgentInterface()
	{
		if (!Z_Registration_Info_UClass_UEQSNavAgentInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEQSNavAgentInterface.OuterSingleton, Z_Construct_UClass_UEQSNavAgentInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEQSNavAgentInterface.OuterSingleton;
	}
	template<> EQSNAVIGATIONSYSTEM_API UClass* StaticClass<UEQSNavAgentInterface>()
	{
		return UEQSNavAgentInterface::StaticClass();
	}
	UEQSNavAgentInterface::UEQSNavAgentInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEQSNavAgentInterface);
	UEQSNavAgentInterface::~UEQSNavAgentInterface() {}
	struct Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavAgentInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavAgentInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEQSNavAgentInterface, UEQSNavAgentInterface::StaticClass, TEXT("UEQSNavAgentInterface"), &Z_Registration_Info_UClass_UEQSNavAgentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEQSNavAgentInterface), 521308914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavAgentInterface_h_809168648(TEXT("/Script/EQSNavigationSystem"),
		Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavAgentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavAgentInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
