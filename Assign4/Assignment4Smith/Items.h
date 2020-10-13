#pragma once


#include <iostream>		// Inclusion of needed libraries 
#include <string>

using namespace std;

class Items	// Class that will 
{

private:
	string name;
	 

public:
	Items()	// Default Constructor that has no parameters
		: name("Unnamed Item")	// name
		
	{

	}

	Items(string n)		// Item's Constructor 
		: name(n)
		
	{

	}

	void setName(string name)	// Function that will pass through a string and set the name to what is entered.
	{
		this->name = name;	//	'this' keyword is a pointer that points to the object that will be calling this function.
	}

	string getName() const	// Function will return the value of name.
	{
		return name;
	}

	// 'virtual' keyword allows the function to be overridden by functions in child classes.
	virtual void Use()	// Item's Use function that will be the default Use().
	{
		cout << "Using Item " << getName() << endl; 
	}
};