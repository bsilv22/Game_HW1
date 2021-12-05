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
#include "BST.h"
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

	game g1("GTA", "E", 24);
	game g2("Halo", "T", 35);
	game g3("Tom Clancy", "M", 20);
	game g4("COD", "M", 30);
	game g5("Tetris", "E", 15);

	
	BST gl;
	gl.Add(g1);
	gl.Add(g2);
	gl.Add(g3);
	gl.Add(g4);

	double x = 5;
	
	//gl.Postorder();
	

	BST gl2;
	gl2 = gl;
	gl.Add(g5);
	

	cout << gl.GetScore("COhD", x);
	cout << x;
	

}
