// Fill out your copyright notice in the Description page of Project Settings.


#include "LootItem.h"


// Sets default values
ALootItem::ALootItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	LootItemComponent = CreateDefaultSubobject<ULootItemComponent>("LootItemComponent");
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

