// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lootool/Public/ItemWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemWidget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	LOOTOOL_API UClass* Z_Construct_UClass_UItemWidget();
	LOOTOOL_API UClass* Z_Construct_UClass_UItemWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMGEDITOR_API UClass* Z_Construct_UClass_UDetailsView_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Lootool();
// End Cross Module References
	void UItemWidget::StaticRegisterNativesUItemWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemWidget);
	UClass* Z_Construct_UClass_UItemWidget_NoRegister()
	{
		return UItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LootData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LootData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Details;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Lootool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ItemWidget.h" },
		{ "ModuleRelativePath", "Public/ItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemWidget_Statics::NewProp_LootData_MetaData[] = {
		{ "Category", "Lootool" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemWidget_Statics::NewProp_LootData = { "LootData", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UItemWidget, LootData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemWidget_Statics::NewProp_LootData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::NewProp_LootData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemWidget_Statics::NewProp_Details_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Lootool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemWidget_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UItemWidget, Details), Z_Construct_UClass_UDetailsView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemWidget_Statics::NewProp_Details_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::NewProp_Details_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemWidget_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "Lootool" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UItemWidget_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UItemWidget, ItemID), METADATA_PARAMS(Z_Construct_UClass_UItemWidget_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::NewProp_ItemID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemWidget_Statics::NewProp_LootData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemWidget_Statics::NewProp_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemWidget_Statics::NewProp_ItemID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemWidget_Statics::ClassParams = {
		&UItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemWidget()
	{
		if (!Z_Registration_Info_UClass_UItemWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemWidget.OuterSingleton, Z_Construct_UClass_UItemWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemWidget.OuterSingleton;
	}
	template<> LOOTOOL_API UClass* StaticClass<UItemWidget>()
	{
		return UItemWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemWidget);
	UItemWidget::~UItemWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_ItemWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_ItemWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemWidget, UItemWidget::StaticClass, TEXT("UItemWidget"), &Z_Registration_Info_UClass_UItemWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemWidget), 3425800849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_ItemWidget_h_1772842242(TEXT("/Script/Lootool"),
		Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_ItemWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_ItemWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
