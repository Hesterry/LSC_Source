// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ItemInfoStruct.h"
#include "MatGroupMetaStruct.h"
#include "AltRecipeMatStruct.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
// Must be at end of includes
#include "StructDigester.generated.h"

UCLASS()
class LSC_API UStructDigester : public UBlueprintFunctionLibrary
{
	GENERATED_BODY() public:

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "DigestItemInfoStruct"))
			static FString DigestItemInfoStruct(UPARAM(ref) struct FItemInfoStruct& infostruct);

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "ParseItemInfoStruct"))
			static FItemInfoStruct ParseItemInfoStruct(FString infostring);

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "DigestItemInfoStruct"))
			static FString DigestMatGroupMetaStruct(UPARAM(ref) struct FMatGroupMetaStruct& metastruct);

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "ParseMatGroupMetaStruct"))
			static FMatGroupMetaStruct ParseMatGroupMetaStruct(FString metastring);

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "DigestAltRecipeMatStruct"))
			static FString DigestAltRecipeMatStruct(UPARAM(ref) struct FAltRecipeMatStruct& altmatstruct);

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "ParseAltRecipeMatStruct"))
			static FAltRecipeMatStruct ParseAltRecipeMatStruct(FString altmatstring);
};