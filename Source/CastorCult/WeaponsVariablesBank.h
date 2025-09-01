// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponsVariablesBank.generated.h"

USTRUCT(BlueprintType)
struct FWeaponsVariablesBankInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> WeaponName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Rarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Properties;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Requirements;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Mods;
};

USTRUCT(BlueprintType)
struct FWeaponVariablesBank : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> WeaponName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Rarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Properties;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Requirements;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TArray<FString> Mods;
};

UCLASS()
class CASTORCULT_API UWeaponsVariablesBank : public UDataTable
{
	GENERATED_BODY()
};