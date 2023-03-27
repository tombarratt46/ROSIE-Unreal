// Fill out your copyright notice in the Description page of Project Settings.


#include "PointCloudBPLib.h"
#include "Misc/FileHelper.h"
bool UPointCloudBPLib::WriteStringToFile(const FString &FilePath, const FString &Body)
{
    return FFileHelper::SaveStringToFile(Body, *FilePath);
}