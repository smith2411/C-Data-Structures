#pragma once		// Making sure that duplicate files included does not crash the program.
#include <string>		//inclusion of files/libraries needed
#include "Product.h"	//inclusion of file Product in order to use what is declared in Product.
#include <vector>
using namespace std;

class Shop
{

private:	// Private variables.
	string Name;
	Product items[6];
	int numItems = 0;
	int quantity = 0;
public:	// Use of private variables in public functions.

	bool isValidProduct(int index)		//Function in order to make sure that the number of products does not go over the amount of numItems.
	{
		if (numItems < 6 && index >= 0)
			return true;
				return false;
	}
	int getnumItems()					// Function to get the number of items since the variable is private.
	{
		return numItems;
	}
	void SetName(string n)				// Function to set the name of the Product
	{
		Name = n;
	}
	string getName()					// Function that will pass through the string entered for SetName.
	{
		return Name;
	}
	
	double getProductTotal(int productIndex)		// Function that use the GetTotal fucntion in the Product file in order to pass through and calculate the values for the total cost.
	{
		if (isValidProduct(productIndex))			// Checks to see if the Product is valid.
		{
			return items[productIndex].getTotal();
		}
		cout << productIndex << "invalid index" << endl;	// Will output this if the product is not valid.
		return -1;
	}
	int setQuantity(int q)							// Function that will pass through an int for the value of quantity.
	{
		quantity = q;
	
	}
	int getQuantity(int productIndex)				// Function that will use the passed through int to display the said product's quantity.
	{
		return quantity;
	}
	void addProduct(int productIndex,string itemName,int cost, int quantity )	// Function that will pass through all the values needed for a Product and will make sure it is connected
	{																			// to the correct product.
		if (isValidProduct(productIndex))	// Checks to see if the product is valid.
		{
			items[numItems++].setProduct(0, itemName, cost, quantity);	//numItems will increase by 1 everytime a product is set.
		}
		
	}
	
	void DisplayProduct(int productIndex)		// Function that will pass through the values set and display the values along with text to organize the display of the shop.
	{
		if (isValidProduct(productIndex))		// Checks to make sure that the product is valid.
		{
			cout << items[productIndex].GetProductName() << ":";
			cout << " $" << items[productIndex].getPrice() << " Per Item. ";
			cout << " Stock Left: " << items[productIndex].getQuantity();
			cout << " The total cost for all of this item is: $" << items[productIndex].getTotal() << "" << endl;
		}
	}
	void DisplayShop()							// Fucntion that will display the shopfront and every value passed through to the correct products.
	{
		for (int i = 0; i < numItems; ++i)		// Links the index to the number of items in order to make sure that the products are correct.
			DisplayProduct(i);
	}
};