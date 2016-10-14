#include "foodMenu.h"
#include "reservationClass.h"
/*
*This code holds the prototype functions
*and included header names
*For menu options
*/

class optionSelection
{
private:
	//declaring the classes - calls functions in .cpp
	randFood food;
	reservationDB resDB;

public:
	//prototype function
	void optionMenu();
};