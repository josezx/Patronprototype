// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patronprototype/ObservadorBomba.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObservadorBomba() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_UObservadorBomba();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_UObservadorBomba_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patronprototype();
// End Cross Module References

// Begin Interface UObservadorBomba
void UObservadorBomba::StaticRegisterNativesUObservadorBomba()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObservadorBomba);
UClass* Z_Construct_UClass_UObservadorBomba_NoRegister()
{
	return UObservadorBomba::StaticClass();
}
struct Z_Construct_UClass_UObservadorBomba_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ObservadorBomba.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IObservadorBomba>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UObservadorBomba_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Patronprototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObservadorBomba_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObservadorBomba_Statics::ClassParams = {
	&UObservadorBomba::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObservadorBomba_Statics::Class_MetaDataParams), Z_Construct_UClass_UObservadorBomba_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObservadorBomba()
{
	if (!Z_Registration_Info_UClass_UObservadorBomba.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObservadorBomba.OuterSingleton, Z_Construct_UClass_UObservadorBomba_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObservadorBomba.OuterSingleton;
}
template<> PATRONPROTOTYPE_API UClass* StaticClass<UObservadorBomba>()
{
	return UObservadorBomba::StaticClass();
}
UObservadorBomba::UObservadorBomba(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObservadorBomba);
UObservadorBomba::~UObservadorBomba() {}
// End Interface UObservadorBomba

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_ObservadorBomba_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObservadorBomba, UObservadorBomba::StaticClass, TEXT("UObservadorBomba"), &Z_Registration_Info_UClass_UObservadorBomba, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObservadorBomba), 3300101456U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_ObservadorBomba_h_2596169017(TEXT("/Script/Patronprototype"),
	Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_ObservadorBomba_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_ObservadorBomba_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
