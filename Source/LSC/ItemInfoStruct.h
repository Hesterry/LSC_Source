// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
// Must be at end of includes
#include "ItemInfoStruct.generated.h"

USTRUCT(BlueprintType)
struct FItemInfoStruct : public FTableRowBase
{
	GENERATED_USTRUCT_BODY() public:

		// Define variables in the struct
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			int32 ItemID;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			FString ItemName;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			int32 CurrentValue;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			FString LastUpdated;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			int32 LowValue;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			FString LowSeenDate;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			int32 HighValue;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			FString HighSeenDate;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			int32 Override;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			bool Taxed;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			bool Bottleneck;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			int32 Mat1Qty;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			FString Mat1;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			int32 Mat2Qty;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			FString Mat2;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			int32 Mat3Qty;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			FString Mat3;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			int32 Mat4Qty;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			FString Mat4;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			int32 Mat5Qty;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			FString Mat5;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			int32 Mat6Qty;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			FString Mat6;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			float ProductionMultiplier;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			float CritChance;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			FString CritProduct;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			int32 Experience;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			FString ProductionTime;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			FString Source;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			FString MatGroup;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			FString Tag;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
			FString Description;

		// Define default values of the variables in the struct
		FItemInfoStruct()
		{
			ItemID = 0;
			ItemName = "";
			CurrentValue = 0;
			LastUpdated = "";
			LowValue = 0;
			LowSeenDate = "";
			HighValue = 0;
			HighSeenDate = "";
			Override = 0;
			Taxed = true;
			Bottleneck = false;
			Mat1Qty = 0;
			Mat1 = "";
			Mat2Qty = 0;
			Mat2 = "";
			Mat3Qty = 0;
			Mat3 = "";
			Mat4Qty = 0;
			Mat4 = "";
			Mat5Qty = 0;
			Mat5 = "";
			Mat6Qty = 0;
			Mat6 = "";
			ProductionMultiplier = 0;
			CritChance = 0;
			CritProduct = "";
			Experience = 0;
			ProductionTime = "";
			Source = "";
			MatGroup = "";
			Tag = "";
			Description = "";
		}
};