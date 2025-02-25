/************************************************************************************
* Program: C++ Travel Agancy
* Programmer: Daudi Mlengela(dmlengela@cnm.edu)
* Date: October 25th 2022
* Purpose: To create a The C++ Travel Agency has a website that allows
* its customers to book Cruises to Alaska on-line for exceptionally
* low fares only on the C++ Cruise Line
*************************************************************************************/

#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace std;


[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MlengelaP6::MyForm form;
	Application::Run(% form);
}




