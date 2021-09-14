//****************************************************
// File: GameStorage.h
//
// Purpose: Keeps track of multiple games
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
// Description: Stores information about the games
//
// Name: Brett Silver
// Date: 9/11/2021
//@Brett Silver
//
//**************************************************** 

#pragma once
#include "Game.h"
#include <string>
#include <ostream>
#include <iostream>
using namespace std;

class gameStorage
{
private:
	game gameData[3];

public:
	//default constructor
	gameStorage();
	int temp = 0;
	
	void Set(int index, game g);
	game Get(int index);
	//int GamePriceCount(double lowerBound, double upperBound);
	game MostExpensive();
	


};

