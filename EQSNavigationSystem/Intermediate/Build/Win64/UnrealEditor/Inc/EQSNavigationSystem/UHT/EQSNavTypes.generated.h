// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EQSNavTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EQSNAVIGATIONSYSTEM_EQSNavTypes_generated_h
#error "EQSNavTypes.generated.h already included, missing '#pragma once' in EQSNavTypes.h"
#endif
#define EQSNAVIGATIONSYSTEM_EQSNavTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EQSEnvTest_Plugins_EQSNavigationSystem_Source_EQSNavigationSystem_Public_EQSNavTypes_h


#define FOREACH_ENUM_EEQSNAVPATHFOLLOWINGSTATUS(op) \
	op(EEQSNavPathFollowingStatus::Idle) \
	op(EEQSNavPathFollowingStatus::Moving) 

enum class EEQSNavPathFollowingStatus : uint8;
template<> struct TIsUEnumClass<EEQSNavPathFollowingStatus> { enum { Value = true }; };
template<> EQSNAVIGATIONSYSTEM_API UEnum* StaticEnum<EEQSNavPathFollowingStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
