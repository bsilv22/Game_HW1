//****************************************************
// File: Game.h
//
// Purpose: Class made to store game information
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
// Description: Includes member variables, constructors, overloads, and getters and setters
//
// Name: Brett Silver
// Date: 9/6/2021
//@Brett Silver
//
//**************************************************** 

#pragma once
#include <string>
#include <ostream>

using namespace std;

class game
{
	//Attributes
private:

	string *title;
	string *esrb;
	double *price;

public:
	//Default Constructor
	game();

	//Parameterized Constructor 
	game(string theTitle, string theEsrb, double thePrice);

	//copy constructor
	game(const game& rhs);

	//Assignment operator overload
	const game& operator=(const game& rhs);

	//non-member operator<<overload for output
	friend ostream& operator<<(ostream& os, game& rhs);

	//Destructor
	~game();

	//non-member operator>>overload for input
	friend istream& operator>>(istream& os, game& rhs);

	//< overload for comparing titles
	friend bool operator<(game& lhs, game& rhs);

	//> overload for comparing titles
	friend bool operator>(game& lhs, game& rhs);
	

	//Function prototypes for member variables - getters
	string getTitle();
	string getEsrb();
	double getPrice();

	//Setters
	void setTitle(string theTitle);
	void setEsrb(string theEsrb);
	void setPrice(double thePrice);



};