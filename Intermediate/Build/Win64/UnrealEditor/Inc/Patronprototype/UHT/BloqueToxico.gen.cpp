// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patronprototype/BloqueToxico.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueToxico() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloque();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloqueToxico();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloqueToxico_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patronprototype();
// End Cross Module References

// Begin Class ABloqueToxico
void ABloqueToxico::StaticRegisterNativesABloqueToxico()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueToxico);
UClass* Z_Construct_UClass_ABloqueToxico_NoRegister()
{
	return ABloqueToxico::StaticClass();
}
struct Z_Construct_UClass_ABloqueToxico_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueToxico.h" },
		{ "ModuleRelativePath", "BloqueToxico.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SistemaParticulas_MetaData[] = {
		{ "Category", "Toxico" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sistema de part\xef\xbf\xbd""culas para representar toxicidad visualmente\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloqueToxico.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sistema de part\xef\xbf\xbd""culas para representar toxicidad visualmente" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NivelToxicidad_MetaData[] = {
		{ "Category", "Toxico" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Nivel de toxicidad (puede afectar al jugador si se implementa)\n" },
#endif
		{ "ModuleRelativePath", "BloqueToxico.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Nivel de toxicidad (puede afectar al jugador si se implementa)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SistemaParticulas;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NivelToxicidad;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueToxico>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueToxico_Statics::NewProp_SistemaParticulas = { "SistemaParticulas", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueToxico, SistemaParticulas), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SistemaParticulas_MetaData), NewProp_SistemaParticulas_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueToxico_Statics::NewProp_NivelToxicidad = { "NivelToxicidad", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueToxico, NivelToxicidad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NivelToxicidad_MetaData), NewProp_NivelToxicidad_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueToxico_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueToxico_Statics::NewProp_SistemaParticulas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueToxico_Statics::NewProp_NivelToxicidad,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueToxico_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueToxico_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Patronprototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueToxico_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueToxico_Statics::ClassParams = {
	&ABloqueToxico::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueToxico_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueToxico_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueToxico_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueToxico_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueToxico()
{
	if (!Z_Registration_Info_UClass_ABloqueToxico.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueToxico.OuterSingleton, Z_Construct_UClass_ABloqueToxico_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueToxico.OuterSingleton;
}
template<> PATRONPROTOTYPE_API UClass* StaticClass<ABloqueToxico>()
{
	return ABloqueToxico::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueToxico);
ABloqueToxico::~ABloqueToxico() {}
// End Class ABloqueToxico

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueToxico_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueToxico, ABloqueToxico::StaticClass, TEXT("ABloqueToxico"), &Z_Registration_Info_UClass_ABloqueToxico, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueToxico), 489003274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueToxico_h_1317872579(TEXT("/Script/Patronprototype"),
	Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueToxico_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueToxico_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
