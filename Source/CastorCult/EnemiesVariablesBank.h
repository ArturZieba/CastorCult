// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EnemiesVariablesBank.generated.h"

USTRUCT(BlueprintType)
struct FGenericEnemiesVariablesBankInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TArray<FString> EnemyName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TArray<int> Level;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TArray<FString> Rarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TArray<FString> Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TArray<FString> BaseStats;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TArray<FString> Rewards;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TArray<FString> SpawnWeights;
};

USTRUCT(BlueprintType)
struct FOEnemiesVariablesBank : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TArray<FString> EnemyName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TArray<int> Level;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TArray<FString> Rarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TArray<FString> Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TArray<FString> BaseStats;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TArray<FString> Rewards;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Stats")
	TArray<FString> SpawnWeights;
};

UCLASS()
class CASTORCULT_API UEnemiesVariablesBank : public UDataTable
{
	GENERATED_BODY()
	
};
