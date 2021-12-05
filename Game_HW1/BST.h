//****************************************************
// File: BST.h
//
// Purpose: To create a binary search tree 
//
// Written By: Brett Silver
//
// Compiler: Visual C++ 2019
//
// Update Information
// ------------------
//
// Name: Brett Silver
// Date: 13/3/2021
// Description: This is the header file for BST.cpp
// used to create a binary search tree
// Name: Brett Silver
// Date: 13/3/2021
// Description: Added a binary search tree for the game class
//
//**************************************************** 


#pragma once
#include <string>
#include <ostream>
#include "Game.h"

using namespace std;

struct TreeNode
{
	game info;
	TreeNode* left;
	TreeNode* right;

};

class BST
{
private:
	TreeNode* root;

//****************************************************
// Function:Add
//
// Purpose: Adds a node to the tree
//**************************************************** 
	void Add(TreeNode*& tree, game g);

//****************************************************
// Function:Inorder
//
// Purpose: Orders the tree in the inorder fashion
//**************************************************** 
	void Inorder(TreeNode* tree);

//****************************************************
// Function:Preorder
//
// Purpose: Orders the tree in the pre order fashion
//**************************************************** 
	void Preorder(TreeNode* tree);

//****************************************************
// Function:Postorder
//
// Purpose: Orders the tree in the post order fashion
//**************************************************** 
	void Postorder(TreeNode* tree);

//****************************************************
// Function:Clear
//
// Purpose: Clears out the tree
//**************************************************** 
	void Clear(TreeNode*& tree);

//****************************************************
// Function:CopyTree
//
// Purpose: Creates a new tree and copies the existing tree to that tree
//**************************************************** 
	void CopyTree(TreeNode*& copy, const TreeNode* originalTree);

//****************************************************
// Function:RetrieveItem
//
// Purpose: Finds an item inside the tree
//**************************************************** 
	void RetrieveItem(TreeNode* tree, game& item, bool& found);



public:
//****************************************************
// Function:Default Constructor
//
// Purpose: Creates a default tree
//**************************************************** 
	BST();

//****************************************************
// Function:Deconstructor
//
// Purpose: Deletes tree after the scope ends
//**************************************************** 
	~BST();

//****************************************************
// Function:Add
//
// Purpose: Adds a game to the tree
//**************************************************** 
	void Add(game g);

//****************************************************
// Function:PrintTree
//
// Purpose: To print out the entire tree
//**************************************************** 
	void PrintTree(TreeNode* tree, ostream& out);

//****************************************************
// Function:operator << overload
//
// Purpose: Allow the output stream to fully print out the entire tree
//**************************************************** 
	friend ostream& operator<<(ostream& os, BST& rhs);

//****************************************************
// Function:Inorder
//
// Purpose: To print out tree in order
//**************************************************** 
	void Inorder();	

//****************************************************
// Function:Preorder
//
// Purpose: Prints out tree in the pre order
//**************************************************** 
	void Preorder();

//****************************************************
// Function:Postorder
//
// Purpose: To print out tree in the post order
//**************************************************** 
	void Postorder();

//****************************************************
// Function: Size
//
// Purpose: Finds out size length of the tree
//**************************************************** 
	int Size(TreeNode* tree);

//****************************************************
// Function:Clear
//
// Purpose: Deletes th entire tree
//**************************************************** 
	void Clear();

//****************************************************
// Function:GetPrice
//
// Purpose: Finds the price of a given game and gets the price through pass by reference
//**************************************************** 
	bool GetPrice(string name, double& price);
	
//****************************************************
// Function:Copy constructor
//
// Purpose: Creates a new tree and copies the already existing tree
//**************************************************** 
	BST(const BST& rhs);
	
//****************************************************
// Function:Operator = overload
//
// Purpose: To overwrite one tree to another tree
//**************************************************** 
	BST& operator=(const BST& rhs);

//****************************************************
// Function:GetRoot
//
// Purpose: Allows access to the trees root
//**************************************************** 
	TreeNode* getRoot();

};