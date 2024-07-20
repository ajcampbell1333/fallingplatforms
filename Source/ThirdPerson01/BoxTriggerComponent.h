// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "BoxTriggerComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class THIRDPERSON01_API UBoxTriggerComponent : public UBoxComponent
{
	GENERATED_BODY()
	
public:
	UBoxTriggerComponent();
protected:
	virtual void BeginPlay() override;
};
