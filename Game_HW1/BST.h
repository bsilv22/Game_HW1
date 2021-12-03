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

public:
	BST();
	~BST();
	
	void Add(game g);
	void Add(TreeNode*& tree, game g);

	void PrintTree(TreeNode* tree, ostream& out);

	friend ostream& operator<<(ostream& os, BST& rhs);

	void Inorder(TreeNode* tree);
	void Inorder();

	void Preorder(TreeNode* tree);
	void Preorder();

	void Postorder(TreeNode* tree);
	void Postorder();

};