#pragma once

#include <iostream>		// Included Libraries 
#include <string>

#include "Items.h"		// Inclusion of Parent class that this class will inherit.

using namespace std;

class Equipment : public Items		// Equipment is an Item so it will inherit Items
{
private:
	bool isEquipped;	// Boolean variable that is unique to the Equipment class.
			
public:		// Default Equipment Constructor
	Equipment()
	{

	}
	
	Equipment(string n)		// Member Initialization list to call parent class constructor
		: Items(n),
		isEquipped(false)	// Unique variable of the class given starting value of false.
	{
	   

	}

	void Use() override		// Function will Override the Parent's Use() function and replace it.
	{
		
		if (!isEquipped)	// will evalute if not isEquipped or = false
		{
			cout << "Your " << getName() <<  " is now equipped in your right hand " << endl;
			isEquipped = true;	// Will then set isEquipped to true 
		}
		else // Will evaluate if isEquipped or = true
		{
			cout << "Placing " << getName() << " in bag..." << endl;
			isEquipped = false;	// Will then set isEquipped to false
		}
	}
};
