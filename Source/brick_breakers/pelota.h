// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "pelota.generated.h"

UCLASS()
class BRICK_BREAKERS_API Apelota : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for actor's properties
	Apelota();
	virtual void Tamaño(float _tamañope);
	virtual void Velocidad(float _velocidadpe);
	virtual void  Color(float _colorpe);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	float tamaño = 2.0f;
	float velocidad = 4;
	float color;
};
