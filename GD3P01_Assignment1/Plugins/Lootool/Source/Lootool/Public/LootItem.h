// Benjamin Bartlett | Media Design School | GD3P01 Assignment 1

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LootItem.generated.h"

/* Enum for all items type */
UENUM(BlueprintType)
enum class EItemType : uint8
{
	Trash,
	BunnyBait,
	MaskedBait,
	KingBait,
	Useable,
	DEFAULT
};

/* Struct for holding details for items (type, rarity, value, etc)*/
USTRUCT(BlueprintType)
struct FItemDetails : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Lootool")
	FText Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Lootool")
	EItemType Type = EItemType::DEFAULT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Lootool")
	int32 ValueAmount = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Lootool")
	int32 MaximumStackSize = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Lootool")
	int32 Weight = 0;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category= "Lootool")
	UTexture2D* IconTexture = nullptr;
};

UCLASS()
class LOOTOOL_API ALootItem : public AActor
{
	GENERATED_BODY()

public: 
	/* Constructor */
	ALootItem();

	/* Initialize when spawned with mesh and LootID */
	UFUNCTION(BlueprintCallable, Category= "Lootool")
	void InitLootItem(FName ItemLootID);
	
protected:
	/* Called when the game starts or when spawned */
	virtual void BeginPlay() override;

public:
	/* Called every frame */
	virtual void Tick(float DeltaTime) override;

	/* Static Mesh for the model of the item */		
	UPROPERTY(EditAnywhere, Category= "Lootool")
	class UStaticMeshComponent* Mesh = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category= "Lootool")
	FName LootID;
};
