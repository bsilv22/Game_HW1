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
	
	
	//creating the array. Only works if there are not too many gs.Set. Then nothing prints out.
	gameStorage gs(3);
	

	gs.Set(0, g);
	gs.Set(1, g2);
	gs.Set(2, g3);
	
	

	game test = gs.Get(0);
	cout << test << endl;


	gameStorage gs1(gs);

	gs1.Set(0, g2);
	gs.Set(0, g3);
	

	game testgs1 = gs1.Get(0);
	cout << testgs1;

	
}