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

	//Showing that title comparisons work
	cout << "If g1 < g2, this code will print out 1: ";
	bool compareGame = g1 < g2;
	cout << compareGame << endl;
	cout << "If g3 > g4, this code will print out 1: ";
	bool compareGame2 = g3 > g4;
	cout << compareGame2 << endl;

	//Empty Binary search tree
	BST gl2;
	cout << gl2 << endl;

	//Showing copy constructor and non-member operator<<overload
	BST gl3(gl);
	gl.Add(g5); //To show that the copy constructor is a deep copy
	cout << "After using the copy constructor, this prints out: " << endl << gl3;

	//Using destructor
	gl3.~BST();
	cout << "Showing the destructor is working: " << gl3 << endl;

	//Showing Clear() 
	gl3 = gl;
	cout << "gl3 before clearing: " << endl << gl3;
	cout << endl;
	gl3.Clear();
	cout << "gl3 after clearing: " << gl3 << endl;
	
	//Showing Size()
	cout << "The number of nodes in gl is: " << gl.Size(gl.getRoot()) << endl << endl;
	
	
	//Printing gl in preorder
	cout << "After orginizing gl in Preorder, we get this: " << endl;
	gl.Preorder();
	cout << endl;

	//Printing gl Inorder
	cout << "After orginizing gl Inorder, we get this: " << endl;
	gl.Inorder();
	cout << endl;

	//Printing gl Postorder
	cout << "After orginizing gl Postorder, we get this: " << endl;
	gl.Postorder();
	cout << endl;

	//Showing GetPrice function
	double x = 10;
	cout <<"If 1 prints out, the name is found, otherwise a 0 prints out and no values were changed: " << gl.GetPrice("COD", x) << endl;
	cout << "Additionally, if the name is found, x's value changes to the price of that game, which is this: " << x << endl << endl;

	
	//Showing operator=
	gl3 = gl;
	gl.Clear();
	cout <<"After deep copying gl to gl3, we get this: " << endl << gl3;
	
	

	
	

}
