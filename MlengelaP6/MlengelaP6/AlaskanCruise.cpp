/************************************************************************************
* Program: C++ Travel Agancy
* Programmer: Daudi Mlengela(dmlengela@cnm.edu)
* Date: October 25th 2022
* Purpose: To create a The C++ Travel Agency has a website that allows
* its customers to book Cruises to Alaska on-line for exceptionally
* low fares only on the C++ Cruise Line
*************************************************************************************/
#include<iomanip>
#include<fstream>
#include<sstream>
#include<iostream>
#include "AlaskanCruise.h"

void AlaskanCruise::CalculateFare()
{
    //check how long the cruise is to get the base price
    fare = 0.0;
    if (numberDaysCruise == 7) {
        fare += numberOfPass * FARE_SEVEN;
    }
    else{
      fare += numberOfPass * FARE_NINE;
    }  
    // need to figure out the number of days to departure.
    numDaysToDepart = dep.GetDayOfYear() - book.GetDayOfYear();
    // if it is less than 90 days
    
    
    // calculate 60% discount on the fare. No discount on the excursions
    double fare{ 1.0 };
    if (numDaysToDepart < DAYS_TO_DEPART_REQD) {
        fare = (1.0 - DISCOUNT_PERCENT / 100.0) * fare;
    }
    // multiply by how many passangers
    else if
        (numDaysToDepart < DAYS_TO_DEPART_REQD) {
        fare = (1.0 - DISCOUNT_PERCENT / 100.0) * numberOfPass;
    } 
    
    // Find out how many execursions. Add the cost of execursions
    int nExcursions = 0;

}

void AlaskanCruise::ValidateInput()
{
    // using streamstring to write string
    stringstream ss;
    string reservation;
    // check that the date itself is valid. 
    bValidInput = false;
    if (reservation == " ")
        ss << "Reservation is blank";
    // check that the date of departure is after the date of booking
    else if (!book.ValidateThisDate())
    ss << "invalid booking date: " << book.GetFormattedDate();
    //That means check the year, the month as well as the day
    else if (book.GetDayOfYear() >= dep.GetDayOfYear())
        ss << "departure date most be later than booking date: " <<
        book.GetFormattedDate() << " " << dep.GetFormattedDate();
    //check the departure date
    else if (!dep.ValidateThisDate())
    ss << "Invalid departure date: " << dep.GetFormattedDate();
    //check that the departure is this or next year
    else if (book.GetYear() != dep.GetYear())
    ss << "can only book and depart within the current year: " << dep.GetFormattedDate();
    // if all are ok, good. if they are false, bValid input is false
      else
        bValidInput = true;
    // create an error message that is assigned to dateString
    if (!bValidInput)
        dateString = "Cannot calculate fare, " + ss.str();

}

void AlaskanCruise::WriteReservationConfirmation()
{
    // using streamstring to write string
    stringstream ss;
    // construct the file name with reservation number and res.number.txt
    ss << reservation << "_" << resNumber++ << ".txt";
    filename = ss.str();
   // Open a file and check it. Set bWrite to true or false.
    ofstream output(filename);
    if (output)
    {
        // write the dateString to the file. close the file
        output << dateString << "\n";
        // set bWrite to true or false
        bWrite = true;
    }

}
// use initializer
AlaskanCruise::AlaskanCruise(string resName, int numPass, int numDays, int numEx, Date booking, Date departure) : 
    reservation(resName), numberOfPass(numPass), numberDaysCruise(numDays), numberOfExcursions(numEx),
    book(booking), dep(departure)

{
    ValidateInput();
}

void AlaskanCruise::SetDates(Date& bk, Date& dpt)
{
    book = bk;
    dep = dpt;
    ValidateInput();
    // if the input is valid, call CalculateFare
    CalculateFare();
}

string AlaskanCruise::ReservationDescription()
{
    // check for valid input
    if (!bValidInput)
    // Call calculate fare()
    CalculateFare();
    //use stringstream or other means to write a string with all
    stringstream ss;
    ss  << "Reservation Name          : " << reservation << "\n"
        << "Number of Passanger       : " << numberOfPass << "\n"
        << "Booking Date              : " << book.GetFormattedDate() << "\n"
        << "Travel Date               : " << dep.GetFormattedDate() << "\n"
        << "Number of Excursions      : " << numberOfExcursions << "\n"
        << "Fare                      : " << fixed << setprecision(2) << fare << "\n";
    dateString = ss.str();
    // call WriteReservationConfirmation()
    string WriteReservationConfirmation();
    // the string is assigned to dateString
    return (dateString);
}
