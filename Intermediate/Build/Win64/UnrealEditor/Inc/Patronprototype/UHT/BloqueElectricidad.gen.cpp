// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patronprototype/BloqueElectricidad.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueElectricidad() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloque();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloqueElectricidad();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloqueElectricidad_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patronprototype();
// End Cross Module References

// Begin Class ABloqueElectricidad
void ABloqueElectricidad::StaticRegisterNativesABloqueElectricidad()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueElectricidad);
UClass* Z_Construct_UClass_ABloqueElectricidad_NoRegister()
{
	return ABloqueElectricidad::StaticClass();
}
struct Z_Construct_UClass_ABloqueElectricidad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueElectricidad.h" },
		{ "ModuleRelativePath", "BloqueElectricidad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "BloqueElectricidad" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sistema de part\xef\xbf\xbd""culas para efectos visuales el\xef\xbf\xbd""ctricos\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloqueElectricidad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sistema de part\xef\xbf\xbd""culas para efectos visuales el\xef\xbf\xbd""ctricos" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Voltaje_MetaData[] = {
		{ "Category", "Electricidad" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Voltaje del bloque el\xef\xbf\xbd""ctrico\n" },
#endif
		{ "ModuleRelativePath", "BloqueElectricidad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Voltaje del bloque el\xef\xbf\xbd""ctrico" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Voltaje;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueElectricidad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueElectricidad_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueElectricidad, ParticleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleSystem_MetaData), NewProp_ParticleSystem_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueElectricidad_Statics::NewProp_Voltaje = { "Voltaje", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueElectricidad, Voltaje), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Voltaje_MetaData), NewProp_Voltaje_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueElectricidad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueElectricidad_Statics::NewProp_ParticleSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueElectricidad_Statics::NewProp_Voltaje,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueElectricidad_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueElectricidad_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Patronprototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueElectricidad_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueElectricidad_Statics::ClassParams = {
	&ABloqueElectricidad::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueElectricidad_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueElectricidad_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueElectricidad_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueElectricidad_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueElectricidad()
{
	if (!Z_Registration_Info_UClass_ABloqueElectricidad.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueElectricidad.OuterSingleton, Z_Construct_UClass_ABloqueElectricidad_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueElectricidad.OuterSingleton;
}
template<> PATRONPROTOTYPE_API UClass* StaticClass<ABloqueElectricidad>()
{
	return ABloqueElectricidad::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueElectricidad);
ABloqueElectricidad::~ABloqueElectricidad() {}
// End Class ABloqueElectricidad

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueElectricidad_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueElectricidad, ABloqueElectricidad::StaticClass, TEXT("ABloqueElectricidad"), &Z_Registration_Info_UClass_ABloqueElectricidad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueElectricidad), 1771435557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueElectricidad_h_395359987(TEXT("/Script/Patronprototype"),
	Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueElectricidad_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueElectricidad_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
