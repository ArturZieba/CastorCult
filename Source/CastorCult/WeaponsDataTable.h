// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponsDataTable.generated.h"

USTRUCT(BlueprintType)
struct FGenericWeaponInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	FString Rarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	FString Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TMap<FString, float> Properties;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TMap<FString, float> Requirements;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TMap<FString, float> Mods;
}; //Use enum for some variables?

USTRUCT(BlueprintType)
struct FWeaponDataTable : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	FString Rarity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	FString Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TMap<FString, float> Properties;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TMap<FString, float> Requirements;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Stats")
	TMap<FString, float> Mods;
}; //Use enum for some variables?

UCLASS()
class CASTORCULT_API UWeaponsDataTable : public UDataTable
{
	GENERATED_BODY()
};

