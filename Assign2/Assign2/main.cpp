//Zach Smith
//Data Structures 236, Prof: Dr. Mundell
//9/18/18
// This program will output two shops and their respective products using values passed through classes.
// This program is to showcase reusibility 
// ** Helped by ** Scarlett Scarberry, Dr. Mundell ** Helped by **

#include <iostream>		//inclusion of needed files/libraries.
#include "Product.h"	//inclusion of class that is in another file.
#include "Shop.h"		//inclusion of class that is in another file.
using namespace std;

int main()	//main
{
	Shop shop1, shop2;		// Declaration of Shop variables
	
		
	shop1.SetName("GoldMine");	// Setting name of Shop
	cout << "Welcome to the " << shop1.getName() << "!" << endl;	// Outputting Shop name.
	shop1.addProduct(0,"	Gold", 5, 3);			// Products added in to be outputted using the Shop class.
	shop1.addProduct(1, "	Silver", 9, 4);			// Products added in to be outputted using the Shop class.
	shop1.addProduct(2, "	Bronze", 23, 6);		// Products added in to be outputted using the Shop class.
	shop1.addProduct(3, "	Platinum", 12, 5);		// Products added in to be outputted using the Shop class.
	shop1.addProduct(4, "	Diamond", 8, 3);		// Products added in to be outputted using the Shop class.
	shop1.DisplayShop();	//Displays the Shop

	shop2.SetName("The Great Falls");	// Setting name of Shop
	cout << endl << "Welcome to " << shop2.getName() << "!" << endl;	// Outputting Shop name.
	shop2.addProduct(0,"	Water",5 , 2);						// Products added in the be outputted using the Shop class.
	shop2.addProduct(1,"	Extra Clean Water",7 ,5);			// Products added in the be outputted using the Shop class.
	shop2.addProduct(2,"	Exquisite Aged Water",12 ,4);		// Products added in the be outputted using the Shop class.
	shop2.addProduct(3,"	Falls Water",9 ,8 );				// Products added in the be outputted using the Shop class.
	shop2.addProduct(4, "	Miracle Ice Crystal", 14, 12);		// Products added in the be outputted using the Shop class.
	shop2.DisplayShop();	// Displays the Shop
	return 0;
}