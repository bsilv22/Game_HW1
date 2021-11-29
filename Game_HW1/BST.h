#pragma once
#include <string>
#include <ostream>
#include "Game.h"

using namespace std;

struct TreeNode
{
	int info;
	TreeNode* left;
	TreeNode* right;

};

class BST
{
private:
	TreeNode* root;

public:
	BST();

};