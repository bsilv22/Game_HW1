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

BST::~BST()
{
	root = nullptr;
}



//****************************************************
// Function: Add
//
// Purpose: To allow user to call the add function easily
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 12/2/2021
// Description: Adds values to binary search tree
// Big O = O(log n)
//**************************************************** 
void BST::Add(game g)
{
	Add(root, g);
}

//****************************************************
// Function: Add
//
// Purpose: Add a game to the tree
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 12/2/2021
// Description: Finds the place to input a game instance
// Big O = O(log n)
//**************************************************** 
void BST::Add(TreeNode*& tree, game g)
{
	if (tree == nullptr)
	{// Insertion place found.
		tree = new TreeNode;
		tree->right = nullptr;
		tree->left = nullptr;
		tree->info = g;
	}
	else if (g.getTitle() < tree->info.getTitle())
		Add(tree->left, g);
	else
		Add(tree->right, g);
}

//****************************************************
// Function: PrintTree
//
// Purpose: Prints out the entire binary search tree
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 11/28/2021
// Description: Used to output the tree information
// Big O = O(n)
//**************************************************** 
void PrintTree(TreeNode* tree, ostream& out)
{
	if (tree != nullptr)
	{
		PrintTree(tree->left, out);
		out << tree->info;
		PrintTree(tree->right, out);
	}
}

//****************************************************
// Function: Non-member overload for output of the binary search tree
//
// Purpose: To easily print out the binary search tree instances
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 11/28/2021
// Description: Sets the tree to a default value
// Big O = O(n)
//**************************************************** 
ostream& operator<<(ostream& os, BST& rhs)
{
	PrintTree(rhs.root, os);
	return os;
}

//****************************************************
// Function: Inorder
//
// Purpose: To print out binary search tree in order
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 12/2/2021
// Description: Used to output Binary search tree in order
// Big O = O(n)
//**************************************************** 
void BST::Inorder(TreeNode* tree)
{
	if (tree != nullptr) {
		Inorder(tree->left);   
		cout << tree->info << endl;
		Inorder(tree->right);
	}
}

//****************************************************
// Function: Inorder
//
// Purpose: To easily use the inorder function with a binary search tree
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 12/2/2021
// Description: This function calls the helper function in order to print out the binary search tree in order
// Big O = O(n)
//**************************************************** 
void BST::Inorder()
{
	Inorder(root);
}

//****************************************************
// Function: Preorder
//
// Purpose: To print out tree in the pre order
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 12/2/2021
// Description: This function prints out the binary search tree pre order
// Big O = O(n)
//**************************************************** 
void BST::Preorder(TreeNode* tree)
{
	if (tree != nullptr) {
		cout << tree->info << endl;
		Preorder(tree->left);   
		Preorder(tree->right);
	}
}

//****************************************************
// Function: Preorder
//
// Purpose: To print out tree in the pre order
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 12/2/2021
// Description: This function prints out the binary search tree pre order and makes it easy for the user to call the function because the funcion uses recursion.
// Big O = O(n)
//**************************************************** 
void BST::Preorder()
{
	Preorder(root);
}

//****************************************************
// Function: Postorder
//
// Purpose: To print out tree in the post order
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 12/2/2021
// Description: This function prints out the binary search tree post order.
// Big O = O(n)
//**************************************************** 
void BST::Postorder(TreeNode* tree)
{
	if (tree != nullptr) {
		
		Postorder(tree->left);
		Postorder(tree->right);
		cout << tree->info << endl;
	}
}

//****************************************************
// Function: Postorder
//
// Purpose: To print out tree in the post order
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 12/2/2021
// Description: This function prints out the binary search tree post order. With the help of the helper function, this function makes it easier to call postorder on a binary search tree
// Big O = O(n)
//**************************************************** 
void BST::Postorder()
{
	Postorder(root);
}