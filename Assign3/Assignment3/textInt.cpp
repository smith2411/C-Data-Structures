#include "textInt.h"	// Inclusion of the class.

										//static variables are initialized
// Variables for values less than 20.
const int textInt::lessthan20Value[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
// String Variables for values less than 20
string textInt::lessThan20[20] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",};
// String variables for values of tens.
string textInt::tens[8] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
// Variables for values of tens.
const int textInt::tensValues[8] = {20, 30, 40, 50, 60, 70, 80, 90};
// String variable for hundreds.
string textInt::hundreds[] = {"hundreds"};
// String variable for thousands.
string textInt::thousands[] = {"thousand"};


string textInt::GetNumWord() const		//Function GetNumWord willread the number and then output the text form of each number input.
{					// Variables 
	string result;
	int tempNumber = number;	// will hold private variable number.

	if (tempNumber == 0)		// Statement for zero at the begining so that if the number is 0 it equals zero.
	{
		string zero = lessThan20[tempNumber];
		result += zero;
	}
	if (tempNumber >= 1000 && tempNumber != 0)		// Statement will read the first number in the inputted number and then output the corresponding word to match the number  
	{												// Will also output 'thousand' as it is only trying to read the individual number.
		int thousandsNum = tempNumber / 1000;

		string thousandsWord = lessThan20[thousandsNum] + " thousand ";
		tempNumber -= 1000 * thousandsNum;

		result += thousandsWord;
	}
		
	if (tempNumber >= 100 && tempNumber != 0)	// Statement will read the second number in the inputted number and then output the corresponding word to match the number 
	{											// Will also output 'hundred' as it is only trying to read the individual number.
		int hundredNum = tempNumber / 100;
	
		string hundredsWord = lessThan20[hundredNum] + " hundred ";
		tempNumber -= 100 * hundredNum;
		
		result += hundredsWord;
	}

	if (tempNumber <= 99 && tempNumber >= 20 && tempNumber != 0)	// Statement will read the last 2 numbers in the inputted number and then output the corresponding word to match the number 
	{																// as long as the number is between 99 and 20.
		int tensNum = tempNumber / 10;

		string tensWord = tens[tensNum - 2] + " ";	// subtracts 2 because it starts at 20.
		tempNumber -= 10 * tensNum;
		result += tensWord;
	}
	if (tempNumber <= 20 && tempNumber >= 0 && tempNumber != 0)		// Statement will read the last number in the inputted number and then output the corresponding word to match the number 
	{																// as long as the inputted number is less than 20.
		string finalSpot = lessThan20[tempNumber] + " ";
		result += finalSpot;
	}
	
	return result;
}

