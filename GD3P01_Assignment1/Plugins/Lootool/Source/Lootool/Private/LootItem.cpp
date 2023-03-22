// Benjamin Bartlett | Media Design School | GD3P01 Assignment 1


#include "LootItem.h"

// Sets default values
ALootItem::ALootItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ALootItem::InitLootItem(FName ItemLootID)
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	LootID = ItemLootID;
}

// Called when the game starts or when spawned
void ALootItem::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ALootItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

