#ifndef RESERVATIONCLASS_H
#define RESERVATIONCLASS_H
#include <string>
/*
SUMMARY
*This holds the public data which 
*is accessed by both prototype functions
*defined within the .cpp file.
*/


//template <class T> template all integers.
class reservationDB
{
private:
	//private variables accessed all around for holding information within the function.
	std::string pName;
	int pTimeH;
	int pTimeM;
	int pMonth;
	int pDay;
	int pSize;
	std::string contNum;
public:
	char c; //char c for taking in time ##:##
	//creating prototype functions late declared in the corresponding .cpp
	void resAvail();
	void resInfo();
	int timeSelect();
	void writeFile();
};




#endif