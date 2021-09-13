//****************************************************
// File: Game.pp
//
// Purpose: cpp file used to save information about the class game prototypes
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
// Description: Has constructor definitions, and operator definitions 
//
// Name: Brett Silver
// Date: 9/7/2021
//@Brett Silver
//
//**************************************************** 




#include "Game.h"
#include <string>
#include <ostream>
#include "GameStorage.h"
using namespace std;

//This is the default constructor definition
game::game() 
{
	title = "Game Title"; 
	esrb = "Everyone"; 
	price = 1; 
}

//parameterized constructor
game::game(string theTitle, string theEsrb, double thePrice)
{
	title = theTitle;
	esrb = theEsrb;
	price = thePrice;
} 

//copy constructor
game::game(const game& rhs) 
{
	title = rhs.title;
	esrb = rhs.esrb;
	price = rhs.price;
}

//assignment operator definition
const game& game::operator=(const game& rhs) 
{
	title = rhs.title;
	esrb = rhs.esrb;
	price = rhs.price;
	return *this;

}

//ostream non-member overload to print out all member variables
ostream& operator<<(ostream& os, game& rhs)
{
	os << rhs.title << endl;
	os << rhs.esrb << endl;
	os << rhs.price << endl;

	return os;

}