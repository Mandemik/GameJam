// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheNegatyw/Czernia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCzernia() {}
// Cross Module References
	THENEGATYW_API UClass* Z_Construct_UClass_UCzernia_NoRegister();
	THENEGATYW_API UClass* Z_Construct_UClass_UCzernia();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheNegatyw();
	THENEGATYW_API UClass* Z_Construct_UClass_UPlayerInventory_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	void UCzernia::StaticRegisterNativesUCzernia()
	{
	}
	UClass* Z_Construct_UClass_UCzernia_NoRegister()
	{
		return UCzernia::StaticClass();
	}
	struct Z_Construct_UClass_UCzernia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dropZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dropZone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCzernia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheNegatyw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCzernia_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Czernia.h" },
		{ "ModuleRelativePath", "Czernia.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCzernia_Statics::NewProp_inventory_MetaData[] = {
		{ "Category", "Czernia" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Czernia.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCzernia_Statics::NewProp_inventory = { UE4CodeGen_Private::EPropertyClass::Object, "inventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(UCzernia, inventory), Z_Construct_UClass_UPlayerInventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCzernia_Statics::NewProp_inventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCzernia_Statics::NewProp_inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCzernia_Statics::NewProp_player_MetaData[] = {
		{ "Category", "Czernia" },
		{ "ModuleRelativePath", "Czernia.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCzernia_Statics::NewProp_player = { UE4CodeGen_Private::EPropertyClass::Object, "player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCzernia, player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCzernia_Statics::NewProp_player_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCzernia_Statics::NewProp_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCzernia_Statics::NewProp_dropZone_MetaData[] = {
		{ "Category", "Czernia" },
		{ "ModuleRelativePath", "Czernia.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCzernia_Statics::NewProp_dropZone = { UE4CodeGen_Private::EPropertyClass::Object, "dropZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCzernia, dropZone), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCzernia_Statics::NewProp_dropZone_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCzernia_Statics::NewProp_dropZone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCzernia_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCzernia_Statics::NewProp_inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCzernia_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCzernia_Statics::NewProp_dropZone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCzernia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCzernia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCzernia_Statics::ClassParams = {
		&UCzernia::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UCzernia_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCzernia_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCzernia_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCzernia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCzernia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCzernia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCzernia, 2689196461);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCzernia(Z_Construct_UClass_UCzernia, &UCzernia::StaticClass, TEXT("/Script/TheNegatyw"), TEXT("UCzernia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCzernia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
