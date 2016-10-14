#include "restrauntSelect.h"
#include "optionMenu.h"
#include <iostream>
#include <string>
/*
*SUMMARY
*This main function gives the following:
*selection of restaraunts
*Menu option to 1. View menu or 2. Make Reservation
*/

restrauntSelect resSel;
optionSelection optMenu;

int main()
{
	resSel.restSelection();
	optMenu.optionMenu();
}