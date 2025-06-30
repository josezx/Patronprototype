// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patronprototype/GestorDePrototipos.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGestorDePrototipos() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_AGestorDePrototipos();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_AGestorDePrototipos_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patronprototype();
// End Cross Module References

// Begin Class AGestorDePrototipos
void AGestorDePrototipos::StaticRegisterNativesAGestorDePrototipos()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGestorDePrototipos);
UClass* Z_Construct_UClass_AGestorDePrototipos_NoRegister()
{
	return AGestorDePrototipos::StaticClass();
}
struct Z_Construct_UClass_AGestorDePrototipos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GestorDePrototipos.h" },
		{ "ModuleRelativePath", "GestorDePrototipos.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGestorDePrototipos>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGestorDePrototipos_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Patronprototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGestorDePrototipos_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGestorDePrototipos_Statics::ClassParams = {
	&AGestorDePrototipos::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGestorDePrototipos_Statics::Class_MetaDataParams), Z_Construct_UClass_AGestorDePrototipos_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGestorDePrototipos()
{
	if (!Z_Registration_Info_UClass_AGestorDePrototipos.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGestorDePrototipos.OuterSingleton, Z_Construct_UClass_AGestorDePrototipos_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGestorDePrototipos.OuterSingleton;
}
template<> PATRONPROTOTYPE_API UClass* StaticClass<AGestorDePrototipos>()
{
	return AGestorDePrototipos::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGestorDePrototipos);
AGestorDePrototipos::~AGestorDePrototipos() {}
// End Class AGestorDePrototipos

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_GestorDePrototipos_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGestorDePrototipos, AGestorDePrototipos::StaticClass, TEXT("AGestorDePrototipos"), &Z_Registration_Info_UClass_AGestorDePrototipos, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGestorDePrototipos), 3770429341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_GestorDePrototipos_h_4245610063(TEXT("/Script/Patronprototype"),
	Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_GestorDePrototipos_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_GestorDePrototipos_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
