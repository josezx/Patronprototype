// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patronprototype/BloqueTrampolin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueTrampolin() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloque();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloqueTrampolin();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloqueTrampolin_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patronprototype();
// End Cross Module References

// Begin Class ABloqueTrampolin
void ABloqueTrampolin::StaticRegisterNativesABloqueTrampolin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueTrampolin);
UClass* Z_Construct_UClass_ABloqueTrampolin_NoRegister()
{
	return ABloqueTrampolin::StaticClass();
}
struct Z_Construct_UClass_ABloqueTrampolin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueTrampolin.h" },
		{ "ModuleRelativePath", "BloqueTrampolin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "Trampolin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sistema de part\xef\xbf\xbd""culas para representar efecto visual de rebote\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloqueTrampolin.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sistema de part\xef\xbf\xbd""culas para representar efecto visual de rebote" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rebote_MetaData[] = {
		{ "Category", "Trampolin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Potencia de rebote que aplica el trampol\xef\xbf\xbdn\n" },
#endif
		{ "ModuleRelativePath", "BloqueTrampolin.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Potencia de rebote que aplica el trampol\xef\xbf\xbdn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rebote;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueTrampolin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueTrampolin_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueTrampolin, ParticleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleSystem_MetaData), NewProp_ParticleSystem_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueTrampolin_Statics::NewProp_Rebote = { "Rebote", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueTrampolin, Rebote), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rebote_MetaData), NewProp_Rebote_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueTrampolin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueTrampolin_Statics::NewProp_ParticleSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueTrampolin_Statics::NewProp_Rebote,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueTrampolin_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueTrampolin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Patronprototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueTrampolin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueTrampolin_Statics::ClassParams = {
	&ABloqueTrampolin::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueTrampolin_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueTrampolin_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueTrampolin_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueTrampolin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueTrampolin()
{
	if (!Z_Registration_Info_UClass_ABloqueTrampolin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueTrampolin.OuterSingleton, Z_Construct_UClass_ABloqueTrampolin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueTrampolin.OuterSingleton;
}
template<> PATRONPROTOTYPE_API UClass* StaticClass<ABloqueTrampolin>()
{
	return ABloqueTrampolin::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueTrampolin);
ABloqueTrampolin::~ABloqueTrampolin() {}
// End Class ABloqueTrampolin

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueTrampolin_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueTrampolin, ABloqueTrampolin::StaticClass, TEXT("ABloqueTrampolin"), &Z_Registration_Info_UClass_ABloqueTrampolin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueTrampolin), 3895627473U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueTrampolin_h_3271145238(TEXT("/Script/Patronprototype"),
	Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueTrampolin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueTrampolin_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
