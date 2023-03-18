
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
	UFUNCTION(BlueprintCallable)
	FString GetTableAsString();

	/* Adds items, and can also be used to edit existing items */
	UFUNCTION(BlueprintCallable)
	void AddItem(FName Name, FItemDetails ItemDetails);

	UFUNCTION(BlueprintCallable)
	void RemoveItem(FName Name);

	
public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UVerticalBox* ListOfItems;

	UPROPERTY(BlueprintReadWrite)
	class UDataTable* LootData;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* AddLootItem;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* RemoveLootItem;
	
	UPROPERTY(BlueprintReadWrite)
	FName SelectedItemID;
};
