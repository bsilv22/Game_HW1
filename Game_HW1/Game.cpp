//****************************************************
// File: Game.pp
//
// Purpose: cpp file used to save information about the class game prototypes
//
// Written By: Brett Silver
//
// Compiler: Visual C++ 2019
//
// Update Information
// ------------------
//
// Name: Brett Silver
// Date: 9/6/2021
// Description: Has constructor definitions, and operator definitions 
//
// Name: Brett Silver
// Date: 9/7/2021
//@Brett Silver
//
//**************************************************** 




#include "Game.h"
#include "GameStorage.h"
#include <string>
#include <ostream>
using namespace std;

//****************************************************
// Function: Default copy constructor
//
// Purpose: To assign default values to each instance
//
// Update Information:
// ----------------
//
// Name: Brett Silver
// Date: 10/28/2021
// Description: Assigns values to each instance if no parameters are being used
//
//**************************************************** 
game::game() 
{
	title = new string;
	*title = "Game Title"; 
	
	esrb = new string;
	*esrb = "Everyone"; 
	
	price = new double;
	*price = 1; 
}

//****************************************************
// Function: Paramaterized constructor
//
// Purpose: To add values into an a instance through parameters
//
// Update Information:
// ----------------
//
// Name: Brett Silver
// Date: 10/28/2021
// Description: This function copies values from the parameters into the instance.
//
//**************************************************** 
game::game(string theTitle, string theEsrb, double thePrice)
{
	title = new string;
	*title = theTitle;

	esrb = new string;
	*esrb = theEsrb;

	price = new double;
	*price = thePrice;
} 

//****************************************************
// Function: Destructor
//
// Purpose: Deletes game instances after scope
//
// Update Information:
// ----------------
//
// Name: Brett Silver
// Date: 10/28/2021
// Description: This function clears out dynamic memory
//
//**************************************************** 
game::~game()
{
	delete title;
	title = nullptr;

	delete esrb;
	esrb = nullptr;

	delete price;
	price = nullptr;

	
	//cout << "Destructor called" << endl;
}

//****************************************************
// Function: Copy constructor
//
// Purpose: Creates a new game instance as a copy from the other instance
//
// Update Information:
// ----------------
//
// Name: Brett Silver
// Date: 10/28/2021
// Description: This function copies values from one instance into a new one
//
//**************************************************** 
game::game(const game& rhs) 
{
	
	title = new string;
	*title = *rhs.title;
	
	esrb = new string;
	*esrb = *rhs.esrb;
	
	price = new double;
	*price = *rhs.price;

}

//****************************************************
// Function: Operator= overload
//
// Purpose: To equal one instance into another using the = sign
//
// Update Information:
// ----------------
//
// Name: Brett Silver
// Date: 10/28/2021
// Description: This function overwrites another instance
//
//**************************************************** 
const game& game::operator=(const game& rhs) 
{
	*title = *rhs.title;
	*esrb = *rhs.esrb;
	*price = *rhs.price;
	return *this;

}

//****************************************************
// Function: operator<< overload
//
// Purpose: To output each games data
//
// Update Information:
// ----------------
//
// Name: Brett Silver
// Date: 10/28/2021
// Description: This function uses the output stream to output each games information
//
//**************************************************** 
ostream& operator<<(ostream& os, game& rhs)
{
	os << *rhs.title << endl;
	os << *rhs.esrb << endl;
	os << *rhs.price << endl;

	return os;

}

//****************************************************
// Function: operator >> 
//
// Purpose: To add take in values and apply them to a game
//
// Update Information:
// ----------------
//
// Name: Brett Silver
// Date: 10/28/2021
// Description: This function stores games from input given by the user
//
//**************************************************** 
istream& operator>>(istream& os, game& rhs)
{
	os >> *rhs.title;
	os >> *rhs.esrb;
	os >> *rhs.price;

	return os;

}

//getters defined with pointers
// 
// 
//****************************************************
// Function: GetTitle
//
// Purpose: returns the title
//
// Update Information:
// ----------------
//
// Name: Brett Silver
// Date: 10/28/2021
// Description: returns the title
//
//**************************************************** 
string game::getTitle() { return *title; }

//****************************************************
// Function: GetEsrb
//
// Purpose: returns esrb
//
// Update Information:
// ----------------
//
// Name: Brett Silver
// Date: 10/28/2021
// Description: returns esrb
//
//**************************************************** 
string game::getEsrb() { return *esrb; }


//****************************************************
// Function: getPrice
//
// Purpose: returns price
//
// Update Information:
// ----------------
//
// Name: Brett Silver
// Date: 10/28/2021
// Description: returns price
//**************************************************** 
double game::getPrice() { return *price; }

//setters defined with pointers


//****************************************************
// Function: SetTitle
//
// Purpose: sets title
//
// Update Information:
// ----------------
//
// Name: Brett Silver
// Date: 10/28/2021
// Description: sets title
//
//**************************************************** 
void game::setTitle(string theTitle) { *title = theTitle; }


//****************************************************
// Function: setEsrb
//
// Purpose: sets esrb
//
// Update Information:
// ----------------
//
// Name: Brett Silver
// Date: 10/28/2021
// Description: sets esrb
//
//**************************************************** 
void game::setEsrb(string theEsrb) { *esrb = theEsrb; }


//****************************************************
// Function: setPrice
// 
// Purpose: sets price
// 
// Update Information:
// ----------------
//
// Name: Brett Silver
// Date: 10/28/2021
// Description: sets price
//
//**************************************************** 
void game::setPrice(double thePrice) { *price = thePrice; }