// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ArmorDataTable.generated.h"

USTRUCT(BlueprintType)
struct FGenericArmorInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	FString ArmorName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	int Tier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	FString Rarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	FString Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TMap<FString, float> BaseStats;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TMap<FString, float> Requirements;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TMap<FString, float> Enchantments;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	FString ID;
}; 

USTRUCT(BlueprintType)
struct FOArmorDataTable : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	FString  ArmorName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	int Tier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	FString Rarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	FString Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TMap<FString, float> BaseStats;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TMap<FString, float> Requirements;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	TMap<FString, float> Enchantments;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor Stats")
	FString ID;
};

UCLASS()
class CASTORCULT_API UArmorDataTable : public UDataTable
{
	GENERATED_BODY()

};
