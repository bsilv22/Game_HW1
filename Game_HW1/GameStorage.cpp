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

//****************************************************
// Function: gameStorage
//
// Purpose: Set the default to all instances
//
// Update Information
// ------------------
//
// Name: Brett Silver
// Date: 9/15/2021
// Description: Loop to set all array instances to default
//
//**************************************************** 
gameStorage::gameStorage()
{
	for (int i = 0; i < 3; i++)
	{
		gameData[i] = game("Emtpy", "E", 0.00);
	}

}


//****************************************************
// Function: Set
//
// Purpose: Set any instance in the Array to a game created before hand
//
// Update Information
// ------------------
//
// Name: Brett Silver
// Date: 9/15/2021
// Description: Sets everything to the desired game in the array. Also limits to only the size of the array because of the if statement
//
//**************************************************** 

void gameStorage::Set(int index, game g)
{
	if (index <= 2 && index >= 0) {
		gameData[index] = g;
	}

	
}


//****************************************************
// Function: Get
//
// Returns all data inside a game instance
//
// Update Information
// ------------------
//
// Name: Brett Silver
// Date: 9/15/2021
// Description: Returns a game in said index
//
//**************************************************** 
game gameStorage::Get(int index)
{
	
	return gameData[index];

}



//****************************************************
// Function: MostExpensive
//
// Purpose: Returns the game with the highest price
//
// Update Information
// ------------------
//
// Name: Brett Silver
// Date: 9/15/2021
// Description: Loops through the array to find the game with the highest price and returns that game
//
//**************************************************** 

game gameStorage::MostExpensive()
{
	game maxGame = gameData[0];
	
	for (int i = 0; i < 3; i++)
	{
		
		if (gameData[i].getPrice() > maxGame.getPrice())
			maxGame = gameData[i];
	}
	return maxGame;
	
	
}


//****************************************************
// Function: PriceTotal
//
// Purpose: Returns the total price of all the games
//
// Update Information
// ------------------
//
// Name: Brett Silver
// Date: 9/15/2021
// Description: Uses a total varaible to build up each price from each game and returns a final value
//
//**************************************************** 
double gameStorage::PriceTotal()
{
	for (int i = 0; i < 3; i++)
	{
		total += gameData[i].getPrice();
	}
	return total;

}

//****************************************************
// Function: gamePriceCount
//
// Purpose: Counts how many games have a price between the given values
//
// Update Information
// ------------------
//
// Name: Brett Silver
// Date: 9/15/2021
// Description: Loops through the array looking for values between lowerbound and upperbound
//
//**************************************************** 
int gameStorage::GamePriceCount(double lowerBound, double upperBound)
{
	for (int i = 0; i < 3; i++)
	{
		if (gameData[i].getPrice() >= lowerBound && gameData[i].getPrice() <= upperBound)
		{
			gameCounter++;
		}

	}
	return gameCounter;
}


//****************************************************
// Function: Size
//
// Purpose: Returns the size of the array
//
// Update Information
// ------------------
//
// Name: Brett Silver
// Date: 9/15/2021
// Description: Describes how many instances there are
//
//**************************************************** 
int gameStorage::Size()
{
	int arrSize = sizeof(gameData) / sizeof(gameData[0]);
	return arrSize;
}

//****************************************************
// Function: Initialize
//
// Purpose: Set the default to all instances
//
// Update Information
// ------------------
//
// Name: Brett Silver
// Date: 9/15/2021
// Description: Once called, all array instances are set to the given game
//
//**************************************************** 
void gameStorage::Initialize()
{
	for (int i = 0; i < 3; i++)
	{
		gameData[i] = game("Inititalize Value", "Rating", 0);
	}
}


//****************************************************
// Function: getAuthor
//
// Purpose: Returns the name of the author
//
// Update Information
// ------------------
//
// Name: Brett Silver
// Date: 9/15/2021
// Description: Used to return the name of the author
//
//**************************************************** 
string gameStorage::GetAuthor() 
{
	string name = "Brett Silver";
	return name;
}



//****************************************************
// Function: FindByTitle
//
// Purpose: Checks if the given title exists in the array. Then assigns that title to game& g
//
// Update Information
// ------------------
//
// Name: Brett Silver
// Date: 9/15/2021
// Description: Loops through the array to check if the title exists, and returns true if it does, or false if it doesn't
//
//**************************************************** 



bool gameStorage::FindByTitle(string name, game& g)
{
	for (int i = 0; i < 3; i++)
	{
		if (gameData[i].getTitle() == name) {
			g = gameData[i];
			return true;
		
			
		}
		
		
		

	}
	return false;
}

