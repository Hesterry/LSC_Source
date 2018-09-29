// Fill out your copyright notice in the Description page of Project Settings.

// Must be at start of includes
#include "StructDigester.h"

FString IntValueToString(int32 value);
FString FloatValueToString(float value);
FString BoolValueToString(bool value);


// These three functions are called to quickly process strings into ints, floats, and bools

FString IntValueToString(int32 value)
{
	if (value == 0) {
		return "";
	}
	else { return FString::FromInt(value); }
}

FString FloatValueToString(float value)
{
	if (value == 0) {
		return "";
	}
	else { return FString::SanitizeFloat(value); }
}

FString BoolValueToString(bool value)
{
	if (value == true)
	{
		return "Yes";
	}
	else
	{
		return "No";
	}
}

// This processes an item struct into a string
FString UStructDigester::DigestItemInfoStruct(UPARAM(ref) struct FItemInfoStruct& infostruct)
{
	FString rest = IntValueToString(infostruct.ItemID);
	rest = rest + "," + infostruct.ItemName;
	rest = rest + "," + IntValueToString(infostruct.CurrentValue);
	rest = rest + "," + infostruct.LastUpdated;
	rest = rest + "," + IntValueToString(infostruct.LowValue);
	rest = rest + "," + infostruct.LowSeenDate;
	rest = rest + "," + IntValueToString(infostruct.HighValue);
	rest = rest + "," + infostruct.HighSeenDate;
	rest = rest + "," + IntValueToString(infostruct.Override);
	rest = rest + "," + BoolValueToString(infostruct.Taxed);
	rest = rest + "," + BoolValueToString(infostruct.Bottleneck);
	rest = rest + "," + IntValueToString(infostruct.Mat1Qty);
	rest = rest + "," + infostruct.Mat1;
	rest = rest + "," + IntValueToString(infostruct.Mat2Qty);
	rest = rest + "," + infostruct.Mat2;
	rest = rest + "," + IntValueToString(infostruct.Mat3Qty);
	rest = rest + "," + infostruct.Mat3;
	rest = rest + "," + IntValueToString(infostruct.Mat4Qty);
	rest = rest + "," + infostruct.Mat4;
	rest = rest + "," + IntValueToString(infostruct.Mat5Qty);
	rest = rest + "," + infostruct.Mat5;
	rest = rest + "," + IntValueToString(infostruct.Mat6Qty);
	rest = rest + "," + infostruct.Mat6;
	rest = rest + "," + FloatValueToString(infostruct.ProductionMultiplier);
	rest = rest + "," + FloatValueToString(infostruct.CritChance);
	rest = rest + "," + infostruct.CritProduct;
	rest = rest + "," + IntValueToString(infostruct.Experience);
	rest = rest + "," + infostruct.ProductionTime;
	rest = rest + "," + infostruct.Source;
	rest = rest + "," + infostruct.MatGroup;
	rest = rest + "," + infostruct.Tag;
	rest = rest + "," + infostruct.Description;
	return rest;
}

// This processes a string into an item struct
FItemInfoStruct UStructDigester::ParseItemInfoStruct(FString infostring)
{
	FItemInfoStruct ItemInfo = FItemInfoStruct();

	TArray<FString> OutArr;
	infostring.ParseIntoArray(OutArr, TEXT(","), false);

	int32 count = 0;
	for (auto& StrVal : OutArr)
	{
		switch (count) {
		case 0: {
			int32 MyShinyNewInt = FCString::Atoi(*StrVal);
			ItemInfo.ItemID = MyShinyNewInt;
		}
		case 1: {
			ItemInfo.ItemName = StrVal;
		}
		case 2: {
			int32 MyShinyNewInt = FCString::Atoi(*StrVal);
			ItemInfo.CurrentValue = MyShinyNewInt;
		}
		case 3: {
			ItemInfo.LastUpdated = StrVal;
		}
		case 4: {
			int32 MyShinyNewInt = FCString::Atoi(*StrVal);
			ItemInfo.LowValue = MyShinyNewInt;
		}
		case 5: {
			ItemInfo.LowSeenDate = StrVal;
		}
		case 6: {
			int32 MyShinyNewInt = FCString::Atoi(*StrVal);
			ItemInfo.HighValue = MyShinyNewInt;
		}
		case 7: {
			ItemInfo.HighSeenDate = StrVal;
		}
		case 8: {
			int32 MyShinyNewInt = FCString::Atoi(*StrVal);
			ItemInfo.Override = MyShinyNewInt;
		}
		case 9: {
			if (StrVal == "Yes" || StrVal == "yes" || StrVal == "Y" || StrVal == "y")
			{
				ItemInfo.Taxed = true;
			}
			else
			{
				ItemInfo.Taxed = false;
			}
		}
		case 10: {
			if (StrVal == "Yes" || StrVal == "yes" || StrVal == "Y" || StrVal == "y")
			{
				ItemInfo.Bottleneck = true;
			}
			else
			{
				ItemInfo.Bottleneck = false;
			}
		}
		case 11: {
			int32 MyShinyNewInt = FCString::Atoi(*StrVal);
			ItemInfo.Mat1Qty = MyShinyNewInt;
		}
		case 12: {
			ItemInfo.Mat1 = StrVal;
		}
		case 13: {
			int32 MyShinyNewInt = FCString::Atoi(*StrVal);
			ItemInfo.Mat2Qty = MyShinyNewInt;
		}
		case 14: {
			ItemInfo.Mat2 = StrVal;
		}
		case 15: {
			int32 MyShinyNewInt = FCString::Atoi(*StrVal);
			ItemInfo.Mat3Qty = MyShinyNewInt;
		}
		case 16: {
			ItemInfo.Mat3 = StrVal;
		}
		case 17: {
			int32 MyShinyNewInt = FCString::Atoi(*StrVal);
			ItemInfo.Mat4Qty = MyShinyNewInt;
		}
		case 18: {
			ItemInfo.Mat4 = StrVal;
		}
		case 19: {
			int32 MyShinyNewInt = FCString::Atoi(*StrVal);
			ItemInfo.Mat5Qty = MyShinyNewInt;
		}
		case 20: {
			ItemInfo.Mat5 = StrVal;
		}
		case 21: {
			int32 MyShinyNewInt = FCString::Atoi(*StrVal);
			ItemInfo.Mat6Qty = MyShinyNewInt;
		}
		case 22: {
			ItemInfo.Mat6 = StrVal;
		}
		case 23: {
			float MyShinyNewFloat = FCString::Atof(*StrVal);
			ItemInfo.ProductionMultiplier = MyShinyNewFloat;
		}
		case 24: {
			float MyShinyNewFloat = FCString::Atof(*StrVal);
			ItemInfo.CritChance = MyShinyNewFloat;
		}
		case 25: {
			ItemInfo.CritProduct = StrVal;
		}
		case 26: {
			int32 MyShinyNewInt = FCString::Atoi(*StrVal);
			ItemInfo.Experience = MyShinyNewInt;
		}
		case 27: {
			ItemInfo.ProductionTime = StrVal;
		}
		case 28: {
			ItemInfo.Source = StrVal;
		}
		case 29: {
			ItemInfo.MatGroup = StrVal;
		}
		case 30: {
			ItemInfo.Tag = StrVal;
		}
		case 31: {
			ItemInfo.Description = StrVal;
		}
		}

		count = count + 1;
	}

	return ItemInfo;
}

// This processes a material group meta struct into a string
FString UStructDigester::DigestMatGroupMetaStruct(UPARAM(ref) struct FMatGroupMetaStruct& metastruct)
{
	FString rest = IntValueToString(metastruct.GroupID);
	rest = rest + "," + metastruct.GroupName;
	rest = rest + "," + IntValueToString(metastruct.CurrentValue);
	rest = rest + "," + IntValueToString(metastruct.Override);
	return rest;
}

// This processes a string into a material group meta struct
FMatGroupMetaStruct UStructDigester::ParseMatGroupMetaStruct(FString metastring)
{
	FMatGroupMetaStruct MatGroupMeta = FMatGroupMetaStruct();

	TArray<FString> OutArr;
	metastring.ParseIntoArray(OutArr, TEXT(","), false);

	int32 count = 0;
	for (auto& StrVal : OutArr)
	{
		switch (count) {
		case 0: {
			int32 MyShinyNewInt = FCString::Atoi(*StrVal);
			MatGroupMeta.GroupID = MyShinyNewInt;
		}
		case 1: {
			MatGroupMeta.GroupName = StrVal;
		}
		case 2: {
			int32 MyShinyNewInt = FCString::Atoi(*StrVal);
			MatGroupMeta.CurrentValue = MyShinyNewInt;
		}
		case 3: {
			int32 MyShinyNewInt = FCString::Atoi(*StrVal);
			MatGroupMeta.Override = MyShinyNewInt;
		}
		}

		count = count + 1;
	}

	return MatGroupMeta;
}

// This processes an alternate material struct into a string
FString UStructDigester::DigestAltRecipeMatStruct(UPARAM(ref) struct FAltRecipeMatStruct& altmatstruct)
{
	FString rest = altmatstruct.ItemName;
	rest = rest + "," + altmatstruct.StdMatName;
	rest = rest + "," + IntValueToString(altmatstruct.AltMatQuantity);
	rest = rest + "," + altmatstruct.AltMatName;
	return rest;
}

// This processes a string into an alternate material struct
FAltRecipeMatStruct UStructDigester::ParseAltRecipeMatStruct(FString altmatstring)
{
	FAltRecipeMatStruct AltRecipeMat = FAltRecipeMatStruct();

	TArray<FString> OutArr;
	altmatstring.ParseIntoArray(OutArr, TEXT(","), false);

	int32 count = 0;
	for (auto& StrVal : OutArr)
	{
		switch (count) {
		case 0: {
			AltRecipeMat.ItemName = StrVal;
		}
		case 1: {
			AltRecipeMat.StdMatName = StrVal;
		}
		case 2: {
			int32 MyShinyNewInt = FCString::Atoi(*StrVal);
			AltRecipeMat.AltMatQuantity = MyShinyNewInt;
		}
		case 3: {
			AltRecipeMat.AltMatName = StrVal;
		}
		}

		count = count + 1;
	}

	return AltRecipeMat;
}