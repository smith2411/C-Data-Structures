#pragma once	// Making sure that duplicate files included does not crash the program.

#include <string>	//inclusion of libraries needed
#include <iostream>
#include <vector>

using namespace std;

class Product 
{
private:	// Private variables
	string productName;		// Declarations
	int price;
	int quantity;
	int numItems = 0;
	int productIndex = 0;
	
public:	// Public functions that use the Private Variables.

	int getNumItems()	// Function that will return the number of Items declared.
	{
		return numItems;
	}
	
	int getProductIndex()	// Function that will return the Product Index.
	{
		return productIndex;
	}
	string GetProductName()		// Function that will return the Name of the Product.
	{
		return productName;
	}
	
	int getPrice()		// Function that will return the price of the Product.
	{
		return price;
	}
	
	int getQuantity()	// Function that will return the Quantity of the Product.
	{
		return quantity;
	}

	void setProduct(int index,string itemName, int itemPrice, int itemQuantity)	// Function that will pass through all the variables needed for a product and makes the private variables 
	{																			// useable elsewhere.
		index = productIndex;		// Renames Private variables in order to utilized in the program.
		productName = itemName;		// Renames Private variables in order to utilized in the program.
		price = itemPrice;			// Renames Private variables in order to utilized in the program.
		quantity = itemQuantity;	// Renames Private variables in order to utilized in the program.
		
	}
	double getTotal()		// Function that will multiply the price and quantity of a product together in order to get the total price.
	{
		double totalPrice = price * quantity;	// Multiplication of price and quantity.
		return totalPrice;
	}
	
};