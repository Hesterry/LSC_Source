// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
// Must be at end of includes
#include "MatGroupMetaStruct.generated.h"

USTRUCT(BlueprintType)
struct FMatGroupMetaStruct : public FTableRowBase
{
GENERATED_USTRUCT_BODY() public:

	// Define variables in the struct
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
		int32 GroupID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
		FString GroupName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
		int32 CurrentValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
		int32 Override;

	// Define default values of the variables in the struct
	FMatGroupMetaStruct()
	{
		GroupID = 0;
		GroupName = "";
		CurrentValue = 0;
		Override = 0;
	}
};