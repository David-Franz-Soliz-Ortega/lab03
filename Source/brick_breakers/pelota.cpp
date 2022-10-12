// Fill out your copyright notice in the Description page of Project Settings.


#include "pelota.h"

// Sets default values
Apelota::Apelota()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Apelota::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Apelota::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Apelota::Color(float _colorpe) {
	color = _colorpe;

}

void Apelota::Tamaño(float _tamañope) {
	tamaño = _tamañope;

}

void Apelota::Velocidad(float _velocidadpe) {
	velocidad = _velocidadpe;
}