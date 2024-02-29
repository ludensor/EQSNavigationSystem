// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EQSNavigationSystem/Public/EQSNavEnvQueryGenerator_Voxel.h"
#include "DataProviders/AIDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQSNavEnvQueryGenerator_Voxel() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EQSNAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel();
	EQSNAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EQSNavigationSystem();
// End Cross Module References
	void UEQSNavEnvQueryGenerator_Voxel::StaticRegisterNativesUEQSNavEnvQueryGenerator_Voxel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEQSNavEnvQueryGenerator_Voxel);
	UClass* Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_NoRegister()
	{
		return UEQSNavEnvQueryGenerator_Voxel::StaticClass();
	}
	struct Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalSpaceBetween_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalSpaceBetween;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalSpaceBetween_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalSpaceBetween;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerateAround_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GenerateAround;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_EQSNavigationSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "DisplayName", "Points: Voxel" },
		{ "IncludePath", "EQSNavEnvQueryGenerator_Voxel.h" },
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_Voxel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe7\xb0\xa2\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "DisplayName", "Grid Half Size" },
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_Voxel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe7\xb0\xa2\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryGenerator_Voxel, GridSize), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_GridSize_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_GridSize_MetaData) }; // 1126986503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_HorizontalSpaceBetween_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_Voxel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_HorizontalSpaceBetween = { "HorizontalSpaceBetween", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryGenerator_Voxel, HorizontalSpaceBetween), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_HorizontalSpaceBetween_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_HorizontalSpaceBetween_MetaData) }; // 1126986503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_VerticalSpaceBetween_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_Voxel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_VerticalSpaceBetween = { "VerticalSpaceBetween", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryGenerator_Voxel, VerticalSpaceBetween), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_VerticalSpaceBetween_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_VerticalSpaceBetween_MetaData) }; // 1126986503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_GenerateAround_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_Voxel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_GenerateAround = { "GenerateAround", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryGenerator_Voxel, GenerateAround), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_GenerateAround_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_GenerateAround_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_HorizontalSpaceBetween,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_VerticalSpaceBetween,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::NewProp_GenerateAround,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEQSNavEnvQueryGenerator_Voxel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::ClassParams = {
		&UEQSNavEnvQueryGenerator_Voxel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::Class_MetaDataParams), Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel()
	{
		if (!Z_Registration_Info_UClass_UEQSNavEnvQueryGenerator_Voxel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEQSNavEnvQueryGenerator_Voxel.OuterSingleton, Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEQSNavEnvQueryGenerator_Voxel.OuterSingleton;
	}
	template<> EQSNAVIGATIONSYSTEM_API UClass* StaticClass<UEQSNavEnvQueryGenerator_Voxel>()
	{
		return UEQSNavEnvQueryGenerator_Voxel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEQSNavEnvQueryGenerator_Voxel);
	UEQSNavEnvQueryGenerator_Voxel::~UEQSNavEnvQueryGenerator_Voxel() {}
	struct Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryGenerator_Voxel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryGenerator_Voxel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEQSNavEnvQueryGenerator_Voxel, UEQSNavEnvQueryGenerator_Voxel::StaticClass, TEXT("UEQSNavEnvQueryGenerator_Voxel"), &Z_Registration_Info_UClass_UEQSNavEnvQueryGenerator_Voxel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEQSNavEnvQueryGenerator_Voxel), 2430714296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryGenerator_Voxel_h_1185735778(TEXT("/Script/EQSNavigationSystem"),
		Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryGenerator_Voxel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryGenerator_Voxel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
