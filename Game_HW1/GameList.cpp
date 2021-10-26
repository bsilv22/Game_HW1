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
	int size = otherList.length;
	NodeType* newNode = new NodeType[size];

	while (listData->next != nullptr) {
		listData->data = otherList.listData->data;
		listData = listData->next;
	}

}