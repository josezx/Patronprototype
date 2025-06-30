// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patronprototype/BloqueHielo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueHielo() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloque();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloqueHielo();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloqueHielo_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patronprototype();
// End Cross Module References

// Begin Class ABloqueHielo
void ABloqueHielo::StaticRegisterNativesABloqueHielo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueHielo);
UClass* Z_Construct_UClass_ABloqueHielo_NoRegister()
{
	return ABloqueHielo::StaticClass();
}
struct Z_Construct_UClass_ABloqueHielo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueHielo.h" },
		{ "ModuleRelativePath", "BloqueHielo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "BloqueHielo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Part\xef\xbf\xbd""culas de vapor estilo hielo\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloqueHielo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Part\xef\xbf\xbd""culas de vapor estilo hielo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Congelamiento_MetaData[] = {
		{ "Category", "Hielo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Nivel de congelamiento aplicado al jugador u objeto\n" },
#endif
		{ "ModuleRelativePath", "BloqueHielo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Nivel de congelamiento aplicado al jugador u objeto" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Congelamiento;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueHielo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueHielo_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueHielo, ParticleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleSystem_MetaData), NewProp_ParticleSystem_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueHielo_Statics::NewProp_Congelamiento = { "Congelamiento", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueHielo, Congelamiento), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Congelamiento_MetaData), NewProp_Congelamiento_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueHielo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueHielo_Statics::NewProp_ParticleSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueHielo_Statics::NewProp_Congelamiento,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueHielo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueHielo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Patronprototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueHielo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueHielo_Statics::ClassParams = {
	&ABloqueHielo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueHielo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueHielo_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueHielo_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueHielo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueHielo()
{
	if (!Z_Registration_Info_UClass_ABloqueHielo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueHielo.OuterSingleton, Z_Construct_UClass_ABloqueHielo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueHielo.OuterSingleton;
}
template<> PATRONPROTOTYPE_API UClass* StaticClass<ABloqueHielo>()
{
	return ABloqueHielo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueHielo);
ABloqueHielo::~ABloqueHielo() {}
// End Class ABloqueHielo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueHielo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueHielo, ABloqueHielo::StaticClass, TEXT("ABloqueHielo"), &Z_Registration_Info_UClass_ABloqueHielo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueHielo), 3847690750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueHielo_h_2926715368(TEXT("/Script/Patronprototype"),
	Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueHielo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueHielo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
