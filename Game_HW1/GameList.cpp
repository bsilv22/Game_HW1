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


ostream& operator<<(ostream& os, GameList& rhs)
{
	NodeType* location = rhs.listData;
	while (location != nullptr)
	{
		os << location->data << endl;
		location = location->next;
	}
	return os;
}



/**
istream& operator>>(istream& is, GameList& rhs)
{
	NodeType* location = rhs.listData;
	while (location != nullptr)
	{
		is >> location->data;
		location = location->next;
	}
	return is;
}
**/

void GameList::Delete(std::string title)
{
	NodeType* tempLocation, * location = listData;
	if (listData == nullptr)
		return;

	if (title == listData->data.getTitle())
	{
		tempLocation = location;
		listData = listData->next;
	}
	else {
		while (location->next != nullptr && location->next->data.getTitle() != title)
		{
			location = location->next;
		}
		tempLocation = location->next;
		location->next = (location->next)->next;
	}
	delete tempLocation;
	length--;
}

int GameList::Length() const
{
	
	return length;
}

bool GameList::FindGame(std::string title, game& result) const
{
	NodeType* temp = listData;
	
	while (temp != nullptr) {

		if (title == temp->data.getTitle()) { result = temp->data; return true; }
		else(temp = temp->next);
	}
		
	return false;
}


void GameList::Add(const GameList& otherList)
{

	NodeType* location = otherList.listData;   //why use otherList?

	while (location != nullptr)
	{
		Add(location->data);                      //why aren't we using the entire node since we are just using location->data
		location = location->next;					//Understand some things and then forget what i understood and don't understand again
	}
	
}

GameList::~GameList()
{
	NodeType* current = listData;
	while (current != 0) {
		NodeType* next = current->next;
		delete current;
		current = next;
	}
	listData = 0;
	cout << "Destructor called:" << endl;
}