
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
	UFUNCTION(BlueprintCallable)
	void SetDetailsVisibility(bool bIsVisible);
	
public:
	UPROPERTY(BlueprintReadWrite, Category = Default, meta = (ExposeOnSpawn=true))
	UDataTable* DataTable;
	
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UDetailsView* Details;

	UPROPERTY(BlueprintReadWrite, Category = Default, meta = (ExposeOnSpawn=true))
	FName ItemID;
};
