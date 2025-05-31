// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP_PreEntrega/MyGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameModeBase() {}
// Cross Module References
	TP_PREENTREGA_API UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister();
	TP_PREENTREGA_API UClass* Z_Construct_UClass_AMyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TP_PreEntrega();
// End Cross Module References
	void AMyGameModeBase::StaticRegisterNativesAMyGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister()
	{
		return AMyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_targetScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nextLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nextLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TP_PreEntrega,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyGameModeBase.h" },
		{ "ModuleRelativePath", "MyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_currentScore_MetaData[] = {
		{ "Category", "MyGameModeBase" },
		{ "ModuleRelativePath", "MyGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_currentScore = { "currentScore", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameModeBase, currentScore), METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_currentScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_currentScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_targetScore_MetaData[] = {
		{ "Category", "MyGameModeBase" },
		{ "ModuleRelativePath", "MyGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_targetScore = { "targetScore", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameModeBase, targetScore), METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_targetScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_targetScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_nextLevel_MetaData[] = {
		{ "Category", "MyGameModeBase" },
		{ "ModuleRelativePath", "MyGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_nextLevel = { "nextLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameModeBase, nextLevel), METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_nextLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_nextLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_currentScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_targetScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameModeBase_Statics::NewProp_nextLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyGameModeBase_Statics::ClassParams = {
		&AMyGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGameModeBase, 3673034942);
	template<> TP_PREENTREGA_API UClass* StaticClass<AMyGameModeBase>()
	{
		return AMyGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGameModeBase(Z_Construct_UClass_AMyGameModeBase, &AMyGameModeBase::StaticClass, TEXT("/Script/TP_PreEntrega"), TEXT("AMyGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
