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
	//assigns all instances in the array to default
	
	
	//Parametized constructors 
	game g("Blocks", "Everyone", 12);
	game g2("Cards", "Teen", 20);
	game g3("Checkers", "Everyone", 15);
	game g4;
	
	
	//creating the array
	gameStorage gs;
	//gs.gameData[0] = g;
	//gs.
	//gameData[0];
	
	//Sets each element in the array from the information above
	gs.Set(0, g);
	gs.Set(1, g2);
	gs.Set(2, g3);
	
	

	g4 = gs.Get(0);
	cout << "G4 is: " << g4 << endl;

	game g5(g4);

	cout << "g5 copied from g4: " << g5 << endl;

	gs.Set(0, g2);
	g4 = gs.Get(0);

	cout << "Now g4 is different then g5: " << g4 << endl;

	cout << "Now g5 is different then g4: " << g5;
	
	//cin >> g4;  this is how to use operator>>overload with input:
	//cout << g4;
	
}