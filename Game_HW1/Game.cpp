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
#include "GameStorage.h"
#include <string>
#include <ostream>
using namespace std;

//This is the default constructor definition. Updated for the use of pointers and memory allocation
game::game() 
{
	title = new string;
	*title = "Game Title"; 
	
	esrb = new string;
	*esrb = "Everyone"; 
	
	price = new double;
	*price = 1; 
}

//parameterized constructor, updated for the use of pointers and memory allocation
game::game(string theTitle, string theEsrb, double thePrice)
{
	title = new string;
	*title = theTitle;

	esrb = new string;
	*esrb = theEsrb;

	price = new double;
	*price = thePrice;
} 

//Destructor definition
game::~game()
{
	delete title;
	title = nullptr;

	delete esrb;
	esrb = nullptr;

	delete price;
	price = nullptr;

	//No need until before handing in to check 
	//cout << "Destructor called" << endl;
}

//copy constructor
game::game(const game& rhs) 
{
	
	title = new string;
	*title = *rhs.title;
	
	esrb = new string;
	*esrb = *rhs.esrb;
	
	price = new double;
	*price = *rhs.price;

}

//assignment operator definition
const game& game::operator=(const game& rhs) 
{
	*title = *rhs.title;
	*esrb = *rhs.esrb;
	*price = *rhs.price;
	return *this;

}

//ostream non-member overload to print out all member variables
ostream& operator<<(ostream& os, game& rhs)
{
	os << *rhs.title << endl;
	os << *rhs.esrb << endl;
	os << *rhs.price << endl;

	return os;

}

//istream non-member overload to read inputs of values from member variables
istream& operator>>(istream& os, game& rhs)
{
	os >> *rhs.title;
	os >> *rhs.esrb;
	os >> *rhs.price;

	return os;

}

//getters defined
//gets title
string game::getTitle() { return *title; }
//gets esrb
string game::getEsrb() { return *esrb; }
//gets price
double game::getPrice() { return *price; }

//setters defined
//sets title
void game::setTitle(string theTitle) { *title = theTitle; }
//sets esrb
void game::setEsrb(string theEsrb) { *esrb = theEsrb; }
//sets price
void game::setPrice(double thePrice) { *price = thePrice; }