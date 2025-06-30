// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BloqueCamuflada.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PATRONPROTOTYPE_BloqueCamuflada_generated_h
#error "BloqueCamuflada.generated.h already included, missing '#pragma once' in BloqueCamuflada.h"
#endif
#define PATRONPROTOTYPE_BloqueCamuflada_generated_h

#define FID_Patronprototype_Source_Patronprototype_BloqueCamuflada_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAlColisionar);


#define FID_Patronprototype_Source_Patronprototype_BloqueCamuflada_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABloqueCamuflada(); \
	friend struct Z_Construct_UClass_ABloqueCamuflada_Statics; \
public: \
	DECLARE_CLASS(ABloqueCamuflada, ABloque, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Patronprototype"), NO_API) \
	DECLARE_SERIALIZER(ABloqueCamuflada)


#define FID_Patronprototype_Source_Patronprototype_BloqueCamuflada_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABloqueCamuflada(ABloqueCamuflada&&); \
	ABloqueCamuflada(const ABloqueCamuflada&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloqueCamuflada); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloqueCamuflada); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABloqueCamuflada) \
	NO_API virtual ~ABloqueCamuflada();


#define FID_Patronprototype_Source_Patronprototype_BloqueCamuflada_h_15_PROLOG
#define FID_Patronprototype_Source_Patronprototype_BloqueCamuflada_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Patronprototype_Source_Patronprototype_BloqueCamuflada_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Patronprototype_Source_Patronprototype_BloqueCamuflada_h_18_INCLASS_NO_PURE_DECLS \
	FID_Patronprototype_Source_Patronprototype_BloqueCamuflada_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATRONPROTOTYPE_API UClass* StaticClass<class ABloqueCamuflada>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Patronprototype_Source_Patronprototype_BloqueCamuflada_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
