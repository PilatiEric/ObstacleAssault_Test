// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObstacleAssultCharacter.h"

#ifdef OBSTACLEASSULT_ObstacleAssultCharacter_generated_h
#error "ObstacleAssultCharacter.generated.h already included, missing '#pragma once' in ObstacleAssultCharacter.h"
#endif
#define OBSTACLEASSULT_ObstacleAssultCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AObstacleAssultCharacter *************************************************
#define FID_game_dev_unreal_CppCourseProjects_UnrealLessons_2_Obstacle_Assault_ObstacleAssult_Source_ObstacleAssult_ObstacleAssultCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


OBSTACLEASSULT_API UClass* Z_Construct_UClass_AObstacleAssultCharacter_NoRegister();

#define FID_game_dev_unreal_CppCourseProjects_UnrealLessons_2_Obstacle_Assault_ObstacleAssult_Source_ObstacleAssult_ObstacleAssultCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstacleAssultCharacter(); \
	friend struct Z_Construct_UClass_AObstacleAssultCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBSTACLEASSULT_API UClass* Z_Construct_UClass_AObstacleAssultCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AObstacleAssultCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstacleAssult"), Z_Construct_UClass_AObstacleAssultCharacter_NoRegister) \
	DECLARE_SERIALIZER(AObstacleAssultCharacter)


#define FID_game_dev_unreal_CppCourseProjects_UnrealLessons_2_Obstacle_Assault_ObstacleAssult_Source_ObstacleAssult_ObstacleAssultCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AObstacleAssultCharacter(AObstacleAssultCharacter&&) = delete; \
	AObstacleAssultCharacter(const AObstacleAssultCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacleAssultCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacleAssultCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AObstacleAssultCharacter) \
	NO_API virtual ~AObstacleAssultCharacter();


#define FID_game_dev_unreal_CppCourseProjects_UnrealLessons_2_Obstacle_Assault_ObstacleAssult_Source_ObstacleAssult_ObstacleAssultCharacter_h_21_PROLOG
#define FID_game_dev_unreal_CppCourseProjects_UnrealLessons_2_Obstacle_Assault_ObstacleAssult_Source_ObstacleAssult_ObstacleAssultCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_game_dev_unreal_CppCourseProjects_UnrealLessons_2_Obstacle_Assault_ObstacleAssult_Source_ObstacleAssult_ObstacleAssultCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_game_dev_unreal_CppCourseProjects_UnrealLessons_2_Obstacle_Assault_ObstacleAssult_Source_ObstacleAssult_ObstacleAssultCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_game_dev_unreal_CppCourseProjects_UnrealLessons_2_Obstacle_Assault_ObstacleAssult_Source_ObstacleAssult_ObstacleAssultCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AObstacleAssultCharacter;

// ********** End Class AObstacleAssultCharacter ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_game_dev_unreal_CppCourseProjects_UnrealLessons_2_Obstacle_Assault_ObstacleAssult_Source_ObstacleAssult_ObstacleAssultCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
