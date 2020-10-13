//	Zach Smith
//	CIT 236 Assignment 1: 1 Value Returning Function; isFactor, 1 Void Function; flipString.
//	*8/28/18*
#include <iostream>														// Library inclusion.
#include <string>														// Library inclusion.
																		   
using namespace std;													   
																		   
int isFactor(int num1, int num2);										// Function Prototyping.
void flipString(string& str);											// Function Prototyping.
																		   
int main()																   
{																		   
	int num1 = 0;														// Variables initialized: int because num1 is a number, num1 to be used in the isFactor function.
	int num2 = 0;														// Variables initialized: int because num2 is a number, num2 to be used in the isFactor function.
	string str;															// Variables initialized: string because str is a string of characters, str to be used in flipString.

	
	cout << "Please enter 2 numbers, each followed by enter " << endl;	// Asking User to input 2 numbers, each followed by enter.
	cout << isFactor(num1, num2);										// Calling isFactor function for the parameters of the 2 numbers entered in by user.

	cout << " Please enter a word" << endl;								// Asking User to input a word
	flipString(str);													// Calling Void Function flipString with parameter str in order to read the user's input.
	cout << "Word Flipped! " << str << endl;							// Informing User that their word was flipped by outputting the flipped word.

	
	return 0;
}

int isFactor(int num1, int num2)										// isFactor Function that will take the user's inputted numbers and determine whether the numbers are factorable or not.
{
												
	cin >> num1;														// Obtaining integer input from the user.
	cin >> num2;														// Obtaining integer input from the user.


	int num3 = num2 / num1;												// Creating num3 as num2 divided by num1 in order to test result


	if (num3 % 2 == 0)													// If statement with the condition that if num3 can be divided perfectly by 2
		cout << "	true" << endl;
	else                                                                // Else statement which will trigger if number if not perfectly divisable 
		cout << "	false" << endl;

	return num3;

}

void flipString(string& str)											// flipString Function that will take the user's inputted word and flip the case of each letter. 
{																		// & operator allows combination of str and i.
	
	cin >> str;															// Obtaining the input of the string from the user.

	for (int i = 0; i < str.length(); ++i)								// For loop that will loop for the length of the string
	{
		if(str[i] !=toupper(str[i]))									// If statement with the condition that if the str[i] is not toupper then to replace it with toupper
				str[i] = toupper(str[i]);								

		else if(str[i] != tolower(str[i]))								// Else If statement with the condition that if the str[i] is not tolower then to replace it with tolower
				str[i] = tolower(str[i]);
	}

	return;																// Return statement for void function
}



