// Benjamin Bartlett | Media Design School | GD3P01 Assignment 1
#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityWidget.h"
#include "LootoolEditorWidget.generated.h"

UCLASS(BlueprintType)
class LOOTOOL_API ULootoolEditorWidget : public UEditorUtilityWidget
{
	GENERATED_BODY()
public:
	ULootoolEditorWidget();
	~ULootoolEditorWidget();
	
protected:
	virtual void NativePreConstruct() override;

public:
	/* Experimenting with converting Data Table to string for editing */
	UFUNCTION(BlueprintCallable, Category= "Lootool")
	FString GetTableAsString();

	/* Adds items, and can also be used to edit existing items */
	UFUNCTION(BlueprintCallable, Category= "Lootool")
	void AddItem(FName LootID, FItemDetails ItemDetails);

	/* Removes items by their Name aka LootID */
	UFUNCTION(BlueprintCallable, Category= "Lootool")
	void RemoveItem(FName LootID);

	/* Attempting to create a blueprint asset and then change properties */
	/*UFUNCTION(BlueprintCallable)
	void GenerateBP();*/
public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category= "Lootool")
	class UVerticalBox* ListOfItems;

	UPROPERTY(BlueprintReadWrite, Category= "Lootool")
	class UDataTable* LootData;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category= "Lootool")
	class UButton* AddLootItem;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category= "Lootool")
	class UButton* RemoveLootItem;
	
	UPROPERTY(BlueprintReadWrite, Category= "Lootool")
	FName SelectedItemID;
};
