
#include "LootoolEditorWidget.h"

#include "ItemWidget.h"
#include "LootItem.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet2/KismetEditorUtilities.h"

ULootoolEditorWidget::ULootoolEditorWidget()
{
}

ULootoolEditorWidget::~ULootoolEditorWidget()
{
}

void ULootoolEditorWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	//TArray<AActor*> Items;
	//UGameplayStatics::GetAllActorsOfClass(GetWorld(), ALootItem::StaticClass(), Items);
	//for(auto ItemActor : Items)
	//{
	//	if (auto* Item = Cast<ALootItem>(ItemActor))
	//	{
	//		FName Name = "Item->Name";
	//		CreateWidgetInstance(this, );
	//	}
	//}
}

TArray<UClass*> ULootoolEditorWidget::GetAllLootItems()
{
	/* TArray<UClass*> FoundItems;
	/*
	for(TObjectIterator< UClass > ClassIt; ClassIt; ++ClassIt)
	{
		UClass* Class = *ClassIt;

		// Only interested in native C++ classes
		if(!Class->IsNative())
		{
			continue;
		}

		// Ignore deprecated
		if(Class->HasAnyClassFlags(CLASS_Deprecated | CLASS_NewerVersionExists))
		{
			continue;
		}

#if WITH_EDITOR
		// Ignore skeleton classes (semi-compiled versions that only exist in-editor)
		if(FKismetEditorUtilities::IsClassABlueprintSkeleton(Class))
		{
			continue;
		}
#endif

		// Check this class is a subclass of Base
		if(!Class->IsChildOf(ALootItem::StaticClass()))
		{
			continue;
		}

		// Add this class
		FoundItems.Add(Class);
	}

	return FoundItems;*/
	
	
	// Load the asset registry module
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked< FAssetRegistryModule >(FName("AssetRegistry"));
	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();
	
	// The asset registry is populated asynchronously at startup, so there's no guarantee it has finished.
	// This simple approach just runs a synchronous scan on the entire content directory.
	// Better solutions would be to specify only the path to where the relevant blueprints are,
	// or to register a callback with the asset registry to be notified of when it's finished populating.
	TArray< FString > ContentPaths;
	ContentPaths.Add(TEXT("/Game/Content/LootItems/"));
	AssetRegistry.ScanPathsSynchronous(ContentPaths);

	FName BaseClassName = ALootItem::StaticClass()->GetFName();

	// Use the asset registry to get the set of all class names deriving from Base
	TSet< FName > DerivedNames;
	{
		TArray< FName > BaseNames;
		BaseNames.Add(BaseClassName);

		TSet< FName > Excluded;
		AssetRegistry.GetDerivedClassNames(BaseNames, Excluded, DerivedNames);
	}
	FARFilter Filter;
	Filter.ClassNames.Add(UBlueprint::StaticClass()->GetFName());
	Filter.bRecursiveClasses = true;
	//if(!Path.IsEmpty())
	//{
	//	Filter.PackagePaths.Add(*Path);
	//}
	Filter.bRecursivePaths = true;

	TArray< FAssetData > AssetList;
	AssetRegistry.GetAssets(Filter, AssetList);

	TArray<AActor*> Subclasses;
	
	// Iterate over retrieved blueprint assets
	for(auto const& Asset : AssetList)
	{
		// Get the the class this blueprint generates (this is stored as a full path)
		auto GeneratedClassPathPtr = Asset.TagsAndValues.FindRef(TEXT("GeneratedClass"));
		
		// Convert path to just the name part
		const FString ClassObjectPath = FPackageName::ExportTextPathToObjectPath(*GeneratedClassPathPtr);
		const FString ClassName = FPackageName::ObjectPathToObjectName(ClassObjectPath);
		// Check if this class is in the derived set
		if(!DerivedNames.Contains(*ClassName))
		{
			continue;
		}
		// Store using the path to the generated class
		Subclasses.Add(TAssetSubclassOf< UObject >(FSoftObjectPath(ClassObjectPath)));
		
	}
	
	
}
