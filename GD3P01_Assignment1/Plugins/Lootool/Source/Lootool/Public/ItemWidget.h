// Benjamin Bartlett | Media Design School | GD3P01 Assignment 1
#pragma once

#include "CoreMinimal.h"
#include "LootItem.h"
#include "Blueprint/UserWidget.h"
#include "ItemWidget.generated.h"

UCLASS(BlueprintType)
class LOOTOOL_API UItemWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativePreConstruct() override;
public:
	UPROPERTY(BlueprintReadWrite, Category= "Lootool", meta = (ExposeOnSpawn=true))
	UDataTable* LootData;
	
	UPROPERTY(EditAnywhere, Category= "Lootool", meta = (BindWidget))
	class UDetailsView* Details;

	UPROPERTY(BlueprintReadWrite, Category= "Lootool", meta = (ExposeOnSpawn=true))
	FName ItemID;
};
