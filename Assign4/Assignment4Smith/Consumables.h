#pragma once

#include <iostream>		// Library Inclusions
#include <string>

#include "Items.h"		// Inclusion of the Parent class

using namespace std;

class Consumables : public Items	// Consumable is an item so it will inherit Items
{
private:
	int uses = 5;		// Unique variable to Consumable class, set to 5 because this is my game and I like the number 5 :) .

public:
	Consumables()	// Default Consumable Constructor

	{

	}
	Consumables(string n)	// Member Initialization of Items base constructors as well as the unique variable to the class
		:uses(5),	// Unique variable that is holding the number it was initialized to.
		Items(n)
	{

	}

	bool isEmpty()		// Bool function that will return true if uses = 0 or return false if it does not = 0
	{
		if (uses == 0)
			return true;
		else
			return false;


	}

	void Use() override		// Consumable's Use() function that will override the parent's Use() function.
	{
		if (isEmpty())	// Will evalute if isEmpty is true which means uses = 0
			cout << "There are no more charges left!" << endl;
		else	// Will evalute if uses does not = 0 and will decrease the number of uses by 1
			cout << "You have " << uses-- << " charges left " << "on your " << getName() << endl;

	}

};

