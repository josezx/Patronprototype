// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patronprototype/PatronprototypeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatronprototypeCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_APatronprototypeCharacter();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_APatronprototypeCharacter_NoRegister();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_UObservadorBomba_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patronprototype();
// End Cross Module References

// Begin Class APatronprototypeCharacter
void APatronprototypeCharacter::StaticRegisterNativesAPatronprototypeCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APatronprototypeCharacter);
UClass* Z_Construct_UClass_APatronprototypeCharacter_NoRegister()
{
	return APatronprototypeCharacter::StaticClass();
}
struct Z_Construct_UClass_APatronprototypeCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PatronprototypeCharacter.h" },
		{ "ModuleRelativePath", "PatronprototypeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PatronprototypeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PatronprototypeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "PatronprototypeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "PatronprototypeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "PatronprototypeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "PatronprototypeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SonidoAdvertencia_MetaData[] = {
		{ "Category", "Sonidos" },
		{ "ModuleRelativePath", "PatronprototypeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SonidoPeligroInminente_MetaData[] = {
		{ "Category", "Sonidos" },
		{ "ModuleRelativePath", "PatronprototypeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EfectoEscudo_MetaData[] = {
		{ "Category", "Efecto" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PatronprototypeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Salud_MetaData[] = {
		{ "Category", "Salud" },
		{ "ModuleRelativePath", "PatronprototypeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bArmaduraActiva_MetaData[] = {
		{ "Category", "Estado" },
		{ "ModuleRelativePath", "PatronprototypeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SonidoAdvertencia;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SonidoPeligroInminente;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EfectoEscudo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Salud;
	static void NewProp_bArmaduraActiva_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bArmaduraActiva;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatronprototypeCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatronprototypeCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatronprototypeCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatronprototypeCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatronprototypeCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatronprototypeCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatronprototypeCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_SonidoAdvertencia = { "SonidoAdvertencia", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatronprototypeCharacter, SonidoAdvertencia), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SonidoAdvertencia_MetaData), NewProp_SonidoAdvertencia_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_SonidoPeligroInminente = { "SonidoPeligroInminente", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatronprototypeCharacter, SonidoPeligroInminente), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SonidoPeligroInminente_MetaData), NewProp_SonidoPeligroInminente_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_EfectoEscudo = { "EfectoEscudo", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatronprototypeCharacter, EfectoEscudo), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EfectoEscudo_MetaData), NewProp_EfectoEscudo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_Salud = { "Salud", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatronprototypeCharacter, Salud), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Salud_MetaData), NewProp_Salud_MetaData) };
void Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_bArmaduraActiva_SetBit(void* Obj)
{
	((APatronprototypeCharacter*)Obj)->bArmaduraActiva = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_bArmaduraActiva = { "bArmaduraActiva", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APatronprototypeCharacter), &Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_bArmaduraActiva_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bArmaduraActiva_MetaData), NewProp_bArmaduraActiva_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APatronprototypeCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_SonidoAdvertencia,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_SonidoPeligroInminente,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_EfectoEscudo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_Salud,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronprototypeCharacter_Statics::NewProp_bArmaduraActiva,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APatronprototypeCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APatronprototypeCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Patronprototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APatronprototypeCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APatronprototypeCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UObservadorBomba_NoRegister, (int32)VTABLE_OFFSET(APatronprototypeCharacter, IObservadorBomba), false },  // 3300101456
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APatronprototypeCharacter_Statics::ClassParams = {
	&APatronprototypeCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APatronprototypeCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APatronprototypeCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APatronprototypeCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APatronprototypeCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APatronprototypeCharacter()
{
	if (!Z_Registration_Info_UClass_APatronprototypeCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APatronprototypeCharacter.OuterSingleton, Z_Construct_UClass_APatronprototypeCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APatronprototypeCharacter.OuterSingleton;
}
template<> PATRONPROTOTYPE_API UClass* StaticClass<APatronprototypeCharacter>()
{
	return APatronprototypeCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APatronprototypeCharacter);
APatronprototypeCharacter::~APatronprototypeCharacter() {}
// End Class APatronprototypeCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_PatronprototypeCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APatronprototypeCharacter, APatronprototypeCharacter::StaticClass, TEXT("APatronprototypeCharacter"), &Z_Registration_Info_UClass_APatronprototypeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APatronprototypeCharacter), 298045625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_PatronprototypeCharacter_h_3482668192(TEXT("/Script/Patronprototype"),
	Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_PatronprototypeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_PatronprototypeCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
