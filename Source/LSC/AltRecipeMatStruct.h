// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
// Must be at end of includes
#include "AltRecipeMatStruct.generated.h"

USTRUCT(BlueprintType)
struct FAltRecipeMatStruct : public FTableRowBase
{
GENERATED_USTRUCT_BODY() public:

	// Define variables in the struct
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
		FString ItemName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
		FString StdMatName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
		int32 AltMatQuantity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
		FString AltMatName;

	// Define default values of the variables in the struct
	FAltRecipeMatStruct()
	{
		ItemName = "";
		StdMatName = "";
		AltMatQuantity = 0;
		AltMatName = "";
	}
};