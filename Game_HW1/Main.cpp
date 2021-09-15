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
	gameStorage();
	
	//Parametized constructors 
	game g("Blocks", "Everyone", 12);
	game g2("Cards", "Teen", 10);
	game g3("Checkers", "Everyone", 15);
	
	//creating the array
	gameStorage gs;
	//gs.gameData[0] = g;
	//gs.
	//gameData[0];
	
	//Sets each element in the array from the information above
	gs.Set(0, g);
	gs.Set(1, g2);
	gs.Set(2, g3);
	

	//gets the value of a game and assigns it to the array
	game temp = gs.Get(1);
	cout << "Outputting a single game for an example: " << endl << temp << endl;
	
	//game temp2 = gs.Get(2);
	//temp = gs.Get(0);

	//Gets total price of all games combined
	double totalPrices = gs.PriceTotal();
	cout << "The total price of all arrays are " << totalPrices << endl;
	
	//Returns the amount of games with a price between both parameters
	int priceCount = gs.GamePriceCount(11,16);
	cout << "The number of total games between the given values is " << priceCount << endl;

	//This function calculates the size of the array
	int theArraySize = gs.Size();
	cout << "The array size is = " << theArraySize << endl << endl;


	
	
	game highestPrice = gs.MostExpensive();
	cout << "The highest priced game is: " << highestPrice << endl;

	//This function initializes all games in the array to these default values 
	gs.Initialize();
	game testing = gs.Get(0);
	cout << testing << endl;

	//Returns the authors name
	cout << "The authors name is: " << gs.GetAuthor() << endl;

}