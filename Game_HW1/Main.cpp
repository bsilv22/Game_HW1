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
#include "GameList.h"
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

//****************************************************
// Function: main
//
// Purpose: To display all contents of the program
//
// Update Information
// Added the use of all new functions in version 2. 
//
// Name: Brett Silver
// Date: 10/10/2021
// Description: Showing how the program works
//
//****************************************************

int main()
{

	game g("Yes", "NO", 20);
	game g2("yee", "sada", 5);

	GameList gl;
	gl.Add(g);
	gl.Add(g2);
	gl.print();

	

	/**
	 
	gameStorage gs(2);
	cout << gs;
	
	gameStorage gs1(gs);
	
	

	//Game instance:
	game g;
	//sets title of g
	g.setTitle("Checkers");
	//sets rating of g
	g.setEsrb("Everyone");
	//sets price of g
	g.setPrice(10);

	//Gets title, Esrb, and price of game g below
	cout << "The title of game g is: " << g.getTitle() << endl;
	cout << "The rating of game g is: " << g.getEsrb() << endl;
	cout << "The price of game g is: " << g.getPrice() << endl << endl;

	//Using default constructor for game
	game constructorTest;
	cout << "Below is the default constructor:" << endl;
	cout << constructorTest;
	cout << endl;

	cout << "Below is the parameterised constructor being displayed using ostream non-member overload:" << endl;
	//Parameterised constructor for game
	game paramConstructorTest("Pacman", "All", 5.99);

	//ostream non-member overload for game
	cout << paramConstructorTest;
	cout << endl;

	//Below is the operator= example for game
	cout << "Below is the operator= example: " << endl;
	game g1 = g;
	cout << g1;
	cout << endl;

	//Below is the copy constructor for game
	cout << "Below is the copy constructor for game: " << endl;
	game g2(g1);
	cout << g2;
	cout << endl;
	
	//istream non-member overload for input values:
	cout << "Please enter 3 values in this order: Title, Esrb, and price." << endl;
	cin >> g2;
	cout << endl;
	cout << "This is what was typed in: " << endl;
	cout << g2;
	cout << endl;
		

	//GameStorage instance:
	gameStorage gs;

	//games for gameStorage gs
	game g3("Battlefield", "Teen", 59.99);
	game g4("Sims", "Everyone", 29.99);
	game g5("Chess", "Everyone", 20);

	//GameStorage sets to fill in array
	gs.Set(0, g3);
	gs.Set(1, g4);
	gs.Set(2, g5);
	//Ostream non member overload for gameStorage
	cout << "Below is the ostream non member overload for gameStorage: " << endl;
	cout << gs;

	//Use of get with gameStorage
	cout << "Below is the use of Get: " << endl;
	game getTest = gs.Get(1);
	cout << getTest;
	cout << endl;

	//gameStorage copy constructor
	gameStorage gs2(gs);
	cout << "Below is the gameStorage copy constructor: " << endl;
	cout << gs2;
	cout << endl;

	//constructor for changing gameStorage size
	cout << "Below is using the constructor to set array size: " << endl;
	gameStorage sizeChange(5);
	cout << sizeChange;
	cout << endl;

	//Creating default array for gameStorage
	cout << "Below is default gameStorage array: " << endl;
	gameStorage defaultValues;
	cout << defaultValues;
	cout << endl;

	//This is operator= to overwrite defaultValues with gs
	cout << "This will call operator equals to overwrite defaultValues with gs: " << endl;
	defaultValues = gs;
	cout << defaultValues;
	

	//Checks to see if the title exists
	cout << "Prints 1 if title is in the array, or 0 if the title isn't in the array: ";
	cout << gs.FindByTitle("Battlefield", g3);
	cout << endl << endl;

	//Prints out authors name
	cout <<"The Authors name is: " << gs.GetAuthor();
	cout << endl;

	
	//Prints the size of array gs
	cout << "The size of the array is: " << gs.Size();
	cout << endl;

	//Prints price total of all items in the array
	cout << "The price total of all prices in the array is: " << gs.PriceTotal() << endl;

	//Prints games with a price between two values
	cout <<"There are "<< gs.GamePriceCount(15,35) <<" games with a price point between 15 and 35 dollars.";
	cout << endl << endl;

	//Most expensive game
	cout << "The most expensive game is: " << endl;
	game mostExpensive = gs.MostExpensive();
	cout << endl << mostExpensive;
	cout << endl;

	//Set fefault values to all default using a function
	cout << "Changing all values to a default value: " << endl;
	gs.Initialize();
	cout << gs;
	cout << endl << endl;

	//Resizing the array
	cout << "Prints out the new size of the array: " << endl;
	gs.Resize(4);
	cout << gs;
	cout << endl;

	
	cout << "This is deep copy working: " << endl;
	gameStorage* xyz = gs.DeepCopy();
	//gameStorage* g5 = new gameStorage();
	//gameStorage* g5 = gs.DeepCopy();
	//cout << "This is deep copy: " << g5;
	//delete xyz
	cout << *xyz;

	delete xyz;

	**/
}
