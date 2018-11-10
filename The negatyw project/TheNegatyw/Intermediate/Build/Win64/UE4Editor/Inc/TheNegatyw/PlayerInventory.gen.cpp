// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheNegatyw/PlayerInventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInventory() {}
// Cross Module References
	THENEGATYW_API UClass* Z_Construct_UClass_UPlayerInventory_NoRegister();
	THENEGATYW_API UClass* Z_Construct_UClass_UPlayerInventory();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheNegatyw();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UPlayerInventory::StaticRegisterNativesUPlayerInventory()
	{
	}
	UClass* Z_Construct_UClass_UPlayerInventory_NoRegister()
	{
		return UPlayerInventory::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabbingObject_MetaData[];
#endif
		static void NewProp_GrabbingObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GrabbingObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_clipHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_clipHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_audio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_audio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheNegatyw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerInventory.h" },
		{ "ModuleRelativePath", "PlayerInventory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventory_Statics::NewProp_GrabbingObject_MetaData[] = {
		{ "Category", "PlayerInventory" },
		{ "ModuleRelativePath", "PlayerInventory.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerInventory_Statics::NewProp_GrabbingObject_SetBit(void* Obj)
	{
		((UPlayerInventory*)Obj)->GrabbingObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInventory_Statics::NewProp_GrabbingObject = { UE4CodeGen_Private::EPropertyClass::Bool, "GrabbingObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPlayerInventory), &Z_Construct_UClass_UPlayerInventory_Statics::NewProp_GrabbingObject_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerInventory_Statics::NewProp_GrabbingObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerInventory_Statics::NewProp_GrabbingObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventory_Statics::NewProp_clipHP_MetaData[] = {
		{ "Category", "PlayerInventory" },
		{ "ModuleRelativePath", "PlayerInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInventory_Statics::NewProp_clipHP = { UE4CodeGen_Private::EPropertyClass::Float, "clipHP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPlayerInventory, clipHP), METADATA_PARAMS(Z_Construct_UClass_UPlayerInventory_Statics::NewProp_clipHP_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerInventory_Statics::NewProp_clipHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventory_Statics::NewProp_damageClip_MetaData[] = {
		{ "Category", "PlayerInventory" },
		{ "ModuleRelativePath", "PlayerInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventory_Statics::NewProp_damageClip = { UE4CodeGen_Private::EPropertyClass::Object, "damageClip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPlayerInventory, damageClip), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerInventory_Statics::NewProp_damageClip_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerInventory_Statics::NewProp_damageClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventory_Statics::NewProp_audio_MetaData[] = {
		{ "Category", "PlayerInventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventory_Statics::NewProp_audio = { UE4CodeGen_Private::EPropertyClass::Object, "audio", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(UPlayerInventory, audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerInventory_Statics::NewProp_audio_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerInventory_Statics::NewProp_audio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventory_Statics::NewProp_player_MetaData[] = {
		{ "Category", "PlayerInventory" },
		{ "ModuleRelativePath", "PlayerInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventory_Statics::NewProp_player = { UE4CodeGen_Private::EPropertyClass::Object, "player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPlayerInventory, player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerInventory_Statics::NewProp_player_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayerInventory_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventory_Statics::NewProp_GrabbingObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventory_Statics::NewProp_clipHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventory_Statics::NewProp_damageClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventory_Statics::NewProp_audio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventory_Statics::NewProp_player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInventory_Statics::ClassParams = {
		&UPlayerInventory::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UPlayerInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPlayerInventory_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInventory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayerInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerInventory, 1454498575);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerInventory(Z_Construct_UClass_UPlayerInventory, &UPlayerInventory::StaticClass, TEXT("/Script/TheNegatyw"), TEXT("UPlayerInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
