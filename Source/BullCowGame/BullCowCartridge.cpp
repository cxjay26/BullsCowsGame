// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to the Bull Cows Game!"));
    PrintLine(TEXT("Guess the 4 letter word!"));// Magic Number Remove!
    PrintLine(TEXT("Press ENTER to continue..."));
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    FString HiddenWord = TEXT("cake");//Move outisde this function.
    if (HiddenWord == Input){
        PrintLine(TEXT("You win!"));
    }
    else {
        PrintLine(TEXT("Try again..."));
    }
}