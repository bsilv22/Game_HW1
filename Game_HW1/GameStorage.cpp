//****************************************************
// File: GameStorage.cpp
//
// Purpose: cpp file used to save information about the class gameStorage prototypes
//
// Written By: Brett Silver
//
// Compiler: Visual C++ 2019
//
// Update Information
// ------------------
//
// Name: Brett Silver
// Date: 9/11/2021
// Description: Stores information about the games and function definitions
//
// Name: Brett Silver
// Date: 9/11/2021
//@Brett Silver
//
//**************************************************** 

#include "GameStorage.h"
#include "Game.h"
#include <string>
#include <ostream>
#include <iostream>
using namespace std;

//This constructor sets all game data for each game to default values
gameStorage::gameStorage()
{
	for (int i = 0; i < 3; i++)
	{
		gameData[i] = game("Emtpy", "E", 0.00);
	}

}

void gameStorage::Set(int index, game g)
{
	if (index <= 2 && index >= 0) {
		gameData[index] = g;
	}

	
}

game gameStorage::Get(int index)
{
	return gameData[index];

}






