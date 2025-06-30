// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patronprototype/BloqueCamuflada.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueCamuflada() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloque();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloque_NoRegister();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloqueCamuflada();
PATRONPROTOTYPE_API UClass* Z_Construct_UClass_ABloqueCamuflada_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patronprototype();
// End Cross Module References

// Begin Class ABloqueCamuflada Function AlColisionar
struct Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics
{
	struct BloqueCamuflada_eventAlColisionar_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Colisi\xef\xbf\xbdn\n" },
#endif
		{ "ModuleRelativePath", "BloqueCamuflada.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Colisi\xef\xbf\xbdn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloqueCamuflada_eventAlColisionar_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloqueCamuflada_eventAlColisionar_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloqueCamuflada_eventAlColisionar_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloqueCamuflada_eventAlColisionar_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((BloqueCamuflada_eventAlColisionar_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BloqueCamuflada_eventAlColisionar_Parms), &Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloqueCamuflada_eventAlColisionar_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloqueCamuflada, nullptr, "AlColisionar", nullptr, nullptr, Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::BloqueCamuflada_eventAlColisionar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::BloqueCamuflada_eventAlColisionar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABloqueCamuflada_AlColisionar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABloqueCamuflada_AlColisionar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABloqueCamuflada::execAlColisionar)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AlColisionar(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ABloqueCamuflada Function AlColisionar

// Begin Class ABloqueCamuflada
void ABloqueCamuflada::StaticRegisterNativesABloqueCamuflada()
{
	UClass* Class = ABloqueCamuflada::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AlColisionar", &ABloqueCamuflada::execAlColisionar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueCamuflada);
UClass* Z_Construct_UClass_ABloqueCamuflada_NoRegister()
{
	return ABloqueCamuflada::StaticClass();
}
struct Z_Construct_UClass_ABloqueCamuflada_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueCamuflada.h" },
		{ "ModuleRelativePath", "BloqueCamuflada.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloqueDecorado_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bloque base decorado\n" },
#endif
		{ "ModuleRelativePath", "BloqueCamuflada.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bloque base decorado" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXExplosion_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Efecto de explosi\xef\xbf\xbdn\n" },
#endif
		{ "ModuleRelativePath", "BloqueCamuflada.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Efecto de explosi\xef\xbf\xbdn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resistencia_MetaData[] = {
		{ "Category", "Atributos" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Atributos posibles decorados seg\xef\xbf\xbdn tipo de bloque\n" },
#endif
		{ "ModuleRelativePath", "BloqueCamuflada.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Atributos posibles decorados seg\xef\xbf\xbdn tipo de bloque" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Congelamiento_MetaData[] = {
		{ "Category", "Atributos" },
		{ "ModuleRelativePath", "BloqueCamuflada.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Danio_MetaData[] = {
		{ "Category", "Atributos" },
		{ "ModuleRelativePath", "BloqueCamuflada.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Voltaje_MetaData[] = {
		{ "Category", "Atributos" },
		{ "ModuleRelativePath", "BloqueCamuflada.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rebote_MetaData[] = {
		{ "Category", "Atributos" },
		{ "ModuleRelativePath", "BloqueCamuflada.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SonidoExplosion_MetaData[] = {
		{ "Category", "FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sonido al detonar\n" },
#endif
		{ "ModuleRelativePath", "BloqueCamuflada.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sonido al detonar" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LuzSospechosa_MetaData[] = {
		{ "Category", "BloqueCamuflada" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Luz indicadora camuflada\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloqueCamuflada.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Luz indicadora camuflada" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextoCamuflado_MetaData[] = {
		{ "Category", "BloqueCamuflada" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Texto flotante\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloqueCamuflada.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Texto flotante" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloqueDecorado;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FXExplosion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Resistencia;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Congelamiento;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Danio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Voltaje;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rebote;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SonidoExplosion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LuzSospechosa;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextoCamuflado;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABloqueCamuflada_AlColisionar, "AlColisionar" }, // 2697250321
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueCamuflada>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_BloqueDecorado = { "BloqueDecorado", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueCamuflada, BloqueDecorado), Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloqueDecorado_MetaData), NewProp_BloqueDecorado_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_FXExplosion = { "FXExplosion", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueCamuflada, FXExplosion), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXExplosion_MetaData), NewProp_FXExplosion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_Resistencia = { "Resistencia", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueCamuflada, Resistencia), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resistencia_MetaData), NewProp_Resistencia_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_Congelamiento = { "Congelamiento", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueCamuflada, Congelamiento), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Congelamiento_MetaData), NewProp_Congelamiento_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_Danio = { "Danio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueCamuflada, Danio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Danio_MetaData), NewProp_Danio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_Voltaje = { "Voltaje", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueCamuflada, Voltaje), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Voltaje_MetaData), NewProp_Voltaje_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_Rebote = { "Rebote", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueCamuflada, Rebote), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rebote_MetaData), NewProp_Rebote_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_SonidoExplosion = { "SonidoExplosion", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueCamuflada, SonidoExplosion), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SonidoExplosion_MetaData), NewProp_SonidoExplosion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_LuzSospechosa = { "LuzSospechosa", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueCamuflada, LuzSospechosa), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LuzSospechosa_MetaData), NewProp_LuzSospechosa_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_TextoCamuflado = { "TextoCamuflado", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueCamuflada, TextoCamuflado), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextoCamuflado_MetaData), NewProp_TextoCamuflado_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueCamuflada_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_BloqueDecorado,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_FXExplosion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_Resistencia,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_Congelamiento,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_Danio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_Voltaje,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_Rebote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_SonidoExplosion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_LuzSospechosa,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueCamuflada_Statics::NewProp_TextoCamuflado,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueCamuflada_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueCamuflada_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Patronprototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueCamuflada_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueCamuflada_Statics::ClassParams = {
	&ABloqueCamuflada::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABloqueCamuflada_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueCamuflada_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueCamuflada_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueCamuflada_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueCamuflada()
{
	if (!Z_Registration_Info_UClass_ABloqueCamuflada.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueCamuflada.OuterSingleton, Z_Construct_UClass_ABloqueCamuflada_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueCamuflada.OuterSingleton;
}
template<> PATRONPROTOTYPE_API UClass* StaticClass<ABloqueCamuflada>()
{
	return ABloqueCamuflada::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueCamuflada);
ABloqueCamuflada::~ABloqueCamuflada() {}
// End Class ABloqueCamuflada

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueCamuflada_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueCamuflada, ABloqueCamuflada::StaticClass, TEXT("ABloqueCamuflada"), &Z_Registration_Info_UClass_ABloqueCamuflada, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueCamuflada), 1128551883U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueCamuflada_h_3528789371(TEXT("/Script/Patronprototype"),
	Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueCamuflada_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patronprototype_Source_Patronprototype_BloqueCamuflada_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
