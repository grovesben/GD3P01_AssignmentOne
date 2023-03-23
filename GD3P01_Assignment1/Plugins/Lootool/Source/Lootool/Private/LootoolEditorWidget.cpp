// Benjamin Bartlett | Media Design School | GD3P01 Assignment 1
#include "LootoolEditorWidget.h"

#include "EngineUtils.h"
#include "ItemWidget.h"
#include "LootItem.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Components/VerticalBox.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Subsystems/EditorAssetSubsystem.h"
#include "UObject/UnrealType.h"
#include "UObject/UnrealTypePrivate.h"
#include "UObject/Class.h"

ULootoolEditorWidget::ULootoolEditorWidget()
{
}

ULootoolEditorWidget::~ULootoolEditorWidget()
{
}

void ULootoolEditorWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
}

FString ULootoolEditorWidget::GetTableAsString()
{
	return LootData->GetTableAsString(EDataTableExportFlags::UseSimpleText);	
}

void ULootoolEditorWidget::AddItem(FName LootID, FItemDetails ItemDetails)
{
	LootData->AddRow(LootID, ItemDetails);
}

void ULootoolEditorWidget::RemoveItem(FName LootID)
{
	LootData->RemoveRow(LootID);
}
 // //Unstable..
 // void ULootoolEditorWidget::GenerateBP()
 // {
 // 	FString Source = "/Lootool/BP_LootItem_TEMPLATE.BP_LootItem_TEMPLATE";
 // 	FString Destination = "/Game/LootItems/BP_" + SelectedItemID.ToString();
 // 	
 // 	UEditorAssetSubsystem* EditorAssetSubsystem = GEditor->GetEditorSubsystem<UEditorAssetSubsystem>();
 //
 // 	UObject* NewObject = EditorAssetSubsystem->DuplicateAsset(Source,Destination);
 // 	if (ALootItem* LootItem = Cast<ALootItem>(NewObject))
 // 	{
 // 		UClass* PropertyClass = UNameProperty::StaticClass();
 // 		FName LootIDName = "LootID";
 // 		FProperty* Property = new FProperty(LootItem, LootIDName, EObjectFlags::RF_Transient);
 //
 // 		FName* Value{};
 // 		if (UKismetSystemLibrary::Generic_GetEditorProperty(LootItem, Property, Value, Property))
 // 		{
 // 			UE_LOG(LogTemp, Warning, TEXT("____________________________________succes, %s"), *Value->ToString());
 // 		}
 // 		else
 // 		{
 // 			UE_LOG(LogTemp, Warning, TEXT("fail__________________________________________"));
 // 		}
 //
 // 		/*LootItem->InitLootItem(SelectedItemID);*/
 // 	}
 // 	else
 // 	{
 // 		UE_LOG(LogTemp, Warning, TEXT("fail_______________________big___________________"));
 // 	}
 //}
