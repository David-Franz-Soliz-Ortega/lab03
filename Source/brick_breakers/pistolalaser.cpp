// Fill out your copyright notice in the Description page of Project Settings.


#include "pistolalaser.h"

// Sets default values
Apistolalaser::Apistolalaser()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Apistolalaser::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Apistolalaser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//Este es un item del juego que obtiene la paleta para poder disparar
void Apistolalaser::Color(float _colorl) {
	color = _colorl;
}

void Apistolalaser::Tamaño(float _tamañol) {
	tamaño = _tamañol;
}