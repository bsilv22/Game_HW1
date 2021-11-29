#include "Game.h"
#include <string>
#include <ostream>
#include <iostream>
#include <fstream>
#include "BST.h"
using namespace std;

//****************************************************
// Function: Default Constructor
//
// Purpose: Set the default to the binary search tree
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 11/28/2021
// Description: Sets the tree to a default value
// Big O = O(1)
//**************************************************** 
BST::BST()
{
	root = nullptr;
}