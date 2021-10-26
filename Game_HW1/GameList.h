#pragma once
#include "Game.h"
#include "GameStorage.h"
#include <string>
#include <ostream>
#include <iostream>
using namespace std;

#define MAX_ITEMS 100


struct NodeType
{
	game data;
	NodeType* next;
};

class GameList
{
private:
	int length;
	NodeType *listData;

	

public:
	GameList();
	GameList(const GameList& otherList);
	
	void print() const;
	void Add(const game e);

};