// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloneable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATRONPROTOTYPE_Cloneable_generated_h
#error "Cloneable.generated.h already included, missing '#pragma once' in Cloneable.h"
#endif
#define PATRONPROTOTYPE_Cloneable_generated_h

#define FID_Patronprototype_Source_Patronprototype_Cloneable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PATRONPROTOTYPE_API UCloneable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCloneable(UCloneable&&); \
	UCloneable(const UCloneable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PATRONPROTOTYPE_API, UCloneable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCloneable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCloneable) \
	PATRONPROTOTYPE_API virtual ~UCloneable();


#define FID_Patronprototype_Source_Patronprototype_Cloneable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCloneable(); \
	friend struct Z_Construct_UClass_UCloneable_Statics; \
public: \
	DECLARE_CLASS(UCloneable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Patronprototype"), PATRONPROTOTYPE_API) \
	DECLARE_SERIALIZER(UCloneable)


#define FID_Patronprototype_Source_Patronprototype_Cloneable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Patronprototype_Source_Patronprototype_Cloneable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Patronprototype_Source_Patronprototype_Cloneable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Patronprototype_Source_Patronprototype_Cloneable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICloneable() {} \
public: \
	typedef UCloneable UClassType; \
	typedef ICloneable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Patronprototype_Source_Patronprototype_Cloneable_h_10_PROLOG
#define FID_Patronprototype_Source_Patronprototype_Cloneable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Patronprototype_Source_Patronprototype_Cloneable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATRONPROTOTYPE_API UClass* StaticClass<class UCloneable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Patronprototype_Source_Patronprototype_Cloneable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
