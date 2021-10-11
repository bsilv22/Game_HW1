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
// Changed functions to work with dynamic memory. Added some new functions as well, such as dynamic array, size member variable, deep copy constructors, destructors, overload=, non-member overload, resize function, and a deepCopy function.
//
// Name: Brett Silver
// Date: 9/11/2021
// Description: Version 1 = Stores information about the games and function definitions
//
// Name: Brett Silver
// Date: 10/5/2021
//Description: Version 2 = Changed many functions to deal with dynamic memory and added a few new functions such as resize, and DeepCopy. Also added destructors.
//
//**************************************************** 

#include "GameStorage.h"
#include "Game.h"
#include <string>
#include <ostream>
#include <iostream>
using namespace std;




//****************************************************
// Function: gameStorage copy constructor
//
// Purpose: Creates a new array based on the original array
//
// Update Information:
// Creates a deep copy constructor
//
// Name: Brett Silver
// Date: 10/1/2021
// Description: Copies the array to a new array
//
//**************************************************** 
gameStorage::gameStorage(const gameStorage& rhs) 
{
	for (size_t i = 0; i < arrSize; i++)
	{
		gameData[i] = rhs.gameData[i];
	}

}

//****************************************************
// Function: Changes the size of the array of games
//
// Purpose: To add or take away games from the array
//
// Update Information:
// ----------------
//
// Name: Brett Silver
// Date: 10/3/2021
// Description: Copies the array to a new array while adding or subtracting instances in the array
//
//**************************************************** 
void gameStorage::Resize(int newSize)
{
	int end;
	if (newSize < arrSize ) { end = newSize; }
	else { end = arrSize; }
	game* arrChange = new game[newSize];

	for (int i = 0; i < end; i++)
	{
		arrChange[i] = gameData[i];
	}
	delete[] gameData;
	arrSize = newSize;
	gameData = arrChange;
}



gameStorage* gameStorage::DeepCopy()
{
	gameStorage* copyStorage = new gameStorage;
	
	copyStorage->Resize(arrSize);

	for (int i = 0; i < arrSize; i++)
	{
		copyStorage->gameData[i] = gameData[i];
	}
	return copyStorage;
	
	
}


//****************************************************
// Function: gameStorage destructor
//
// Purpose: delete all allocated memory for the gameStorage class
//
// Update Information:
// ----------------
//
// Name: Brett Silver
// Date: 10/2/2021
// Description: Deletes all dynamic memory for gameStorage
//
//**************************************************** 

gameStorage::~gameStorage()
{

	
		delete[] gameData;
		gameData = nullptr;
		//cout << "gameStorage deconstructor called" << endl;

}

//****************************************************
// Function: gameStorage constructor for creating the size
//
// Purpose: Create an array of games dynamically
//
// Update Information:
// Changes dynamic size of array
//
// Name: Brett Silver
// Date: 10/5/2021
// Description: Creates a dynamic array of game with the given size
//
//**************************************************** 
gameStorage::gameStorage(int theArrSize)
{
	
	gameData = new game[theArrSize];
	arrSize = theArrSize;

	
	
}

//****************************************************
// Function: member overload operator to copy one array to another
//
// Purpose: Copy one array to another
//
// Update Information:
// Performs a deep copy of gameStorage by copying over values
//
// Name: Brett Silver
// Date: 10/5/2021
// Description: Used to overwrite one instance of gameStorage
//
//**************************************************** 

const gameStorage& gameStorage::operator=(const gameStorage& rhs) //not copying over the size, but works otherwise
{


	delete[] gameData;
	game *gameData = new game[arrSize];
	for (int i = 0; i < arrSize; i++)
	{
		gameData[i] = rhs.gameData[i];
	}

	return *this;
}

//****************************************************
// Function:non member overload operator to output an array of instances
//
// Purpose: Allows the output of each instance with a single cout statement
//
// Update Information:
// Outputs array contents
//
// Name: Brett Silver
// Date: 10/3/2021
// Description: Used to output information of array
//
//**************************************************** 

ostream& operator<<(ostream& os, gameStorage& rhs) 
{
	for (int i = 0; i < rhs.arrSize; i++)
	{
		os << rhs.gameData[i] << endl;
	}


	return os;

}

//****************************************************
// Function: gameStorage function used to assign default values to the gameStorage instances
//
// Purpose: Set the default to all instances
//
// Update Information:
// Changed the size of loop to the size member variable
//
// Name: Brett Silver
// Date: 9/26/2021
// Description: Loop to set all array instances to default
//
//**************************************************** 


gameStorage::gameStorage()
{
	for (int i = 0; i < arrSize; i++)                        
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
// Changed the maximum index position to the array size variable
//
// Name: Brett Silver
// Date: 9/26/2021
// Description: Sets everything to the desired game in the array. Also limits to only the size of the array because of the if statement
//
//**************************************************** 

void gameStorage::Set(int index, game g)
{
	if (index <= arrSize && index >= 0) {
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
// Changed the for loop to the array size variable
//
// Name: Brett Silver
// Date: 9/26/2021
// Description: Loops through the array to find the game with the highest price and returns that game
//
//**************************************************** 

game gameStorage::MostExpensive()
{
	game maxGame = gameData[0];
	
	for (int i = 0; i < arrSize; i++)
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
// Changed the for loop to the arrSize variable
//
// Name: Brett Silver
// Date: 9/26/2021
// Description: Uses a total varaible to build up each price from each game and returns a final value
//
//**************************************************** 
double gameStorage::PriceTotal()
{
	for (int i = 0; i < arrSize; i++)
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
// Changed the for loop to go up to the arrSize variable
//
// Name: Brett Silver
// Date: 9/26/2021
// Description: Loops through the array looking for values between lowerbound and upperbound
//
//**************************************************** 
int gameStorage::GamePriceCount(double lowerBound, double upperBound)
{
	for (int i = 0; i < arrSize; i++)
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
// Canged the variable name because it was the same as the arrSize variable which sets the array size
//
// Name: Brett Silver
// Date: 9/26/2021
// Description: Describes how many instances there are
//
//**************************************************** 
int gameStorage::Size()
{
	int theSize = 3;
	return theSize;
}

//****************************************************
// Function: Initialize
//
// Purpose: Set the default to all instances
//
// Update Information
// Changed the for loop to go up to the arrSize variable
//
// Name: Brett Silver
// Date: 9/26/2021
// Description: Once called, all array instances are set to the given game
//
//**************************************************** 
void gameStorage::Initialize()
{
	for (int i = 0; i < arrSize; i++)
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
// Changed the for loop to loop up until the arrSize variable
//
// Name: Brett Silver
// Date: 9/26/2021
// Description: Loops through the array to check if the title exists, and returns true if it does, or false if it doesn't
//
//**************************************************** 



bool gameStorage::FindByTitle(string name, game& g)
{
	for (int i = 0; i < arrSize; i++)
	{
		if (gameData[i].getTitle() == name) {
			g = gameData[i];
			return true;
		
			
		}
		
		
		

	}
	return false;
}

