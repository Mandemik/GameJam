// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheNegatyw/PickableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickableComponent() {}
// Cross Module References
	THENEGATYW_API UClass* Z_Construct_UClass_UPickableComponent_NoRegister();
	THENEGATYW_API UClass* Z_Construct_UClass_UPickableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheNegatyw();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	void UPickableComponent::StaticRegisterNativesUPickableComponent()
	{
	}
	UClass* Z_Construct_UClass_UPickableComponent_NoRegister()
	{
		return UPickableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPickableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickUpZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pickUpZone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPickableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheNegatyw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PickableComponent.h" },
		{ "ModuleRelativePath", "PickableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickableComponent_Statics::NewProp_pickUpZone_MetaData[] = {
		{ "Category", "PickableComponent" },
		{ "ModuleRelativePath", "PickableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPickableComponent_Statics::NewProp_pickUpZone = { UE4CodeGen_Private::EPropertyClass::Object, "pickUpZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UPickableComponent, pickUpZone), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPickableComponent_Statics::NewProp_pickUpZone_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPickableComponent_Statics::NewProp_pickUpZone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPickableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickableComponent_Statics::NewProp_pickUpZone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPickableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPickableComponent_Statics::ClassParams = {
		&UPickableComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UPickableComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPickableComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPickableComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPickableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPickableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPickableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPickableComponent, 1395227123);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPickableComponent(Z_Construct_UClass_UPickableComponent, &UPickableComponent::StaticClass, TEXT("/Script/TheNegatyw"), TEXT("UPickableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
