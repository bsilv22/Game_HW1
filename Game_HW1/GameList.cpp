#include "GameList.h"
#include "GameStorage.h"
#include "Game.h"
#include <string>
#include <ostream>
#include <iostream>
#include <fstream>
using namespace std;

//****************************************************
// Function: Default Constructor
//
// Purpose: Set the default to the list
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 11/1/2021
// Description: Sets the list to a default value
// Big O = O(1)
//**************************************************** 
GameList::GameList()
{
	length = 0;
	listData = nullptr;
}


//****************************************************
// Function: print
//
// Purpose: Prints out the entire list
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 11/1/2021
// Description: This is a function to print out the list
// Big O = O(n)
//**************************************************** 
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


//****************************************************
// Function: Add
//
// Purpose: To add a game to the linked list
//
// Update Information
// ----
//
// Name: Brett Silver
// Date: 10/29/2021
// Description: This function adds a game node to the top of the list
//Big O = O(n)
//**************************************************** 
void GameList::Add(const game e)
{
	NodeType* temp;
	temp = new NodeType;

	temp->data = e;
	temp -> next = listData;

	listData = temp;
	length++;
}

//****************************************************
// Function: Copy constructor
//
// Purpose: To create a new list that is copied from otherlist
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 10/29/2021
// Description: This function constructs a new list that is a deep copy of otherlist
// Big O = O(n)
//**************************************************** 
GameList::GameList(const GameList& otherList)
{
	length = 0;
	listData = nullptr;

	
	NodeType* location = otherList.listData;
	

	while (location != nullptr) {

		Add(location->data);
		location = location->next;


	}
	length = otherList.Length();
}

//****************************************************
// Function: Clear
//
// Purpose: To delete the entire list
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 10/28/2021
// Description: This function clears out the list one by one
// Big O = O(n)
//**************************************************** 

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


//****************************************************
// Function: Operator=
//
// Purpose: To create a deep copy of one list to another existing list by overloading the = sign
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 10/29/2021
// Description: This function is used overwrite the = operator so one list can be assigned to another list with a deep copy
// Big O = O(n)
//**************************************************** 
GameList& GameList::operator=(GameList& rhs)
{
	if (!(length == 0)) { Clear(); }

	NodeType* location = rhs.listData;
	

	while (location != nullptr) {

		Add(location->data);
		location = location->next;

		
	}
	length = rhs.Length();
	return *this;
}

//****************************************************
// Function:Non member operator<< overload
//
// Purpose: To output the data inside of the lists nodes
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 10/26/2021
// Description: This function help output each elements data properties
// Big O = O(n)
//**************************************************** 
ostream& operator<<(ostream& os, GameList& rhs)
{
	NodeType* location = rhs.listData;
	while (location != nullptr)
	{
		os << location->data;
		location = location->next;
	}
	return os;
}



//****************************************************
// Function: Non member operator >>overload
//
// Purpose: To take data from text file and include in the program
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 10/26/2021
// Description: This function inputs data from an external file
// Big O = O(n)
//**************************************************** 

istream& operator>>(istream& is, GameList& rhs)
{
	rhs.Clear();
	
	string title;
	string esrb;
	double price;

	while (!is.eof()) {
		
		is >> title >> esrb >> price;
		game g(title, esrb, price);

		rhs.Add(g);
		
	}
	return is;
}

//****************************************************
// Function: Delete
//
// Purpose: Deletes the node with the given title
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 10/26/2021
// Description: This function searches through the list to find the node with the given title, and then deletes that node
// Big O = O(n)
//**************************************************** 

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

//****************************************************
// Function: Length
//
// Purpose: returns the size of the list
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 10/26/2021
// Description: This function displays the length of the list
//Big O = O(n)
//**************************************************** 

int GameList::Length() const
{
	
	return length;
}

//****************************************************
// Function: FindGame
//
// Purpose: To find if the title of a game is inside the list, and then sets the game to result
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 10/26/2021
// Description: Searches for a title in the list
//
//**************************************************** 

bool GameList::FindGame(std::string title, game& result) const
{
	NodeType* temp = listData;
	
	while (temp != nullptr) {

		if (title == temp->data.getTitle()) { result = temp->data; return true; }
		else(temp = temp->next);
	}
		
	return false;
}

//****************************************************
// Function: Add
//
// Purpose: Appends one list with otherlist
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 10/26/2021
// Description: This function combines two lists
// Big O = O(n)
//**************************************************** 


void GameList::Add(const GameList& otherList)
{

	NodeType* location = otherList.listData;   

	while (location != nullptr)
	{
		Add(location->data);                      
		location = location->next;					
	}
	
}

//****************************************************
// Function: Destructor
//
// Purpose: Deletes the list at the end of the scope
//
// Update Information
// ---
//
// Name: Brett Silver
// Date: 10/26/2021
// Description: This function deletes one node at a time to provide clean up after the end of the scope
//
//**************************************************** 

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