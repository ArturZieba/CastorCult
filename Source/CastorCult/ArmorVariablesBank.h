// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ArmorVariablesBank.generated.h"

USTRUCT(BlueprintType)
struct FGenericArmorVariablesBankInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TArray<FString> ArmorName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TArray<int> Tier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TArray<FString> Rarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TArray<FString> Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TArray<FString> BaseStats;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TArray<FString> Requirements;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TArray<FString> Enchantments;
};

USTRUCT(BlueprintType)
struct FOArmorVariablesBank : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TArray<FString> ArmorName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TArray<int> Tier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TArray<FString> Rarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TArray<FString> Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TArray<FString> BaseStats;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TArray<FString> Requirements;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TArray<FString> Enchantments;
};

UCLASS()
class CASTORCULT_API UArmorVariablesBank : public UDataTable
{
	GENERATED_BODY()
	
};
