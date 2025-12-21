// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EnemiesDataTable.generated.h"

USTRUCT(BlueprintType)
struct FGenericEnemiesInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	FString EnemyName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	int Level;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	FString Rarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	FString Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TMap<FString, float> BaseStats;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TMap<FString, float> Rewards;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TMap<FString, float> SpawnWeights;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	FString ID;
};

USTRUCT(BlueprintType)
struct FOEnemiesDataTable : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	FString EnemyName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	int Level;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	FString Rarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	FString Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TMap<FString, float> BaseStats;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TMap<FString, float> Rewards;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TMap<FString, float> SpawnWeights;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	FString ID;
};

UCLASS()
class CASTORCULT_API UEnemiesDataTable : public UDataTable
{
	GENERATED_BODY()
	
};