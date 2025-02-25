/************************************************************************************
* Program: C++ Travel Agancy
* Programmer: Daudi Mlengela(dmlengela@cnm.edu)
* Date: October 25th 2022
* Purpose: To create a The C++ Travel Agency has a website that allows
* its customers to book Cruises to Alaska on-line for exceptionally
* low fares only on the C++ Cruise Line
*************************************************************************************/

#ifndef _DATE_H
#define _DATE_H
#include"AlaskanCruise.h"
#include <string>
using namespace std;

class Date
{
	private:
		int month{ 1 }, day{ 1 }, year{ 1900 };
			string description;
			int dayOfYear{ 1 };
			static const int days[];		//arrays of days per month
			bool bLeap{ false }, bValid{ false };
			string GetFormattedDate() const;
			void CalcDayOfYear();
			void DetermineLeapYear();			
			

	public:
			Date();
			Date(int m, int d, int y, string desc);
			void SetDate(int m, int d, int y, string desc);
			void SetDesc(string d){ description = d; }

			string GetFormattedDate();

			int GetDayOfYear(){ return dayOfYear;}
			int GetYear(){ return year;}
			int GetMonth(){ return month;}
			int GetDay(){ return day;}
			bool isLeapYear(){ return bLeap; }
	
			bool ValidateThisDate() { return bValid; };
			
};

#endif