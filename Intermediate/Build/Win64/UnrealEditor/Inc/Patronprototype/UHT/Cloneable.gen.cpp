// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patronprototype/Cloneable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloneable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_UCloneable();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_UCloneable_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patronprototype();
// End Cross Module References

// Begin Interface UCloneable
void UCloneable::StaticRegisterNativesUCloneable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCloneable);
UClass* Z_Construct_UClass_UCloneable_NoRegister()
{
	return UCloneable::StaticClass();
}
struct Z_Construct_UClass_UCloneable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cloneable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICloneable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCloneable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Patronprototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCloneable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCloneable_Statics::ClassParams = {
	&UCloneable::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCloneable_Statics::Class_MetaDataParams), Z_Construct_UClass_UCloneable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCloneable()
{
	if (!Z_Registration_Info_UClass_UCloneable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCloneable.OuterSingleton, Z_Construct_UClass_UCloneable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCloneable.OuterSingleton;
}
template<> PATRONPROTOTYPE_API UClass* StaticClass<UCloneable>()
{
	return UCloneable::StaticClass();
}
UCloneable::UCloneable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCloneable);
UCloneable::~UCloneable() {}
// End Interface UCloneable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_Cloneable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCloneable, UCloneable::StaticClass, TEXT("UCloneable"), &Z_Registration_Info_UClass_UCloneable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCloneable), 1452086714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_Cloneable_h_2512841321(TEXT("/Script/Patronprototype"),
	Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_Cloneable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_Cloneable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
