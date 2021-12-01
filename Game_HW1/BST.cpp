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

void BST::Add(game g)
{
	Add(g);
}

//is this right?
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

//is this right?
void PrintTree(TreeNode* tree, ostream& out)
{
	if (tree != nullptr)
	{
		PrintTree(tree->left, outFile);
		out << tree->info;
		PrintTree(tree->right, outFile);
	}
}
