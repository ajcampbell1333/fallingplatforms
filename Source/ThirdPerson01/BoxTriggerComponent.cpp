// Fill out your copyright notice in the Description page of Project Settings.
#include "BoxTriggerComponent.h"

UBoxTriggerComponent::UBoxTriggerComponent()
{
	SetCollisionProfileName(TEXT("Trigger"));
	SetGenerateOverlapEvents(true);
}

void UBoxTriggerComponent::BeginPlay()
{
	Super::BeginPlay();
}