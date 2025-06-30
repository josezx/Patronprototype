// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patronprototype/BloqueFuego.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueFuego() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloque();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloqueFuego();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloqueFuego_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patronprototype();
// End Cross Module References

// Begin Class ABloqueFuego Function AlSuperponer
struct Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics
{
	struct BloqueFuego_eventAlSuperponer_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reacci\xef\xbf\xbdn al contacto con el jugador\n" },
#endif
		{ "ModuleRelativePath", "BloqueFuego.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reacci\xef\xbf\xbdn al contacto con el jugador" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloqueFuego_eventAlSuperponer_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloqueFuego_eventAlSuperponer_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloqueFuego_eventAlSuperponer_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloqueFuego_eventAlSuperponer_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((BloqueFuego_eventAlSuperponer_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BloqueFuego_eventAlSuperponer_Parms), &Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloqueFuego_eventAlSuperponer_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloqueFuego, nullptr, "AlSuperponer", nullptr, nullptr, Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::BloqueFuego_eventAlSuperponer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::BloqueFuego_eventAlSuperponer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABloqueFuego_AlSuperponer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABloqueFuego_AlSuperponer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABloqueFuego::execAlSuperponer)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AlSuperponer(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ABloqueFuego Function AlSuperponer

// Begin Class ABloqueFuego
void ABloqueFuego::StaticRegisterNativesABloqueFuego()
{
	UClass* Class = ABloqueFuego::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AlSuperponer", &ABloqueFuego::execAlSuperponer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueFuego);
UClass* Z_Construct_UClass_ABloqueFuego_NoRegister()
{
	return ABloqueFuego::StaticClass();
}
struct Z_Construct_UClass_ABloqueFuego_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueFuego.h" },
		{ "ModuleRelativePath", "BloqueFuego.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "BloqueFuego" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Part\xef\xbf\xbd""culas de fuego\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloqueFuego.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Part\xef\xbf\xbd""culas de fuego" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Danio_MetaData[] = {
		{ "Category", "Fuego" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Da\xef\xbf\xbdo que inflige este bloque\n" },
#endif
		{ "ModuleRelativePath", "BloqueFuego.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Da\xef\xbf\xbdo que inflige este bloque" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoDeVida_MetaData[] = {
		{ "Category", "Bloque Fuego Extra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tiempo de vida activa (solo en clones)\n" },
#endif
		{ "ModuleRelativePath", "BloqueFuego.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tiempo de vida activa (solo en clones)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Danio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiempoDeVida;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABloqueFuego_AlSuperponer, "AlSuperponer" }, // 2837366639
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueFuego>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueFuego_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueFuego, ParticleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleSystem_MetaData), NewProp_ParticleSystem_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueFuego_Statics::NewProp_Danio = { "Danio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueFuego, Danio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Danio_MetaData), NewProp_Danio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueFuego_Statics::NewProp_TiempoDeVida = { "TiempoDeVida", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueFuego, TiempoDeVida), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoDeVida_MetaData), NewProp_TiempoDeVida_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueFuego_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueFuego_Statics::NewProp_ParticleSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueFuego_Statics::NewProp_Danio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueFuego_Statics::NewProp_TiempoDeVida,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFuego_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueFuego_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Patronprototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFuego_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueFuego_Statics::ClassParams = {
	&ABloqueFuego::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABloqueFuego_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFuego_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFuego_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueFuego_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueFuego()
{
	if (!Z_Registration_Info_UClass_ABloqueFuego.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueFuego.OuterSingleton, Z_Construct_UClass_ABloqueFuego_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueFuego.OuterSingleton;
}
template<> PATRONPROTOTYPE_API UClass* StaticClass<ABloqueFuego>()
{
	return ABloqueFuego::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueFuego);
ABloqueFuego::~ABloqueFuego() {}
// End Class ABloqueFuego

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueFuego_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueFuego, ABloqueFuego::StaticClass, TEXT("ABloqueFuego"), &Z_Registration_Info_UClass_ABloqueFuego, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueFuego), 1440772819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueFuego_h_3100557729(TEXT("/Script/Patronprototype"),
	Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueFuego_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueFuego_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
