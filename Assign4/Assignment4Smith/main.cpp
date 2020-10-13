// Zach Smith
// CIT 236 Data Structures
// This program will demonstrate inheritance by having child classes utilizing the parent class.
// Will also demonstrate polymorphism by using the same line of code to do different actions.
// Helped by: Scarlett Scarberry, Dr. Mundell

#include <iostream>		// Library Inclusions
#include <string>

#include "Items.h"		// Inclusion of Parent class as well as Child classes.
#include "Equipment.h"
#include "Consumables.h"

using namespace std;

// main

int main()
{

	Items ** itemsPtrArr = new Items*[3];	// Item pointer, pointing to an array of pointers.
	itemsPtrArr[0] = new Items("Sword");	// Array initializations.
	itemsPtrArr[1] = new Equipment("Gun");
	itemsPtrArr[2] = new Consumables("Potion");

	cout << "----------Using Basic Item----------" << endl;	// Organizer
					// for loop iterations will all be set to values that I feel, will demonstrate each different Use() adequetly.
	for (int i = 0; i < 3; ++i)
	{
		itemsPtrArr[0]->Use();		// Using Parent class Item's Use() function

	}
	cout << endl;

	cout << "----------Using Equipment----------" << endl;	// Organizer

	for (int i = 0; i < 5; ++i)
	{
		itemsPtrArr[1]->Use();	// Using Child class Equipment's Use() function

	}
	cout << endl;

	cout << "----------Using Consumable----------" << endl;	// Organizer

	for (int i = 0; i < 6; ++i)
	{
		itemsPtrArr[2]->Use();	// Using Child class Consumable's Use() function until it shows no more uses.

	}
	cout << endl;

	cout << "-------------------------" << endl;	// Organizer

	delete[] itemsPtrArr;	// Used keyword 'new' to allocate memory for the object, must use keyword 'delete' to de-allocate the memory given to the objects.


	return 0;
}
