// Fill out your copyright notice in the Description page of Project Settings.

#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "MyLib.h"

bool UMyLib::LoadFileToStringArray(FString FileNameA, TArray <FString>& StringArray)
{
     return FFileHelper::LoadFileToStringArray(StringArray, *(FPaths::ProjectDir() + FileNameA));
}

bool UMyLib::SaveTxt(FString SaveTextB, FString FileNameB)
{
     return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));
}