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
// Description: Includes member variables, constructors, and getters and setters
//
// Name: Brett Silver
// Date: 9/6/2021
//@Brett Silver
//
//**************************************************** 

#pragma once
#include <string>
using namespace std;

class game
{
	//Attributes
private:

	string title;
	string esrb;
	double price;

public:
	game();
	//Parameterized Constructor 
	game(string theTitle, string theEsrb, double thePrice) { title = theTitle; esrb = theEsrb; price = thePrice; }


};