// Fill out your copyright notice in the Description page of Project Settings.

// Must be at start of includes
#include "RWTxtFile.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/Core/Public/Misc/FileHelper.h"
#include "Runtime/Core/Public/GenericPlatform/GenericPlatformProcess.h"
//#include "LSC.h"

// Checks to see if a specific file exists
bool URWTxtFile::DoesFileExist(FString FileName, FString FilePath)
{
	return FPaths::FileExists((FilePath + FileName));
}

// Loads a text file into a string
void URWTxtFile::LoadTxt(FString FileName, FString& LoadString)
{
	FFileHelper::LoadFileToString(LoadString, *(FPaths::ProjectDir() + FileName));
}

// Saves a string to a text file
void URWTxtFile::SaveTxt(FString SaveString, FString FileName)
{
	FFileHelper::SaveStringToFile(SaveString, *(FPaths::ProjectDir() + FileName));
}

// Opens a given directory in a windows explorer window
void URWTxtFile::OpenDirectoryInOS(FString InPath)
{
	FPlatformProcess::CreateProc(TEXT("explorer.exe"), *FString::Printf(*InPath.Replace(TEXT("/"), TEXT("\\"))), true, false, false, nullptr, 0, nullptr, nullptr);
}

// Parses an array of strings into an array of item info structs
TArray<struct FItemInfoStruct> URWTxtFile::LoadItemDataFromStrings(TArray<FString> StringList)
{
	TArray<struct FItemInfoStruct> InventoryItems = TArray<struct FItemInfoStruct>();

	FString itemString = "";
	for (int i = 0; i < StringList.Num(); i++) {
		itemString = StringList[i];

		struct FItemInfoStruct tmpItem = UStructDigester::ParseItemInfoStruct(itemString);
		InventoryItems.Add(tmpItem);
	}

	return InventoryItems;
}

// Parses an array of strings into an array of material group meta info structs
TArray<struct FMatGroupMetaStruct> URWTxtFile::LoadMatGroupMetaFromStrings(TArray<FString> StringList)
{
	TArray<struct FMatGroupMetaStruct> MatGroupMetas = TArray<struct FMatGroupMetaStruct>();

	FString metaString = "";
	for (int i = 0; i < StringList.Num(); i++) {
		metaString = StringList[i];

		struct FMatGroupMetaStruct tmpItem = UStructDigester::ParseMatGroupMetaStruct(metaString);
		MatGroupMetas.Add(tmpItem);
	}

	return MatGroupMetas;
}

// Parses an array of strings into an array of alternate material structs
TArray<struct FAltRecipeMatStruct> URWTxtFile::LoadAltMatRecipesFromStrings(TArray<FString> StringList)
{
	TArray<struct FAltRecipeMatStruct> AltMatRecipes = TArray<struct FAltRecipeMatStruct>();

	FString metaString = "";
	for (int i = 0; i < StringList.Num(); i++) {
		metaString = StringList[i];

		struct FAltRecipeMatStruct tmpItem = UStructDigester::ParseAltRecipeMatStruct(metaString);
		AltMatRecipes.Add(tmpItem);
	}

	return AltMatRecipes;
}