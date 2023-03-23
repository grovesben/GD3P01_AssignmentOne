// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lootool/Public/LootoolEditorWidget.h"
#include "Lootool/Public/LootItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootoolEditorWidget() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	LOOTOOL_API UClass* Z_Construct_UClass_ULootoolEditorWidget();
	LOOTOOL_API UClass* Z_Construct_UClass_ULootoolEditorWidget_NoRegister();
	LOOTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FItemDetails();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Lootool();
// End Cross Module References
	DEFINE_FUNCTION(ULootoolEditorWidget::execRemoveItem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_LootID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItem(Z_Param_LootID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULootoolEditorWidget::execAddItem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_LootID);
		P_GET_STRUCT(FItemDetails,Z_Param_ItemDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItem(Z_Param_LootID,Z_Param_ItemDetails);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULootoolEditorWidget::execGetTableAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTableAsString();
		P_NATIVE_END;
	}
	void ULootoolEditorWidget::StaticRegisterNativesULootoolEditorWidget()
	{
		UClass* Class = ULootoolEditorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &ULootoolEditorWidget::execAddItem },
			{ "GetTableAsString", &ULootoolEditorWidget::execGetTableAsString },
			{ "RemoveItem", &ULootoolEditorWidget::execRemoveItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULootoolEditorWidget_AddItem_Statics
	{
		struct LootoolEditorWidget_eventAddItem_Parms
		{
			FName LootID;
			FItemDetails ItemDetails;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LootID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDetails;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULootoolEditorWidget_AddItem_Statics::NewProp_LootID = { "LootID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LootoolEditorWidget_eventAddItem_Parms, LootID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULootoolEditorWidget_AddItem_Statics::NewProp_ItemDetails = { "ItemDetails", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LootoolEditorWidget_eventAddItem_Parms, ItemDetails), Z_Construct_UScriptStruct_FItemDetails, METADATA_PARAMS(nullptr, 0) }; // 530956624
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootoolEditorWidget_AddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootoolEditorWidget_AddItem_Statics::NewProp_LootID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootoolEditorWidget_AddItem_Statics::NewProp_ItemDetails,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULootoolEditorWidget_AddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lootool" },
		{ "Comment", "/* Adds items, and can also be used to edit existing items */" },
		{ "ModuleRelativePath", "Public/LootoolEditorWidget.h" },
		{ "ToolTip", "Adds items, and can also be used to edit existing items" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootoolEditorWidget_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULootoolEditorWidget, nullptr, "AddItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULootoolEditorWidget_AddItem_Statics::LootoolEditorWidget_eventAddItem_Parms), Z_Construct_UFunction_ULootoolEditorWidget_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootoolEditorWidget_AddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULootoolEditorWidget_AddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootoolEditorWidget_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULootoolEditorWidget_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootoolEditorWidget_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULootoolEditorWidget_GetTableAsString_Statics
	{
		struct LootoolEditorWidget_eventGetTableAsString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULootoolEditorWidget_GetTableAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LootoolEditorWidget_eventGetTableAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootoolEditorWidget_GetTableAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootoolEditorWidget_GetTableAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULootoolEditorWidget_GetTableAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lootool" },
		{ "Comment", "/* Experimenting with converting Data Table to string for editing */" },
		{ "ModuleRelativePath", "Public/LootoolEditorWidget.h" },
		{ "ToolTip", "Experimenting with converting Data Table to string for editing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootoolEditorWidget_GetTableAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULootoolEditorWidget, nullptr, "GetTableAsString", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULootoolEditorWidget_GetTableAsString_Statics::LootoolEditorWidget_eventGetTableAsString_Parms), Z_Construct_UFunction_ULootoolEditorWidget_GetTableAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootoolEditorWidget_GetTableAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULootoolEditorWidget_GetTableAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootoolEditorWidget_GetTableAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULootoolEditorWidget_GetTableAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootoolEditorWidget_GetTableAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULootoolEditorWidget_RemoveItem_Statics
	{
		struct LootoolEditorWidget_eventRemoveItem_Parms
		{
			FName LootID;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LootID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULootoolEditorWidget_RemoveItem_Statics::NewProp_LootID = { "LootID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LootoolEditorWidget_eventRemoveItem_Parms, LootID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootoolEditorWidget_RemoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootoolEditorWidget_RemoveItem_Statics::NewProp_LootID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULootoolEditorWidget_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lootool" },
		{ "Comment", "/* Removes items by their Name aka LootID */" },
		{ "ModuleRelativePath", "Public/LootoolEditorWidget.h" },
		{ "ToolTip", "Removes items by their Name aka LootID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootoolEditorWidget_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULootoolEditorWidget, nullptr, "RemoveItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULootoolEditorWidget_RemoveItem_Statics::LootoolEditorWidget_eventRemoveItem_Parms), Z_Construct_UFunction_ULootoolEditorWidget_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootoolEditorWidget_RemoveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULootoolEditorWidget_RemoveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootoolEditorWidget_RemoveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULootoolEditorWidget_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootoolEditorWidget_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootoolEditorWidget);
	UClass* Z_Construct_UClass_ULootoolEditorWidget_NoRegister()
	{
		return ULootoolEditorWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULootoolEditorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListOfItems_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ListOfItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LootData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LootData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddLootItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AddLootItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveLootItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RemoveLootItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedItemID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedItemID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootoolEditorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Lootool,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULootoolEditorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULootoolEditorWidget_AddItem, "AddItem" }, // 2418001435
		{ &Z_Construct_UFunction_ULootoolEditorWidget_GetTableAsString, "GetTableAsString" }, // 4251079305
		{ &Z_Construct_UFunction_ULootoolEditorWidget_RemoveItem, "RemoveItem" }, // 43128797
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootoolEditorWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LootoolEditorWidget.h" },
		{ "ModuleRelativePath", "Public/LootoolEditorWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_ListOfItems_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Lootool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LootoolEditorWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_ListOfItems = { "ListOfItems", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULootoolEditorWidget, ListOfItems), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_ListOfItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_ListOfItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_LootData_MetaData[] = {
		{ "Category", "Lootool" },
		{ "ModuleRelativePath", "Public/LootoolEditorWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_LootData = { "LootData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULootoolEditorWidget, LootData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_LootData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_LootData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_AddLootItem_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Lootool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LootoolEditorWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_AddLootItem = { "AddLootItem", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULootoolEditorWidget, AddLootItem), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_AddLootItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_AddLootItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_RemoveLootItem_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Lootool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LootoolEditorWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_RemoveLootItem = { "RemoveLootItem", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULootoolEditorWidget, RemoveLootItem), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_RemoveLootItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_RemoveLootItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_SelectedItemID_MetaData[] = {
		{ "Category", "Lootool" },
		{ "ModuleRelativePath", "Public/LootoolEditorWidget.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_SelectedItemID = { "SelectedItemID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULootoolEditorWidget, SelectedItemID), METADATA_PARAMS(Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_SelectedItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_SelectedItemID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULootoolEditorWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_ListOfItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_LootData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_AddLootItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_RemoveLootItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootoolEditorWidget_Statics::NewProp_SelectedItemID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootoolEditorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootoolEditorWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootoolEditorWidget_Statics::ClassParams = {
		&ULootoolEditorWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULootoolEditorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULootoolEditorWidget_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULootoolEditorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULootoolEditorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULootoolEditorWidget()
	{
		if (!Z_Registration_Info_UClass_ULootoolEditorWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootoolEditorWidget.OuterSingleton, Z_Construct_UClass_ULootoolEditorWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootoolEditorWidget.OuterSingleton;
	}
	template<> LOOTOOL_API UClass* StaticClass<ULootoolEditorWidget>()
	{
		return ULootoolEditorWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootoolEditorWidget);
	struct Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_LootoolEditorWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_LootoolEditorWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootoolEditorWidget, ULootoolEditorWidget::StaticClass, TEXT("ULootoolEditorWidget"), &Z_Registration_Info_UClass_ULootoolEditorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootoolEditorWidget), 937618080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_LootoolEditorWidget_h_1374172732(TEXT("/Script/Lootool"),
		Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_LootoolEditorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_LootoolEditorWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
