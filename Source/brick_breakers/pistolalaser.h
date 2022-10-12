// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "pistolalaser.generated.h"

UCLASS()
class BRICK_BREAKERS_API Apistolalaser : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Apistolalaser();

protected:
	// Called when the game starts or when spawned
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
	virtual void Color(float _colorl);
	virtual void Tamaño(float _tamañol);
private:
	float tamaño=1.0f;
	float tiempodediferencia=1;//tiempo de diferencia de cada disparo
	float color;
};
