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

	void Add(TreeNode*& tree, game g);
	void Inorder(TreeNode* tree);
	void Preorder(TreeNode* tree);
	void Postorder(TreeNode* tree);
	void Clear(TreeNode*& tree);

public:
	BST();
	~BST();
	
	void Add(game g);

	void PrintTree(TreeNode* tree, ostream& out);

	friend ostream& operator<<(ostream& os, BST& rhs);
	void Inorder();	
	void Preorder();
	void Postorder();

	void Clear();

	BST(const BST& rhs);

};