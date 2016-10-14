#include "reservationClass.h"
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
/*
SUMMARY
*This code represents the .cpp of declaring
*the prototype functions.
*within this class is the definition of each prototype from 
*the class.
*/


void reservationDB::resInfo()
{
	
	//DB storage of Name
	std::cout << "Type your first name:\t\t\n";
	std::cin >> pName;
	//[error skips line] -> std::getline(std::cin, pName);
	std::cout << std::endl;
	//DB storage of Date
	std::cout << "Please enter the month (MM)\n";
	std::cin >> pMonth;
	std::cout << "\n";
	std::cout << "Please enter the day(DD)\n";
	std::cin >> pDay;
	std::cout << std::endl; 
	//DB storage of party Size
	std::cout << "Please enter the party size:\t\n";
	std::cin >> pSize;
	std::cout << std::endl;
	std::cout << "What number may we contact you at?(###-###-####):\n";
	std::cin >> contNum;
	std::cout << std::endl;


}

int reservationDB::timeSelect()
{
	std::cout << "Please enter the time:(HH:MM)\t\n";
	std::cin >> pTimeH >> c >> pTimeM;
	return pTimeH, pTimeM;
}
//including resInfo() this function now runs resInfo() and now randomizes yes or no for time/size.
void reservationDB::writeFile()
{
	//this program writes to the file and also over writes per new run.
	std::ofstream myText;
	myText.open("reservationinfo.txt");
	if (myText.is_open())
	{
		myText << "Name: " << pName << "\n";
		myText << "Time: " << pTimeH << ":" << pTimeM << "\n";
		myText << "Date: " << pMonth << "/" << pDay << "/2016\n";
		myText << "Party Size: " << pSize << "\n";
		myText <<"#: " << contNum;
		myText.close();
	}
	else
	{
		std::cout << "Unable to open file.";
	}
}

void reservationDB::resAvail()
{
	timeSelect();
	resInfo();
	srand(time(0));
	int ranVal = rand() % 2;
	std::string userInput;

	while (userInput != "q")
	{
		//if random value remainer is 1, reservation time is available
		if (ranVal == 1)
		{
			std::cout << "Thank you " << pName << "\nYour reservation time is: " << pTimeH << ":" << pTimeM << "\n";
			std::cout << "Your date is: \t" << pMonth << ":" << pDay;
			std::cout <<"\n";
			std::cout << "With " << pSize << " seats reserved\n";
			std::cout << "See you soon!\n";
			writeFile();
			break;
		}
		//reservation time not available
		else
		{
			std::cout << "I'm sorry, " << pName << " this time is not available. Please try another time.\n";
			break; //end while loop
		}
	}
}