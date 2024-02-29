// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EQSNavigationSystem/Public/EQSNavEnvQueryGenerator_TriangleTessellation.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQSNavEnvQueryGenerator_TriangleTessellation() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EQSNAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation();
	EQSNAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EQSNavigationSystem();
// End Cross Module References
	void UEQSNavEnvQueryGenerator_TriangleTessellation::StaticRegisterNativesUEQSNavEnvQueryGenerator_TriangleTessellation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEQSNavEnvQueryGenerator_TriangleTessellation);
	UClass* Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_NoRegister()
	{
		return UEQSNavEnvQueryGenerator_TriangleTessellation::StaticClass();
	}
	struct Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CircleRadius_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CircleRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleEdge_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleEdge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArcDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArcDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArcAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArcAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CircleCenter_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CircleCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeContextLocation_MetaData[];
#endif
		static void NewProp_bIncludeContextLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeContextLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefineArc_MetaData[];
#endif
		static void NewProp_bDefineArc_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefineArc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints,
		(UObject* (*)())Z_Construct_UPackage__Script_EQSNavigationSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb7\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xb0\xa2\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n * https://www.researchgate.net/figure/Equilateral-triangle-tessellation-packing-into-a-coverage-circle-R-976-m_fig4_220471434\n */" },
#endif
		{ "DisplayName", "Points: Triangle Tessellation" },
		{ "IncludePath", "EQSNavEnvQueryGenerator_TriangleTessellation.h" },
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_TriangleTessellation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb7\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xb0\xa2\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nhttps://www.researchgate.net/figure/Equilateral-triangle-tessellation-packing-into-a-coverage-circle-R-976-m_fig4_220471434" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_CircleRadius_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xc5\xb7\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_TriangleTessellation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xb7\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_CircleRadius = { "CircleRadius", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryGenerator_TriangleTessellation, CircleRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_CircleRadius_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_CircleRadius_MetaData) }; // 1126986503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_TriangleEdge_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xc7\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xb0\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_TriangleTessellation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd7\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xc7\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xb0\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_TriangleEdge = { "TriangleEdge", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryGenerator_TriangleTessellation, TriangleEdge), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_TriangleEdge_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_TriangleEdge_MetaData) }; // 1126986503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_ArcDirection_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "EditCondition", "bDefineArc" },
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_TriangleTessellation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_ArcDirection = { "ArcDirection", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryGenerator_TriangleTessellation, ArcDirection), Z_Construct_UScriptStruct_FEnvDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_ArcDirection_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_ArcDirection_MetaData) }; // 3869200636
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_ArcAngle_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xc3\xa4\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_TriangleTessellation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc3\xa4\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_ArcAngle = { "ArcAngle", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryGenerator_TriangleTessellation, ArcAngle), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_ArcAngle_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_ArcAngle_MetaData) }; // 1126986503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_CircleCenter_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_TriangleTessellation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_CircleCenter = { "CircleCenter", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryGenerator_TriangleTessellation, CircleCenter), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_CircleCenter_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_CircleCenter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bIncludeContextLocation_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd CircleCenter\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_TriangleTessellation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd CircleCenter\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	void Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bIncludeContextLocation_SetBit(void* Obj)
	{
		((UEQSNavEnvQueryGenerator_TriangleTessellation*)Obj)->bIncludeContextLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bIncludeContextLocation = { "bIncludeContextLocation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEQSNavEnvQueryGenerator_TriangleTessellation), &Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bIncludeContextLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bIncludeContextLocation_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bIncludeContextLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bDefineArc_MetaData[] = {
		{ "Category", "Generator" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_TriangleTessellation.h" },
	};
#endif
	void Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bDefineArc_SetBit(void* Obj)
	{
		((UEQSNavEnvQueryGenerator_TriangleTessellation*)Obj)->bDefineArc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bDefineArc = { "bDefineArc", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEQSNavEnvQueryGenerator_TriangleTessellation), &Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bDefineArc_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bDefineArc_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bDefineArc_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_CircleRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_TriangleEdge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_ArcDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_ArcAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_CircleCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bIncludeContextLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bDefineArc,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEQSNavEnvQueryGenerator_TriangleTessellation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::ClassParams = {
		&UEQSNavEnvQueryGenerator_TriangleTessellation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::Class_MetaDataParams), Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation()
	{
		if (!Z_Registration_Info_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation.OuterSingleton, Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation.OuterSingleton;
	}
	template<> EQSNAVIGATIONSYSTEM_API UClass* StaticClass<UEQSNavEnvQueryGenerator_TriangleTessellation>()
	{
		return UEQSNavEnvQueryGenerator_TriangleTessellation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEQSNavEnvQueryGenerator_TriangleTessellation);
	UEQSNavEnvQueryGenerator_TriangleTessellation::~UEQSNavEnvQueryGenerator_TriangleTessellation() {}
	struct Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryGenerator_TriangleTessellation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryGenerator_TriangleTessellation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation, UEQSNavEnvQueryGenerator_TriangleTessellation::StaticClass, TEXT("UEQSNavEnvQueryGenerator_TriangleTessellation"), &Z_Registration_Info_UClass_UEQSNavEnvQueryGenerator_TriangleTessellation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEQSNavEnvQueryGenerator_TriangleTessellation), 4241919936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryGenerator_TriangleTessellation_h_3914073653(TEXT("/Script/EQSNavigationSystem"),
		Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryGenerator_TriangleTessellation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryGenerator_TriangleTessellation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
