// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patronprototype/BloqueExplosivo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueExplosivo() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloque();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloqueExplosivo();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloqueExplosivo_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patronprototype();
// End Cross Module References

// Begin Class ABloqueExplosivo
void ABloqueExplosivo::StaticRegisterNativesABloqueExplosivo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueExplosivo);
UClass* Z_Construct_UClass_ABloqueExplosivo_NoRegister()
{
	return ABloqueExplosivo::StaticClass();
}
struct Z_Construct_UClass_ABloqueExplosivo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueExplosivo.h" },
		{ "ModuleRelativePath", "BloqueExplosivo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionPreview_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Efecto visual previo a la explosi\xef\xbf\xbdn\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloqueExplosivo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Efecto visual previo a la explosi\xef\xbf\xbdn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionFinal_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Part\xef\xbf\xbd""cula que representa la explosi\xef\xbf\xbdn final\n" },
#endif
		{ "ModuleRelativePath", "BloqueExplosivo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Part\xef\xbf\xbd""cula que representa la explosi\xef\xbf\xbdn final" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadioExplosion_MetaData[] = {
		{ "Category", "Explosivo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Radio de la explosi\xef\xbf\xbdn\n" },
#endif
		{ "ModuleRelativePath", "BloqueExplosivo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radio de la explosi\xef\xbf\xbdn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionPreview;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionFinal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadioExplosion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueExplosivo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueExplosivo_Statics::NewProp_ExplosionPreview = { "ExplosionPreview", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueExplosivo, ExplosionPreview), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionPreview_MetaData), NewProp_ExplosionPreview_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueExplosivo_Statics::NewProp_ExplosionFinal = { "ExplosionFinal", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueExplosivo, ExplosionFinal), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionFinal_MetaData), NewProp_ExplosionFinal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueExplosivo_Statics::NewProp_RadioExplosion = { "RadioExplosion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueExplosivo, RadioExplosion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadioExplosion_MetaData), NewProp_RadioExplosion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueExplosivo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueExplosivo_Statics::NewProp_ExplosionPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueExplosivo_Statics::NewProp_ExplosionFinal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueExplosivo_Statics::NewProp_RadioExplosion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueExplosivo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueExplosivo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Patronprototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueExplosivo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueExplosivo_Statics::ClassParams = {
	&ABloqueExplosivo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueExplosivo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueExplosivo_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueExplosivo_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueExplosivo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueExplosivo()
{
	if (!Z_Registration_Info_UClass_ABloqueExplosivo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueExplosivo.OuterSingleton, Z_Construct_UClass_ABloqueExplosivo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueExplosivo.OuterSingleton;
}
template<> PATRONPROTOTYPE_API UClass* StaticClass<ABloqueExplosivo>()
{
	return ABloqueExplosivo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueExplosivo);
ABloqueExplosivo::~ABloqueExplosivo() {}
// End Class ABloqueExplosivo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueExplosivo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueExplosivo, ABloqueExplosivo::StaticClass, TEXT("ABloqueExplosivo"), &Z_Registration_Info_UClass_ABloqueExplosivo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueExplosivo), 1895440173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueExplosivo_h_719445205(TEXT("/Script/Patronprototype"),
	Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueExplosivo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueExplosivo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
