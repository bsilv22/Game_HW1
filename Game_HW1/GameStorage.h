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
	int arrSize = 3;
	game *gameData = new game[arrSize];

	
	
public:
	
	//Constructor to dynamically allocate an array of the given size
	gameStorage(int theArrSize);
	
	//default constructor
	gameStorage();

	//gameStorage copy constructor
	gameStorage(const gameStorage& rhs);

	//gameStorage Destructor
	~gameStorage();

	//assignment operator for gameStorage
	const gameStorage& operator=(const gameStorage& rhs);

	//ostream non-member overload to print out all member variables
	friend ostream& operator<<(ostream& os, gameStorage& rhs);

	//Function used to make a deep copy of current instance
	gameStorage *DeepCopy();

	//Changes the size of the array while keeping its contents
	void Resize(int newSize);

	
	
	//Various variables for some of the functions
	game temp;
	double max;
	double total = 0;
	int gameCounter = 0;
	
	//Set and get prototypes 
	void Set(int index, game g);
	game Get(int index);
	
	
	
	//The function prototypes
	game MostExpensive();
	double PriceTotal();
	int GamePriceCount(double lowerBound, double upperBound);
	int Size();
	void Initialize();
	string GetAuthor();
	bool FindByTitle(string name, game& g);
	

};

