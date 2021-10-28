#include "GameList.h"
#include "GameStorage.h"
#include "Game.h"
#include <string>
#include <ostream>
#include <iostream>
using namespace std;

GameList::GameList()
{
	length = 0;
	listData = nullptr;
}


void GameList::print() const
{
	NodeType* current;
	current = listData;

	while (current != nullptr)
	{
		cout << current->data << endl;
		current = current->next;
	}
}

void GameList::Add(const game e)
{
	NodeType* temp;
	temp = new NodeType;

	temp->data = e;
	temp -> next = listData;

	listData = temp;
	length++;
}


GameList::GameList(const GameList& otherList)
{
	length = 0;
	listData = nullptr;

	
	NodeType* location = otherList.listData;
	

	while (location != nullptr) {

		Add(location->data);
		location = location->next;


	}
	
}

void GameList::Clear()
{
	NodeType* temp;
	temp = listData;
	while (listData != nullptr)
	{
		listData = listData->next;
		delete temp;
		temp = listData;
	}

}

GameList& GameList::operator=(GameList& rhs)
{
	if (!(length == 0)) { Clear(); }

	NodeType* location = rhs.listData;
	

	while (location != nullptr) {

		Add(location->data);
		location = location->next;


	}
	return *this;
}
