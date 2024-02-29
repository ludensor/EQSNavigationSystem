// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EQSNavigationSystem/Public/EQSNavEnvQueryGenerator_Hemisphere.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQSNavEnvQueryGenerator_Hemisphere() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EQSNAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere();
	EQSNAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EQSNavigationSystem();
// End Cross Module References
	void UEQSNavEnvQueryGenerator_Hemisphere::StaticRegisterNativesUEQSNavEnvQueryGenerator_Hemisphere()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEQSNavEnvQueryGenerator_Hemisphere);
	UClass* Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_NoRegister()
	{
		return UEQSNavEnvQueryGenerator_Hemisphere::StaticClass();
	}
	struct Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceBetween_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceBetween;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfRings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NumberOfRings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArcDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArcDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArcAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArcAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConeVerticalAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConeVerticalAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterOffsetZ_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterOffsetZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CenterActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefineArc_MetaData[];
#endif
		static void NewProp_bDefineArc_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefineArc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_EQSNavigationSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "DisplayName", "Points: Hemisphere" },
		{ "IncludePath", "EQSNavEnvQueryGenerator_Hemisphere.h" },
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_Hemisphere.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdd\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_Hemisphere.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryGenerator_Hemisphere, Radius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_Radius_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_Radius_MetaData) }; // 1126986503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_SpaceBetween_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_Hemisphere.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_SpaceBetween = { "SpaceBetween", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryGenerator_Hemisphere, SpaceBetween), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_SpaceBetween_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_SpaceBetween_MetaData) }; // 1126986503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_NumberOfRings_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. 1 \xef\xbf\xbd\xcc\xbb\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_Hemisphere.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. 1 \xef\xbf\xbd\xcc\xbb\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_NumberOfRings = { "NumberOfRings", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryGenerator_Hemisphere, NumberOfRings), Z_Construct_UScriptStruct_FAIDataProviderIntValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_NumberOfRings_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_NumberOfRings_MetaData) }; // 2138384644
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_ArcDirection_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "EditCondition", "bDefineArc" },
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_Hemisphere.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_ArcDirection = { "ArcDirection", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryGenerator_Hemisphere, ArcDirection), Z_Construct_UScriptStruct_FEnvDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_ArcDirection_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_ArcDirection_MetaData) }; // 3869200636
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_ArcAngle_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_Hemisphere.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_ArcAngle = { "ArcAngle", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryGenerator_Hemisphere, ArcAngle), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_ArcAngle_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_ArcAngle_MetaData) }; // 1126986503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_ConeVerticalAngle_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_Hemisphere.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_ConeVerticalAngle = { "ConeVerticalAngle", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryGenerator_Hemisphere, ConeVerticalAngle), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_ConeVerticalAngle_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_ConeVerticalAngle_MetaData) }; // 1126986503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_CenterOffsetZ_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** CenterActor\xef\xbf\xbd\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd CenterOffsetZ \xef\xbf\xbd\xef\xbf\xbd\xc5\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_Hemisphere.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CenterActor\xef\xbf\xbd\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd CenterOffsetZ \xef\xbf\xbd\xef\xbf\xbd\xc5\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_CenterOffsetZ = { "CenterOffsetZ", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryGenerator_Hemisphere, CenterOffsetZ), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_CenterOffsetZ_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_CenterOffsetZ_MetaData) }; // 1126986503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_CenterActor_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_Hemisphere.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_CenterActor = { "CenterActor", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEQSNavEnvQueryGenerator_Hemisphere, CenterActor), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_CenterActor_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_CenterActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_bDefineArc_MetaData[] = {
		{ "Category", "Generator" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/EQSNavEnvQueryGenerator_Hemisphere.h" },
	};
#endif
	void Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_bDefineArc_SetBit(void* Obj)
	{
		((UEQSNavEnvQueryGenerator_Hemisphere*)Obj)->bDefineArc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_bDefineArc = { "bDefineArc", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEQSNavEnvQueryGenerator_Hemisphere), &Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_bDefineArc_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_bDefineArc_MetaData), Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_bDefineArc_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_SpaceBetween,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_NumberOfRings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_ArcDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_ArcAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_ConeVerticalAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_CenterOffsetZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_CenterActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::NewProp_bDefineArc,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEQSNavEnvQueryGenerator_Hemisphere>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::ClassParams = {
		&UEQSNavEnvQueryGenerator_Hemisphere::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::Class_MetaDataParams), Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere()
	{
		if (!Z_Registration_Info_UClass_UEQSNavEnvQueryGenerator_Hemisphere.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEQSNavEnvQueryGenerator_Hemisphere.OuterSingleton, Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEQSNavEnvQueryGenerator_Hemisphere.OuterSingleton;
	}
	template<> EQSNAVIGATIONSYSTEM_API UClass* StaticClass<UEQSNavEnvQueryGenerator_Hemisphere>()
	{
		return UEQSNavEnvQueryGenerator_Hemisphere::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEQSNavEnvQueryGenerator_Hemisphere);
	UEQSNavEnvQueryGenerator_Hemisphere::~UEQSNavEnvQueryGenerator_Hemisphere() {}
	struct Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryGenerator_Hemisphere_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryGenerator_Hemisphere_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEQSNavEnvQueryGenerator_Hemisphere, UEQSNavEnvQueryGenerator_Hemisphere::StaticClass, TEXT("UEQSNavEnvQueryGenerator_Hemisphere"), &Z_Registration_Info_UClass_UEQSNavEnvQueryGenerator_Hemisphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEQSNavEnvQueryGenerator_Hemisphere), 3219297757U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryGenerator_Hemisphere_h_685675608(TEXT("/Script/EQSNavigationSystem"),
		Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryGenerator_Hemisphere_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavEnvQueryGenerator_Hemisphere_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
