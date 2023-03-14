
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
	TArray<UClass*> GetAllLootItems();
public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UVerticalBox* ListOfItems;

};
