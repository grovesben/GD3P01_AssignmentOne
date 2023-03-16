
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

void UItemWidget::SetDetailsVisibility(bool bIsVisible)
{
	if (bIsVisible)
	{
		Details->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		Details->SetVisibility(ESlateVisibility::Hidden);
	}
}
