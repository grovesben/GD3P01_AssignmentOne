
#include "LootoolEditorWidget.h"

#include "ItemWidget.h"
#include "LootItem.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet2/KismetEditorUtilities.h"

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

void ULootoolEditorWidget::AddItem(FName Name, FItemDetails ItemDetails)
{
	LootData->AddRow(Name, ItemDetails);
}

void ULootoolEditorWidget::RemoveItem(FName Name)
{
	LootData->RemoveRow(Name);
}
