// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEVEL_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define LEVEL_MyCharacter_generated_h

#define Level_Source_Level_MyCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPitch) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pitch(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execYaw) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Yaw(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveLeft) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveLeft(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveBack) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveBack(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_amount); \
		P_NATIVE_END; \
	}


#define Level_Source_Level_MyCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPitch) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pitch(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execYaw) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Yaw(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveLeft) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveLeft(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveBack) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveBack(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_amount); \
		P_NATIVE_END; \
	}


#define Level_Source_Level_MyCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Level"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define Level_Source_Level_MyCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Level"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define Level_Source_Level_MyCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public:


#define Level_Source_Level_MyCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter)


#define Level_Source_Level_MyCharacter_h_16_PRIVATE_PROPERTY_OFFSET
#define Level_Source_Level_MyCharacter_h_13_PROLOG
#define Level_Source_Level_MyCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Level_Source_Level_MyCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	Level_Source_Level_MyCharacter_h_16_RPC_WRAPPERS \
	Level_Source_Level_MyCharacter_h_16_INCLASS \
	Level_Source_Level_MyCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Level_Source_Level_MyCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Level_Source_Level_MyCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	Level_Source_Level_MyCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Level_Source_Level_MyCharacter_h_16_INCLASS_NO_PURE_DECLS \
	Level_Source_Level_MyCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVEL_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Level_Source_Level_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
