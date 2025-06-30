// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patronprototype/BloqueLadrillo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueLadrillo() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloque();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloqueLadrillo();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloqueLadrillo_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patronprototype();
// End Cross Module References

// Begin Class ABloqueLadrillo
void ABloqueLadrillo::StaticRegisterNativesABloqueLadrillo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueLadrillo);
UClass* Z_Construct_UClass_ABloqueLadrillo_NoRegister()
{
	return ABloqueLadrillo::StaticClass();
}
struct Z_Construct_UClass_ABloqueLadrillo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueLadrillo.h" },
		{ "ModuleRelativePath", "BloqueLadrillo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticulasPolvo_MetaData[] = {
		{ "Category", "Ladrillo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Efecto visual de part\xef\xbf\xbd""culas de polvo\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloqueLadrillo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Efecto visual de part\xef\xbf\xbd""culas de polvo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resistencia_MetaData[] = {
		{ "Category", "Ladrillo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Resistencia del ladrillo (puede usarse para destrucci\xef\xbf\xbdn condicional)\n" },
#endif
		{ "ModuleRelativePath", "BloqueLadrillo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resistencia del ladrillo (puede usarse para destrucci\xef\xbf\xbdn condicional)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticulasPolvo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Resistencia;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueLadrillo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueLadrillo_Statics::NewProp_ParticulasPolvo = { "ParticulasPolvo", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueLadrillo, ParticulasPolvo), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticulasPolvo_MetaData), NewProp_ParticulasPolvo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABloqueLadrillo_Statics::NewProp_Resistencia = { "Resistencia", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueLadrillo, Resistencia), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resistencia_MetaData), NewProp_Resistencia_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueLadrillo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueLadrillo_Statics::NewProp_ParticulasPolvo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueLadrillo_Statics::NewProp_Resistencia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrillo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueLadrillo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Patronprototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrillo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueLadrillo_Statics::ClassParams = {
	&ABloqueLadrillo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueLadrillo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrillo_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrillo_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueLadrillo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueLadrillo()
{
	if (!Z_Registration_Info_UClass_ABloqueLadrillo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueLadrillo.OuterSingleton, Z_Construct_UClass_ABloqueLadrillo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueLadrillo.OuterSingleton;
}
template<> PATRONPROTOTYPE_API UClass* StaticClass<ABloqueLadrillo>()
{
	return ABloqueLadrillo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueLadrillo);
ABloqueLadrillo::~ABloqueLadrillo() {}
// End Class ABloqueLadrillo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueLadrillo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueLadrillo, ABloqueLadrillo::StaticClass, TEXT("ABloqueLadrillo"), &Z_Registration_Info_UClass_ABloqueLadrillo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueLadrillo), 2245603115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueLadrillo_h_3116736072(TEXT("/Script/Patronprototype"),
	Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueLadrillo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueLadrillo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
