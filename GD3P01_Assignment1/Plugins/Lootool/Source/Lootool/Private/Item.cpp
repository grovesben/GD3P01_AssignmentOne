#include "Item.h"

#include "Kismet/KismetSystemLibrary.h"

AItem::AItem()
{
	ItemDetails.Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = ItemDetails.Mesh;
}

void AItem::BeginPlay()
{
	Super::BeginPlay();
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
