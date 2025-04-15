// Copyright Broken Rock Studios LLC. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PDATest.generated.h"

/**
 * 
 */
UCLASS()
class ROCKINVENTORYEXAMPLE_API UPDATest : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Test")
	int32 TestInt = 42;
	
	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId(FPrimaryAssetType("PDATest"), GetFName());
	}
};
