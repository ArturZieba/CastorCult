// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponsVariablesBank.generated.h"

USTRUCT(BlueprintType)
struct FGenericWeaponsVariablesBankInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> WeaponName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<int> Tier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Rarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> BaseStats;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Requirements;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Enchantments;
};

USTRUCT(BlueprintType)
struct FOWeaponsVariablesBank : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> WeaponName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<int> Tier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Rarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> BaseStats;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Requirements;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Enchantments;
};

UCLASS()
class CASTORCULT_API UWeaponsVariablesBank : public UDataTable
{
	GENERATED_BODY()
};
