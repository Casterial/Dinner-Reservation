#include "foodMenu.h"
#include <iostream>
#include <vector>
#include <time.h>
/*
SUMMARY
*This .cpp file is declaring the menu
*The meny is then randomized out and only shows 
*5 itemss per restraunt chosen.
*/
void randFood::foodMenu()
{
	//18 food items into a string list. (MENU ITEMS)
	std::string menu[18] { "12oz Steak ---- $14.95",
		"Coconut Shrimp ---- $16.99 food allgery notice: Contains fish.",
		"Tour of Italy ---- $17.95 food allgery notice: Contains dairy.",
		"Shrimp Scampi ---- $18.49 food allergy notice: Contains fish.",
		"Pizza w/ toppings (2) ---- $8.99 food allergy notice: Contains gluten and dairy products.",
		"Teriyaki Chicken ---- $12.99",
		"Special Burger ---- $9.99 food allergy notice: Contains dairy products.",
		"Ultimate Burger combo w/ fries ---- food allergy notice: Cotains dairy products.",
		"Mahi Mahi ---- $10.49",
		"Hot dog ---- $5.99",
		"Soups: Clam Chowder, Chicken Noodle, or Vegetable Beef ---- $4.99 for information on food allergies ask the waiter.",
		"Turkey Sandwich ---- $8.99",
		"Salads: Chicken Caeser Salad, or Garden Salad (Nuts optional) ---- $4.99 food allergy notice: May contain nuts.",
		"Pulled Pork Sandwich ---- $7.99 food allergy notice: Contains wheat and gluten.",
		"Chicken Strips (5) w/ fries ---- $5.99",
		"Chicken Over Rice w/ egg ---- $5.99",
		"Garlic Paramesan Wings w/ fries ---- $10.99",
		"Spicy Islander Hotsauce wings w/ fries ---- $10.99"
	};

	//this randomizes the food menu and spits out 5 items for the user to see.
	int ranVal;
	srand(time(0));

	for (int i = 0; i < 5; i++){
		ranVal = rand() % 18;
		std::cout << menu[ranVal] << "\n";
	}
}