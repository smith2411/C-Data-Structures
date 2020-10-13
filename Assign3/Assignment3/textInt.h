#pragma once

#include <iostream>		// Includsion of libraries needed. 
#include <string>

using namespace std;

class textInt
{
public:	// Public Functions and Variables.
	textInt(int num = 1)	// Default Constructor.
		: number(num)		// Member Initialization.
	{ }
	unsigned int GetNumber() const	// The unsigned and const tags mean that the number can be positive or negative and will not change.
	{								// Function will assign the private variable 'number' to GetNumber.
		return number;
	}
	void SetNumber(unsigned int setNumber)	// Function will pass through an integer and will set the number to be used.
	{
		number = setNumber;
	}
	void operator+=(const textInt rightOperand)	// Function so that += is not void.
	{
		number += rightOperand.number;
	}
	textInt operator+(const textInt rightOperand) const	// Function that will return the objects of the class aswell as allow me to use '+'.
	{
		textInt temp(number + rightOperand.number);
		return temp;
	}
	operator int()	// Covert Operator, converts from text to Int 
	{
		return number;
	}
	string Translate()		// This function will translate the integer by using the 'GetNumWord' function and will also check to make sure that the number is translated
	{						// before preceeding further.
		cout << "Your Translated Number is: " << endl;

		if (number != translatedNumber)
			translation = GetNumWord();
		translatedNumber = number;
		return translation;
	}
private:			// Private member functions
	unsigned int number;
	string translation;
	unsigned int translatedNumber;
					// Static variables to be shared across instances of the class
	const static int tensValues[8];
	static string tens[8];
	static string lessThan20[20];
	const static int lessthan20Value[20];			// Int variables are const so they do not change after they are intialized.
	static string thousands[];
	static string hundreds[];
	static string numWord[];
	
					// Needs to be private in order to be accessed by translate.
	string GetNumWord() const;
};
