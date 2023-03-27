// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PointCloudBPLib.generated.h"

/**
 * 
 */
UCLASS()
class SCRATCH1_API UPointCloudBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:
		UFUNCTION(BlueprintCallable, Category = "ROSIE Point Cloud")
		static bool WriteStringToFile(const FString &FilePath, const FString &Body);
};
