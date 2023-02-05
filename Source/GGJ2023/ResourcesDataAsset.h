// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ResourcesDataAsset.generated.h"

/**
 *
 */
UCLASS()
class GGJ2023_API UResourcesDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Any)
		int32 NumberOfRecipes = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Any)
		TArray< TSubclassOf<AActor>> ResourcesClasses;
};
