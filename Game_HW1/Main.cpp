//****************************************************
// File: Main.cpp
//
// Purpose: To run program elements together
//
// Written By: Brett Silver
//
// Compiler: Visual C++ 2019
//
// Update Information
// ------------------
//
// Name: Brett Silver
// Date: 9/6/2021
// Description: Used to display and store information from classes and cpp files. 
//
// Name: Brett Silver
// Date: 9/6/2021
//@Brett Silver
//
//**************************************************** 



#include "Game.h"
#include "GameStorage.h"
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

int main()
{
	
	gameStorage();
	int num;
	game g("Blocks", "Everyone", 5);
	game g2("Cards", "Teen", 10);
	game g3("Checkers", "Everyone", 15);
	gameStorage gs;
	//gs.gameData[0] = g;
	//gs.
	//gameData[0];
	
	gs.Set(0, g);
	gs.Set(1, g2);
	gs.Set(2, g3);

	
	cout << gs.Get(0);
	
	
	
}