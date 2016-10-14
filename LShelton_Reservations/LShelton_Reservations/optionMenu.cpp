#include "optionMenu.h"
#include <iostream>

/*
*this code gives the user a menu
*To select between menu or reservation
*/

void optionSelection::optionMenu()
{
	//User may chose between seeing the menu or creating an actual reservation
	std::string  mainOptSelect;
	std::cout << "What would you like to do?:\n";
	std::cout << "See the menu, or create a reservation \n(Menu/Create Reservation) Enter 'q' to quit. \n";
	std::cin >> mainOptSelect;
	//while loop continues until user decides to quit. View or create Res.
	while (mainOptSelect != "q")
	{
		// || == or, menu or Menu.
		if (mainOptSelect == "menu" || mainOptSelect == "Menu")
		{
			food.foodMenu();
		}
		else
		{
			resDB.resAvail();
		}
		std::cout << "What would you like to do?:\n";
		std::cout << "See the menu, or create a reservation\n(Menu/Create Reservation) Enter 'q' to quit. \n";
		std::cin >> mainOptSelect; //end while loop opportunity
	}
}

