// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheNegatyw/LightSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightSwitch() {}
// Cross Module References
	THENEGATYW_API UClass* Z_Construct_UClass_ULightSwitch_NoRegister();
	THENEGATYW_API UClass* Z_Construct_UClass_ULightSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheNegatyw();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	void ULightSwitch::StaticRegisterNativesULightSwitch()
	{
	}
	UClass* Z_Construct_UClass_ULightSwitch_NoRegister()
	{
		return ULightSwitch::StaticClass();
	}
	struct Z_Construct_UClass_ULightSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lightIntenisty_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lightIntenisty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeLightOf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeLightOf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeLightOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeLightOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isOn_MetaData[];
#endif
		static void NewProp_isOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheNegatyw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightSwitch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LightSwitch.h" },
		{ "ModuleRelativePath", "LightSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightSwitch_Statics::NewProp_damageZone_MetaData[] = {
		{ "Category", "LightSwitch" },
		{ "ModuleRelativePath", "LightSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightSwitch_Statics::NewProp_damageZone = { UE4CodeGen_Private::EPropertyClass::Object, "damageZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ULightSwitch, damageZone), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightSwitch_Statics::NewProp_damageZone_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightSwitch_Statics::NewProp_damageZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightSwitch_Statics::NewProp_lightIntenisty_MetaData[] = {
		{ "Category", "LightSwitch" },
		{ "ModuleRelativePath", "LightSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightSwitch_Statics::NewProp_lightIntenisty = { UE4CodeGen_Private::EPropertyClass::Float, "lightIntenisty", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ULightSwitch, lightIntenisty), METADATA_PARAMS(Z_Construct_UClass_ULightSwitch_Statics::NewProp_lightIntenisty_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightSwitch_Statics::NewProp_lightIntenisty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightSwitch_Statics::NewProp_timeLightOf_MetaData[] = {
		{ "Category", "LightSwitch" },
		{ "ModuleRelativePath", "LightSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightSwitch_Statics::NewProp_timeLightOf = { UE4CodeGen_Private::EPropertyClass::Float, "timeLightOf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ULightSwitch, timeLightOf), METADATA_PARAMS(Z_Construct_UClass_ULightSwitch_Statics::NewProp_timeLightOf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightSwitch_Statics::NewProp_timeLightOf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightSwitch_Statics::NewProp_timeLightOn_MetaData[] = {
		{ "Category", "LightSwitch" },
		{ "ModuleRelativePath", "LightSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightSwitch_Statics::NewProp_timeLightOn = { UE4CodeGen_Private::EPropertyClass::Float, "timeLightOn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ULightSwitch, timeLightOn), METADATA_PARAMS(Z_Construct_UClass_ULightSwitch_Statics::NewProp_timeLightOn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightSwitch_Statics::NewProp_timeLightOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightSwitch_Statics::NewProp_isOn_MetaData[] = {
		{ "Category", "LightSwitch" },
		{ "ModuleRelativePath", "LightSwitch.h" },
	};
#endif
	void Z_Construct_UClass_ULightSwitch_Statics::NewProp_isOn_SetBit(void* Obj)
	{
		((ULightSwitch*)Obj)->isOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightSwitch_Statics::NewProp_isOn = { UE4CodeGen_Private::EPropertyClass::Bool, "isOn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULightSwitch), &Z_Construct_UClass_ULightSwitch_Statics::NewProp_isOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightSwitch_Statics::NewProp_isOn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightSwitch_Statics::NewProp_isOn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightSwitch_Statics::NewProp_damageZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightSwitch_Statics::NewProp_lightIntenisty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightSwitch_Statics::NewProp_timeLightOf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightSwitch_Statics::NewProp_timeLightOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightSwitch_Statics::NewProp_isOn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightSwitch_Statics::ClassParams = {
		&ULightSwitch::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_ULightSwitch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULightSwitch_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULightSwitch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULightSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightSwitch, 614809833);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightSwitch(Z_Construct_UClass_ULightSwitch, &ULightSwitch::StaticClass, TEXT("/Script/TheNegatyw"), TEXT("ULightSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
