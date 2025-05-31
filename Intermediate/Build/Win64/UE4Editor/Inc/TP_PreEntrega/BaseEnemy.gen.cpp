// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP_PreEntrega/Actors/BaseEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemy() {}
// Cross Module References
	TP_PREENTREGA_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
	TP_PREENTREGA_API UClass* Z_Construct_UClass_ABaseEnemy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TP_PreEntrega();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void ABaseEnemy::StaticRegisterNativesABaseEnemy()
	{
	}
	UClass* Z_Construct_UClass_ABaseEnemy_NoRegister()
	{
		return ABaseEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletsToShoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bulletsToShoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_life_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_life;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blueprintToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_blueprintToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TP_PreEntrega,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/BaseEnemy.h" },
		{ "ModuleRelativePath", "Actors/BaseEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bulletsToShoot_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Actors/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bulletsToShoot = { "bulletsToShoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemy, bulletsToShoot), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bulletsToShoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bulletsToShoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_life_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Actors/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_life = { "life", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemy, life), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_life_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_life_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_blueprintToSpawn_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Actors/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_blueprintToSpawn = { "blueprintToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemy, blueprintToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_blueprintToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_blueprintToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_rotationSpeed_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Actors/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_rotationSpeed = { "rotationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemy, rotationSpeed), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_rotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_rotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_time_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Actors/BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemy, time), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bulletsToShoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_life,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_blueprintToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_rotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_time,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemy_Statics::ClassParams = {
		&ABaseEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseEnemy, 3499039772);
	template<> TP_PREENTREGA_API UClass* StaticClass<ABaseEnemy>()
	{
		return ABaseEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseEnemy(Z_Construct_UClass_ABaseEnemy, &ABaseEnemy::StaticClass, TEXT("/Script/TP_PreEntrega"), TEXT("ABaseEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
