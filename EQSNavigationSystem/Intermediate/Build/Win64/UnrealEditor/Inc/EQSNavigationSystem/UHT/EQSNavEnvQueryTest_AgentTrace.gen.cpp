// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EQSNavigationSystem/Public/EQSNavEnvQueryTest_AgentTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQSNavEnvQueryTest_AgentTrace() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EQSNAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace();
	EQSNAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EQSNavigationSystem();
// End Cross Module References
	void UEQSNavEnvQueryTest_AgentTrace::StaticRegisterNativesUEQSNavEnvQueryTest_AgentTrace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEQSNavEnvQueryTest_AgentTrace);
	UClass* Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_NoRegister()
	{
		return UEQSNavEnvQueryTest_AgentTrace::StaticClass();
	}
	struct Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_EQSNavigationSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "EQSNavEnvQueryTest_AgentTrace.h" },
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryTest_AgentTrace.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryTest_AgentTrace.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryTest_AgentTrace, Context), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics::NewProp_Context_MetaData), Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics::NewProp_Context_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics::NewProp_Context,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEQSNavEnvQueryTest_AgentTrace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics::ClassParams = {
		&UEQSNavEnvQueryTest_AgentTrace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics::Class_MetaDataParams), Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace()
	{
		if (!Z_Registration_Info_UClass_UEQSNavEnvQueryTest_AgentTrace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEQSNavEnvQueryTest_AgentTrace.OuterSingleton, Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEQSNavEnvQueryTest_AgentTrace.OuterSingleton;
	}
	template<> EQSNAVIGATIONSYSTEM_API UClass* StaticClass<UEQSNavEnvQueryTest_AgentTrace>()
	{
		return UEQSNavEnvQueryTest_AgentTrace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEQSNavEnvQueryTest_AgentTrace);
	UEQSNavEnvQueryTest_AgentTrace::~UEQSNavEnvQueryTest_AgentTrace() {}
	struct Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryTest_AgentTrace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryTest_AgentTrace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEQSNavEnvQueryTest_AgentTrace, UEQSNavEnvQueryTest_AgentTrace::StaticClass, TEXT("UEQSNavEnvQueryTest_AgentTrace"), &Z_Registration_Info_UClass_UEQSNavEnvQueryTest_AgentTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEQSNavEnvQueryTest_AgentTrace), 3138365380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryTest_AgentTrace_h_943515243(TEXT("/Script/EQSNavigationSystem"),
		Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryTest_AgentTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryTest_AgentTrace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
