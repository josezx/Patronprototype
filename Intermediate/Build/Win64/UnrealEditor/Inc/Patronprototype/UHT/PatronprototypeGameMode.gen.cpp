// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patronprototype/PatronprototypeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatronprototypeGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloque_NoRegister();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_AGestorDePrototipos_NoRegister();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_APatronprototypeGameMode();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_APatronprototypeGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patronprototype();
// End Cross Module References

// Begin Class APatronprototypeGameMode
void APatronprototypeGameMode::StaticRegisterNativesAPatronprototypeGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APatronprototypeGameMode);
UClass* Z_Construct_UClass_APatronprototypeGameMode_NoRegister()
{
	return APatronprototypeGameMode::StaticClass();
}
struct Z_Construct_UClass_APatronprototypeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PatronprototypeGameMode.h" },
		{ "ModuleRelativePath", "PatronprototypeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloquesA_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referencias a los bloques generados\n" },
#endif
		{ "ModuleRelativePath", "PatronprototypeGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referencias a los bloques generados" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapaPrototipos_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mapa que asocia tipos de bloques con sus prototipos (para clonado)\n" },
#endif
		{ "ModuleRelativePath", "PatronprototypeGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapa que asocia tipos de bloques con sus prototipos (para clonado)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gestor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gestor de prototipos (Prototype Pattern)\n" },
#endif
		{ "ModuleRelativePath", "PatronprototypeGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gestor de prototipos (Prototype Pattern)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloquesA_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BloquesA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapaPrototipos_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapaPrototipos_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MapaPrototipos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Gestor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatronprototypeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatronprototypeGameMode_Statics::NewProp_BloquesA_Inner = { "BloquesA", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APatronprototypeGameMode_Statics::NewProp_BloquesA = { "BloquesA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatronprototypeGameMode, BloquesA), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloquesA_MetaData), NewProp_BloquesA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatronprototypeGameMode_Statics::NewProp_MapaPrototipos_ValueProp = { "MapaPrototipos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APatronprototypeGameMode_Statics::NewProp_MapaPrototipos_Key_KeyProp = { "MapaPrototipos_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APatronprototypeGameMode_Statics::NewProp_MapaPrototipos = { "MapaPrototipos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatronprototypeGameMode, MapaPrototipos), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapaPrototipos_MetaData), NewProp_MapaPrototipos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatronprototypeGameMode_Statics::NewProp_Gestor = { "Gestor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatronprototypeGameMode, Gestor), Z_Construct_UClass_AGestorDePrototipos_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gestor_MetaData), NewProp_Gestor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APatronprototypeGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronprototypeGameMode_Statics::NewProp_BloquesA_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronprototypeGameMode_Statics::NewProp_BloquesA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronprototypeGameMode_Statics::NewProp_MapaPrototipos_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronprototypeGameMode_Statics::NewProp_MapaPrototipos_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronprototypeGameMode_Statics::NewProp_MapaPrototipos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronprototypeGameMode_Statics::NewProp_Gestor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APatronprototypeGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APatronprototypeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Patronprototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APatronprototypeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APatronprototypeGameMode_Statics::ClassParams = {
	&APatronprototypeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APatronprototypeGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APatronprototypeGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APatronprototypeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APatronprototypeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APatronprototypeGameMode()
{
	if (!Z_Registration_Info_UClass_APatronprototypeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APatronprototypeGameMode.OuterSingleton, Z_Construct_UClass_APatronprototypeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APatronprototypeGameMode.OuterSingleton;
}
template<> PATRONPROTOTYPE_API UClass* StaticClass<APatronprototypeGameMode>()
{
	return APatronprototypeGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APatronprototypeGameMode);
APatronprototypeGameMode::~APatronprototypeGameMode() {}
// End Class APatronprototypeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_PatronprototypeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APatronprototypeGameMode, APatronprototypeGameMode::StaticClass, TEXT("APatronprototypeGameMode"), &Z_Registration_Info_UClass_APatronprototypeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APatronprototypeGameMode), 5729095U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_PatronprototypeGameMode_h_2245382322(TEXT("/Script/Patronprototype"),
	Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_PatronprototypeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_PatronprototypeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
