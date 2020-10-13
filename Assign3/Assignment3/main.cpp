// Zach Smith
// 9/30/18
// Assignment 3 *---* Dr. Mundell Granted an extension on this assignment until Monday, October 1st, 2018 due to sickness *---*
// This program will translate Integer numbers into their String form. It will also input from the user how many numbers they would like to add together 
// then will ask the user again for the numbers to be added together, then will output the sum of the numbers as well as the translated version.
// Helped by Scarlett Scarberry, Matt Mundell


#include <iostream>			// Inclusion of needed libraries and files.
#include <string>
#include "textInt.h"

using namespace std;

	// Main
int main()
{

	textInt num1(55);	// Declaration of variable with integer passed through to be used.
	cout << num1.Translate() << endl;	// Translation of variable with integer.
	cout << "-------------------------" << endl;	// Organizer
	num1.SetNumber(720);	// Will then change the integer in the variable to 720.
	cout << num1.GetNumber() << ": " << num1.Translate() << endl;	// Will then Translate the integer.
	cout << "-------------------------" << endl;	// Organizer

	cout << "How many numbers would you like to add together? " << endl;	// Statement for clarity to user.
	int textArrayInts = 0;	// Array intialization set at 0.
	cin >> textArrayInts;
	
	
	int* dynamicTextInt = new int[textArrayInts];	// Dynamic Array created in order allocate enough memory to fit the array the user will enter and so that we can easily point to the 
													// address for when we need the variable and value.
	int sum = 0;	// Sum integer intialized at 0

	for (int i = 0; i < textArrayInts; ++i)	// For loop for the user input of numbers and then the loop will add each of rhose numbers together.
	{
		cin >> dynamicTextInt[i];
		sum += dynamicTextInt[i];
	}
	
	textInt num2(sum);	// New textInt num with the variable sum passed through of the dynamic array's values.
	cout << "-------------------------" << endl;	// Organizer
	cout << num2.GetNumber() << ": " << num2.Translate() << endl;	// Will get the number passed through and then translate it to its textInt form.
	cout << "-------------------------" << endl;	// Organizer

	delete[] dynamicTextInt;	// Must Delete Array.

	textInt textNum1(2458), textNum2(1278);		// New variables with values passed through.
	textInt textNum3 = textNum1 + textNum2;		// Adding the values passed through together.
	cout << "----------Extra Credit---------- " << endl;	// Organizer
	cout << textNum3.Translate() << endl;		// Translating the sum of the two numbers.
	cout << "--------------------------------" << endl;		// Organizer


		
	return 0;
}