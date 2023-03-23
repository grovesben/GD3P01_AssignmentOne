// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lootool/Public/LootItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootItem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	LOOTOOL_API UClass* Z_Construct_UClass_ALootItem();
	LOOTOOL_API UClass* Z_Construct_UClass_ALootItem_NoRegister();
	LOOTOOL_API UEnum* Z_Construct_UEnum_Lootool_EItemType();
	LOOTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FItemDetails();
	UPackage* Z_Construct_UPackage__Script_Lootool();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
	static UEnum* EItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Lootool_EItemType, Z_Construct_UPackage__Script_Lootool(), TEXT("EItemType"));
		}
		return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
	}
	template<> LOOTOOL_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_Lootool_EItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Lootool_EItemType_Statics::Enumerators[] = {
		{ "EItemType::Trash", (int64)EItemType::Trash },
		{ "EItemType::BunnyBait", (int64)EItemType::BunnyBait },
		{ "EItemType::MaskedBait", (int64)EItemType::MaskedBait },
		{ "EItemType::KingBait", (int64)EItemType::KingBait },
		{ "EItemType::Useable", (int64)EItemType::Useable },
		{ "EItemType::DEFAULT", (int64)EItemType::DEFAULT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Lootool_EItemType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BunnyBait.Name", "EItemType::BunnyBait" },
		{ "Comment", "/* Enum for all items type */" },
		{ "DEFAULT.Name", "EItemType::DEFAULT" },
		{ "KingBait.Name", "EItemType::KingBait" },
		{ "MaskedBait.Name", "EItemType::MaskedBait" },
		{ "ModuleRelativePath", "Public/LootItem.h" },
		{ "ToolTip", "Enum for all items type" },
		{ "Trash.Name", "EItemType::Trash" },
		{ "Useable.Name", "EItemType::Useable" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Lootool_EItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Lootool,
		nullptr,
		"EItemType",
		"EItemType",
		Z_Construct_UEnum_Lootool_EItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Lootool_EItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Lootool_EItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Lootool_EItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Lootool_EItemType()
	{
		if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_Lootool_EItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FItemDetails>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemDetails cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemDetails;
class UScriptStruct* FItemDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemDetails, Z_Construct_UPackage__Script_Lootool(), TEXT("ItemDetails"));
	}
	return Z_Registration_Info_UScriptStruct_ItemDetails.OuterSingleton;
}
template<> LOOTOOL_API UScriptStruct* StaticStruct<FItemDetails>()
{
	return FItemDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValueAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumStackSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumStackSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IconTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Rarity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Struct for holding details for items (type, rarity, value, etc)*/" },
		{ "ModuleRelativePath", "Public/LootItem.h" },
		{ "ToolTip", "Struct for holding details for items (type, rarity, value, etc)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Lootool" },
		{ "ModuleRelativePath", "Public/LootItem.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemDetails, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Lootool" },
		{ "ModuleRelativePath", "Public/LootItem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemDetails, Type), Z_Construct_UEnum_Lootool_EItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Type_MetaData)) }; // 3940969416
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_ValueAmount_MetaData[] = {
		{ "Category", "Lootool" },
		{ "ModuleRelativePath", "Public/LootItem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_ValueAmount = { "ValueAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemDetails, ValueAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_ValueAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_ValueAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_MaximumStackSize_MetaData[] = {
		{ "Category", "Lootool" },
		{ "ModuleRelativePath", "Public/LootItem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_MaximumStackSize = { "MaximumStackSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemDetails, MaximumStackSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_MaximumStackSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_MaximumStackSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Lootool" },
		{ "ModuleRelativePath", "Public/LootItem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemDetails, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_IconTexture_MetaData[] = {
		{ "Category", "Lootool" },
		{ "ModuleRelativePath", "Public/LootItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_IconTexture = { "IconTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemDetails, IconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_IconTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_IconTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "Lootool" },
		{ "ModuleRelativePath", "Public/LootItem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemDetails, Rarity), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Rarity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_ValueAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_MaximumStackSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_IconTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Rarity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Lootool,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ItemDetails",
		sizeof(FItemDetails),
		alignof(FItemDetails),
		Z_Construct_UScriptStruct_FItemDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemDetails.InnerSingleton, Z_Construct_UScriptStruct_FItemDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemDetails.InnerSingleton;
	}
	DEFINE_FUNCTION(ALootItem::execInitLootItem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ItemLootID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitLootItem(Z_Param_ItemLootID);
		P_NATIVE_END;
	}
	void ALootItem::StaticRegisterNativesALootItem()
	{
		UClass* Class = ALootItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitLootItem", &ALootItem::execInitLootItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALootItem_InitLootItem_Statics
	{
		struct LootItem_eventInitLootItem_Parms
		{
			FName ItemLootID;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ItemLootID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALootItem_InitLootItem_Statics::NewProp_ItemLootID = { "ItemLootID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LootItem_eventInitLootItem_Parms, ItemLootID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALootItem_InitLootItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALootItem_InitLootItem_Statics::NewProp_ItemLootID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALootItem_InitLootItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lootool" },
		{ "Comment", "/* Initialize when spawned with mesh and LootID */" },
		{ "ModuleRelativePath", "Public/LootItem.h" },
		{ "ToolTip", "Initialize when spawned with mesh and LootID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALootItem_InitLootItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALootItem, nullptr, "InitLootItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALootItem_InitLootItem_Statics::LootItem_eventInitLootItem_Parms), Z_Construct_UFunction_ALootItem_InitLootItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALootItem_InitLootItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALootItem_InitLootItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALootItem_InitLootItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALootItem_InitLootItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALootItem_InitLootItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALootItem);
	UClass* Z_Construct_UClass_ALootItem_NoRegister()
	{
		return ALootItem::StaticClass();
	}
	struct Z_Construct_UClass_ALootItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LootID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LootID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALootItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Lootool,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALootItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALootItem_InitLootItem, "InitLootItem" }, // 1509971022
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LootItem.h" },
		{ "ModuleRelativePath", "Public/LootItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootItem_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Lootool" },
		{ "Comment", "/* Static Mesh for the model of the item */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LootItem.h" },
		{ "ToolTip", "Static Mesh for the model of the item" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALootItem_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALootItem, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALootItem_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootItem_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootItem_Statics::NewProp_LootID_MetaData[] = {
		{ "Category", "Lootool" },
		{ "ModuleRelativePath", "Public/LootItem.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALootItem_Statics::NewProp_LootID = { "LootID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALootItem, LootID), METADATA_PARAMS(Z_Construct_UClass_ALootItem_Statics::NewProp_LootID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootItem_Statics::NewProp_LootID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALootItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootItem_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootItem_Statics::NewProp_LootID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALootItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALootItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALootItem_Statics::ClassParams = {
		&ALootItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALootItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALootItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALootItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALootItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALootItem()
	{
		if (!Z_Registration_Info_UClass_ALootItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALootItem.OuterSingleton, Z_Construct_UClass_ALootItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALootItem.OuterSingleton;
	}
	template<> LOOTOOL_API UClass* StaticClass<ALootItem>()
	{
		return ALootItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALootItem);
	ALootItem::~ALootItem() {}
	struct Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_LootItem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_LootItem_h_Statics::EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3940969416U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_LootItem_h_Statics::ScriptStructInfo[] = {
		{ FItemDetails::StaticStruct, Z_Construct_UScriptStruct_FItemDetails_Statics::NewStructOps, TEXT("ItemDetails"), &Z_Registration_Info_UScriptStruct_ItemDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemDetails), 530956624U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_LootItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALootItem, ALootItem::StaticClass, TEXT("ALootItem"), &Z_Registration_Info_UClass_ALootItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALootItem), 552921497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_LootItem_h_15169452(TEXT("/Script/Lootool"),
		Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_LootItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_LootItem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_LootItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_LootItem_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_LootItem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MDS00002H0_Documents_GitHub_GD3P01_AssignmentOne_GD3P01_Assignment1_Lootool_Lootool_HostProject_Plugins_Lootool_Source_Lootool_Public_LootItem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
