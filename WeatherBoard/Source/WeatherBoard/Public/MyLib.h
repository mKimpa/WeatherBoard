// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyLib.generated.h"

/**
 * 
 */
UCLASS()
class WEATHERBOARD_API UMyLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	
	public:

	UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "LoadTxt"))
	static bool LoadFileToStringArray(FString FileNameA, TArray <FString>& StringArray);

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "SaveTxt"))
	static bool SaveTxt(FString SaveTextB, FString FileNameB);

	
};