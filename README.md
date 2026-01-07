# The C++ Alaskan Cruise: 

<img width="1005" height="647" alt="image" src="https://github.com/user-attachments/assets/96e9d199-abba-434f-92b2-5814dc4e242b" />


The C++ Travel Agency has a website that allows its customers to book Cruises to Alaska online for exceptionally low fares only on the C++ Cruise Line.  All staterooms are OceanView and have the same low price. 
All of the C++ Cruise Line Alaskan Cruises are based in Vancouver, BC.  The  C++ Inside Passage cruises last seven or nine days.  

We’re going to write a class that represents the reservation data for an individual or couple wanting to book a cruise.  Here is the _AlaskanCruise_ class declaration.  The Date class here is the Revised Date Class, downloaded from Brightspace.  

<img width="749" height="685" alt="image" src="https://github.com/user-attachments/assets/d925e419-604c-4c90-8d1a-21b33372de71" />

Your job is  to write the _AlaskanCruise_ class and a form to test the class.  **Each reservation will be a unique object.  Use the overloaded constructor to create the object in the event handler for the _MakeReservation_ button**.

Present the Cruise information on the Form to explain the terms to the user.  Here are the cruise/tour choices:  7-day cruise, 9-day cruise.   They are both  Inside Passage cruises, round-trip from Vancouver, BC to Skagway, Alaska. The 7-day cruise  stops at the Twin Sawyer Glaciers in Skagway, Juneau, and Ketchikan, Alaska.  The 9-day cruise adds the ports of Sitka, and Prince Rupert.  

The base fare for the C++ Alaskan Cruises is $1999.00 per person for the 7-day cruise.  The 9-Day cruise is $2539.  There is a 60% discount if the cruise is booked <ins>less than</ins> 90 days in advance.  There are excursions  available for purchase for each port.  There are guided tours or activities specific to the location.  They cost $325.00 for each excursion per person.  So if there are 3 excursions ordered, that will be $325 * 3 =  $975.00


**In the event handler for the makeReservation button on MyForm.h:** </br>
Get the Reservation name and the number in the party ( 1 or 2 ).   Get how many excursions the party will purchase. Then get the date of departure.  Set the values into a Date object.  You can get the booking date by simply making a default Date object, which will give you today’s date.  Set the values into a Date object.  Create the AlaskanCruise object using the overloaded constructor.  Use the constructor initializer to create the variables with the values passed in.

Call ReservationDescription()  in the results textbox.   It creates and returns the dateString that contains the reservation name, number of passengers, the booking date, travel date, and total fare.  If there is an error in the reservation, it will display the specific error message. If there is no error, then call WriteReservationConfirmation().

Call _WriteReservationConfirmation_, which sets a bool indicating success/failure of file writing.  Check the bool. If successful, append that  to the _ReservationDescription_ and display the filename.  If not, report that no file was written.  This function will create the filename out of the reservation name,  resNum,  and  ".txt".  Open the file and write the dateString  from _ReservationDescription_  to the user.  

**Static Class Variables:**  </br> For the static class member variable ( static int resNumber), the variable definition must be made in the class implementation file, otherwise known as _AlaskanCruise.cpp_.  At the same time, it can be initialized.  This statement might look like:

int AlaskanCruise::resNumber = 0;  

This statement is the actual definition of the static variable and allocates the memory for it. 
The purpose of this variable is to keep track of the number of reservation objects that are created.  

In the Date class, we need to use the monName[12] array in more than one method.  It is cumbersome to re-declare this array in each method.  It can also be declared static and accessed in any class method. Since it is fixed, it can also be declared const.

**The Date and AlaskanCruise classes:**</br>
You will modify the Date class to add a ValidateThisDate function.  This function will check that the day of the month  is not less than 1 and does not exceed the number of days in that month.  That is, you may not use the 31st of February.  It will return true or false, depending on whether the date is valid.

In your AlaskanCruise class, the SetDates method assigns the Date object arguments to the AlaskanCruise’s class Date objects, then calls ValidateInput.  ValidateInput will check if the Date objects are valid, i.e., not the 34th of  July, by calling the ValidateThisDate method of the Date class,  and will check that the Date of Departure is after the Date of Booking, and verify the years are proper in the ValidateDate function.   It will also check to see if the string for the Reservation name is blank.

We will allow the cruise to begin in the current year and in the next year only.  It is not  permissible to book  and  leave on the same day, but one could leave on the next day.  If the Dates are invalid, set the  bool, bValidInput, to false and create a string stating that the program is unable to determine the fare due to ...  The Set function will check bValidInput, and if true, call the private CalculateFare  and CreateReservationDescription methods.  

Book your Alaskan Cruise from Vancouver.BC to Skagaway, AL
The 7-day cruise  stops at the Twin Sawyer Glaciers, in Skagway and Ketchikan, for $1999.00
The 9-day cruise adds the ports of Sitka, and Prince Rupert, $2539.00
Excursions: $325.00 per person
Discount -60% discount for reservation within 90 days of sailing!

<img width="725" height="420" alt="image" src="https://github.com/user-attachments/assets/5f46936d-0264-4d3d-8eaa-bd42b2966b91" />

# Sources:
# Usage:
# Contributions: 






