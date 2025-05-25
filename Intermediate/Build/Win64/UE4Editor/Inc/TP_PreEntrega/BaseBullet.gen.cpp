// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP_PreEntrega/Actors/BaseBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBullet() {}
// Cross Module References
	TP_PREENTREGA_API UClass* Z_Construct_UClass_ABaseBullet_NoRegister();
	TP_PREENTREGA_API UClass* Z_Construct_UClass_ABaseBullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TP_PreEntrega();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ABaseBullet::StaticRegisterNativesABaseBullet()
	{
	}
	UClass* Z_Construct_UClass_ABaseBullet_NoRegister()
	{
		return ABaseBullet::StaticClass();
	}
	struct Z_Construct_UClass_ABaseBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_destroyOnContact_MetaData[];
#endif
		static void NewProp_destroyOnContact_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_destroyOnContact;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TP_PreEntrega,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/BaseBullet.h" },
		{ "ModuleRelativePath", "Actors/BaseBullet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBullet_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "BaseBullet" },
		{ "ModuleRelativePath", "Actors/BaseBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseBullet_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBullet, speed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABaseBullet_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBullet_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBullet_Statics::NewProp_duration_MetaData[] = {
		{ "Category", "BaseBullet" },
		{ "ModuleRelativePath", "Actors/BaseBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseBullet_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBullet, duration), METADATA_PARAMS(Z_Construct_UClass_ABaseBullet_Statics::NewProp_duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBullet_Statics::NewProp_duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBullet_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "BaseBullet" },
		{ "ModuleRelativePath", "Actors/BaseBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseBullet_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseBullet, damage), METADATA_PARAMS(Z_Construct_UClass_ABaseBullet_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBullet_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBullet_Statics::NewProp_destroyOnContact_MetaData[] = {
		{ "Category", "BaseBullet" },
		{ "ModuleRelativePath", "Actors/BaseBullet.h" },
	};
#endif
	void Z_Construct_UClass_ABaseBullet_Statics::NewProp_destroyOnContact_SetBit(void* Obj)
	{
		((ABaseBullet*)Obj)->destroyOnContact = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseBullet_Statics::NewProp_destroyOnContact = { "destroyOnContact", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseBullet), &Z_Construct_UClass_ABaseBullet_Statics::NewProp_destroyOnContact_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseBullet_Statics::NewProp_destroyOnContact_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBullet_Statics::NewProp_destroyOnContact_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBullet_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBullet_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBullet_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBullet_Statics::NewProp_destroyOnContact,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseBullet_Statics::ClassParams = {
		&ABaseBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseBullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBullet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseBullet, 3088322063);
	template<> TP_PREENTREGA_API UClass* StaticClass<ABaseBullet>()
	{
		return ABaseBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseBullet(Z_Construct_UClass_ABaseBullet, &ABaseBullet::StaticClass, TEXT("/Script/TP_PreEntrega"), TEXT("ABaseBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
