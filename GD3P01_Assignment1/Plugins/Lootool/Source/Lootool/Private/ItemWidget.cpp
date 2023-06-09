// Benjamin Bartlett | Media Design School | GD3P01 Assignment 1
#include "ItemWidget.h"
#include "Components/DetailsView.h"

#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UMGEditor/Public/Components/DetailsView.h"
#include "UMGEditor/Public/Components/SinglePropertyView.h"

void UItemWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	
	Details->SetObject(this);
}
