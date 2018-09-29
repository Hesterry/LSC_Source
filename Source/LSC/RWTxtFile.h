// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "StructDigester.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
// Must be at end of includes
#include "RWTxtFile.generated.h"

UCLASS()
class LSC_API URWTxtFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY() public:

		UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "LoadTxt"))
			static void LoadTxt(FString FileName, FString& LoadString);

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "SaveTxt"))
			static void SaveTxt(FString SaveString, FString FileName);

		UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "LoadItemDataFromStrings"))
			static TArray<struct FItemInfoStruct> LoadItemDataFromStrings(TArray<FString> StringList);

		UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "LoadMatGroupMetaFromStrings"))
			static TArray<struct FMatGroupMetaStruct> LoadMatGroupMetaFromStrings(TArray<FString> StringList);

		UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "LoadAltMatRecipesFromStrings"))
			static TArray<struct FAltRecipeMatStruct> LoadAltMatRecipesFromStrings(TArray<FString> StringList);

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "FileExists"))
			static bool DoesFileExist(FString FileName, FString FilePath);

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "OpenDirectory"))
			static void OpenDirectoryInOS(FString InPath);
};