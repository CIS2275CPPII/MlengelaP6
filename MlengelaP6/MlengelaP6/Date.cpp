/************************************************************************************
* Program: C++ Travel Agancy
* Programmer: Daudi Mlengela(dmlengela@cnm.edu)
* Date: October 25th 2022
* Purpose: To create a The C++ Travel Agency has a website that allows
* its customers to book Cruises to Alaska on-line for exceptionally
* low fares only on the C++ Cruise Line
*************************************************************************************/

#include <string>
#include <ctime>		//obtain system date
#include <sstream>

#include "Date.h"

#include"AlaskanCruise.h"

using namespace std;

//declare static variable array
const int Date::days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Date::Date()
{
	
	//Set the Date variables to the computer's date.
	time_t rawtime;
	struct tm OStime;

	//First obtain the raw time from the op system
	time(&rawtime);

	//localtime converts this to data struct
	//containing month, day, year
	//Jan month is 0, must add 1
	//0 year is 1900, 
	//must add 1900 to obtain correct year
	localtime_s(&OStime, &rawtime);

	month = OStime.tm_mon + 1;
	day = OStime.tm_mday;
	year = OStime.tm_year + 1900;

	description = "Today's Date";
	DetermineLeapYear();
	CalcDayOfYear();	
}


Date::Date(int m, int d, int y, string desc):
	month(m), day(d), year(y), description(desc)
{
	DetermineLeapYear();
	CalcDayOfYear();
}


void Date::SetDate(int m, int d, int y, string desc)
{
	month = m;
	day = d;
	year = y;
	description = desc;
	DetermineLeapYear();
	CalcDayOfYear();
}

string Date::GetFormattedDate()
{
	return string();
}


string Date::GetFormattedDate()const
{
	stringstream strDate;
	strDate << description;
	
	string monName[12] = {"January",	"February ","March",
		"April", "May", "June", "July", "August", 
		"September", "October", "November", "December"};


	strDate << ": " << monName[month-1] << " " << day 
			<< ", " << year;

	return strDate.str();
}

void Date::CalcDayOfYear()
{
	//set up array of days in each month
	//for non-leap year year
	//int dayCount[12] = {31,28,31,30,31,30,
	//	31,31,30,31,30,31};

	dayOfYear = 0;

	//add the days up to the previous month
	for(int i = 1; i < month; ++i)
	{
		dayOfYear += days[i-1];

		//if adding Feb, check if leap year
		if(i == 2 && bLeap == true)
			dayOfYear += 1;
	}

	dayOfYear += day;
}

void Date::DetermineLeapYear()
{
	//A year is a leap year if it is divisible by four, 
	//unless it is a century date (i.e,  1900). 
	//If it is a century date, it is a leap year only 
	//if it is divisible by 400 (i.e., 2000).

	if(year%4 == 0 && year % 100 != 0)
		bLeap = true;
	else if(year % 400 == 0)
		bLeap = true;
	else
		bLeap = false;
}

//bool Date::ValidateThisDate(){}
//{
	//int dayCount[12] = {31,28,31,30,31,30,
	//31,31,30,31,30,31};

	//if (day >= days[month] || day < 0)
		//bValid = false;
	//else
		//bValid = true;

	//return bValid;
//} 

