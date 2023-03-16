// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LootItemComponent.h"
#include "GameFramework/Actor.h"
#include "LootItem.generated.h"

/* Enum for all items type */
UENUM(BlueprintType)
enum class EItemType : uint8
{
	/*grouping some types and replace with names #1#
	Pebble,
	Stick,
	Carrot,
	Meat,
	Antler,
	Mask,
	Crown,
	Potion,
	/* ------------------------------------------- */
	
	Trash,
	BunnyBait,
	MaskedBait,
	KingBait,
	Useable,
	DEFAULT
};

/* Struct for holding details for items (type, rarity, value)*/
USTRUCT(BlueprintType)
struct FItemDetails : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemType Type = EItemType::DEFAULT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ValueAmount = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaximumStackSize = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Weight = 0;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTexture2D* IconTexture = nullptr;
};

UCLASS()
class LOOTOOL_API ALootItem : public AActor
{
	GENERATED_BODY()

public: 
	/* Constructor */
	ALootItem();

protected:
	/* Called when the game starts or when spawned */
	virtual void BeginPlay() override;

public:
	/* Called every frame */
	virtual void Tick(float DeltaTime) override;

	///* Struct holding the loot items details */
	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//FItemDetails ItemDetails;

	/* Static Mesh for the model of the item */		
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* Mesh = nullptr;

	UPROPERTY(EditAnywhere)
	ULootItemComponent* LootItemComponent;

	class UDataTable* TestDataTable;
};
