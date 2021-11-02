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
#include <fstream>

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
	//gamelist
	GameList gl;

	cout << "Default constructor: " << gl << endl;

	//Game instances
	game g1("Chess", "E", 20);
	game g2("Checkers", "E", 9);
	game g3("Sonic", "T", 18);

	//Adding games to list
	gl.Add(g1);
	gl.Add(g2);
	gl.Add(g3);
	//Using non-member overload to print values from list
	cout << "Using non-member overload to pint out gamelist: " << gl << endl << endl;

	//Deep copy constructor
	GameList gl2(gl);
	cout << "Copy Constructor list: " << endl << gl2 << endl << endl;

	//New list to show operator= function
	game g4("Cards", "Mature", 18);
	GameList gl3;
	gl3.Add(g4);
	gl3 = gl;
	cout << "Operator= function being used " << endl << gl3 << endl << endl;

	//Clears out the list
	gl3.Clear();
	cout << "No list outputs after clear is called: " << endl << endl;

	//outputs the length of the list
	cout << "The length of GameList is: " << gl.Length() << endl << endl;

	//New game and list to show append list function
	game g5("Tetris", "Everyone", 14.99);
	GameList gl4;
	gl4.Add(g5);

	//Appending lists
	gl.Add(gl4);
	cout << "Showing that two lists are appended: " << endl << gl << endl << endl;

	//finds if the game exists and changes the game in the parameter
	bool find = gl.FindGame("Checkers", g3);
	cout << "1 prints out if the title exists: " << find << endl;;
	cout << "Now, g3 is changed to the checkers game as shown here: " << endl << g3 << endl << endl;

	// deletes the given game
	gl.Delete("Sonic");
	cout << "Sonic is deleted from GameList: " << endl << gl << endl << endl;



	//Adds list to a text file
	string filename("test123.txt");
	ofstream outfile(filename);
	outfile << gl;

	//Loads element values from istream
	string filename2("test123.txt");
	ifstream infile(filename2);
	infile >> gl;
	infile.close();
	cout << gl;

	


	
	

}
