/************************************************************************************
* Program: C++ Travel Agancy
* Programmer: Daudi Mlengela(dmlengela@cnm.edu)
* Date: October 25th 2022
* Purpose: To create a The C++ Travel Agency has a website that allows
* its customers to book Cruises to Alaska on-line for exceptionally
* low fares only on the C++ Cruise Line
*************************************************************************************/

#pragma once

#include"UtilityFunctions.h"
#include"AlaskanCruise.h"
#include"Date.h"
#include <chrono>
namespace MlengelaP6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	AlaskanCruise cruise;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DateTimePicker^ picker;


	private: System::Windows::Forms::NumericUpDown^ nudNumberOfExcursions;
	private: System::Windows::Forms::RadioButton^ radBtn9DayCruise;
	private: System::Windows::Forms::RadioButton^ radBtn7DayCruise;
	private: System::Windows::Forms::NumericUpDown^ nudNumberOfPassangers;
	private: System::Windows::Forms::TextBox^ txtBxReservationName;
	private: System::Windows::Forms::Label^ lblDepartureDate;
	private: System::Windows::Forms::Label^ lblNumberOfExcursions;
	private: System::Windows::Forms::Label^ lblCruiseLength;
	private: System::Windows::Forms::Label^ lblNumberOfPassangers;
	private: System::Windows::Forms::Label^ lblReservationName;
	private: System::Windows::Forms::TextBox^ txtBxResults;
	private: System::Windows::Forms::Button^ btnMakeReservation;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->picker = (gcnew System::Windows::Forms::DateTimePicker());
			this->nudNumberOfExcursions = (gcnew System::Windows::Forms::NumericUpDown());
			this->radBtn9DayCruise = (gcnew System::Windows::Forms::RadioButton());
			this->radBtn7DayCruise = (gcnew System::Windows::Forms::RadioButton());
			this->nudNumberOfPassangers = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtBxReservationName = (gcnew System::Windows::Forms::TextBox());
			this->lblDepartureDate = (gcnew System::Windows::Forms::Label());
			this->lblNumberOfExcursions = (gcnew System::Windows::Forms::Label());
			this->lblCruiseLength = (gcnew System::Windows::Forms::Label());
			this->lblNumberOfPassangers = (gcnew System::Windows::Forms::Label());
			this->lblReservationName = (gcnew System::Windows::Forms::Label());
			this->txtBxResults = (gcnew System::Windows::Forms::TextBox());
			this->btnMakeReservation = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudNumberOfExcursions))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudNumberOfPassangers))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->groupBox1->Controls->Add(this->picker);
			this->groupBox1->Controls->Add(this->nudNumberOfExcursions);
			this->groupBox1->Controls->Add(this->radBtn9DayCruise);
			this->groupBox1->Controls->Add(this->radBtn7DayCruise);
			this->groupBox1->Controls->Add(this->nudNumberOfPassangers);
			this->groupBox1->Controls->Add(this->txtBxReservationName);
			this->groupBox1->Controls->Add(this->lblDepartureDate);
			this->groupBox1->Controls->Add(this->lblNumberOfExcursions);
			this->groupBox1->Controls->Add(this->lblCruiseLength);
			this->groupBox1->Controls->Add(this->lblNumberOfPassangers);
			this->groupBox1->Controls->Add(this->lblReservationName);
			this->groupBox1->Location = System::Drawing::Point(5, 118);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(328, 204);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// picker
			// 
			this->picker->Location = System::Drawing::Point(129, 149);
			this->picker->Name = L"picker";
			this->picker->Size = System::Drawing::Size(199, 20);
			this->picker->TabIndex = 10;
			// 
			// nudNumberOfExcursions
			// 
			this->nudNumberOfExcursions->Location = System::Drawing::Point(173, 117);
			this->nudNumberOfExcursions->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudNumberOfExcursions->Name = L"nudNumberOfExcursions";
			this->nudNumberOfExcursions->Size = System::Drawing::Size(149, 20);
			this->nudNumberOfExcursions->TabIndex = 9;
			this->nudNumberOfExcursions->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// radBtn9DayCruise
			// 
			this->radBtn9DayCruise->AutoSize = true;
			this->radBtn9DayCruise->Location = System::Drawing::Point(224, 87);
			this->radBtn9DayCruise->Name = L"radBtn9DayCruise";
			this->radBtn9DayCruise->Size = System::Drawing::Size(85, 17);
			this->radBtn9DayCruise->TabIndex = 8;
			this->radBtn9DayCruise->TabStop = true;
			this->radBtn9DayCruise->Text = L"9-Day Cruise";
			this->radBtn9DayCruise->UseVisualStyleBackColor = true;
			// 
			// radBtn7DayCruise
			// 
			this->radBtn7DayCruise->AutoSize = true;
			this->radBtn7DayCruise->Location = System::Drawing::Point(129, 87);
			this->radBtn7DayCruise->Name = L"radBtn7DayCruise";
			this->radBtn7DayCruise->Size = System::Drawing::Size(85, 17);
			this->radBtn7DayCruise->TabIndex = 7;
			this->radBtn7DayCruise->TabStop = true;
			this->radBtn7DayCruise->Text = L"7-Day Cruise";
			this->radBtn7DayCruise->UseVisualStyleBackColor = true;
			// 
			// nudNumberOfPassangers
			// 
			this->nudNumberOfPassangers->Location = System::Drawing::Point(173, 56);
			this->nudNumberOfPassangers->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudNumberOfPassangers->Name = L"nudNumberOfPassangers";
			this->nudNumberOfPassangers->Size = System::Drawing::Size(149, 20);
			this->nudNumberOfPassangers->TabIndex = 6;
			this->nudNumberOfPassangers->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// txtBxReservationName
			// 
			this->txtBxReservationName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtBxReservationName->Location = System::Drawing::Point(145, 17);
			this->txtBxReservationName->Name = L"txtBxReservationName";
			this->txtBxReservationName->Size = System::Drawing::Size(177, 21);
			this->txtBxReservationName->TabIndex = 5;
			// 
			// lblDepartureDate
			// 
			this->lblDepartureDate->AutoSize = true;
			this->lblDepartureDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDepartureDate->Location = System::Drawing::Point(6, 153);
			this->lblDepartureDate->Name = L"lblDepartureDate";
			this->lblDepartureDate->Size = System::Drawing::Size(113, 15);
			this->lblDepartureDate->TabIndex = 4;
			this->lblDepartureDate->Text = L"Departure Date: ";
			// 
			// lblNumberOfExcursions
			// 
			this->lblNumberOfExcursions->AutoSize = true;
			this->lblNumberOfExcursions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumberOfExcursions->Location = System::Drawing::Point(6, 117);
			this->lblNumberOfExcursions->Name = L"lblNumberOfExcursions";
			this->lblNumberOfExcursions->Size = System::Drawing::Size(156, 15);
			this->lblNumberOfExcursions->TabIndex = 3;
			this->lblNumberOfExcursions->Text = L"Number of Excursions: ";
			// 
			// lblCruiseLength
			// 
			this->lblCruiseLength->AutoSize = true;
			this->lblCruiseLength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCruiseLength->Location = System::Drawing::Point(6, 87);
			this->lblCruiseLength->Name = L"lblCruiseLength";
			this->lblCruiseLength->Size = System::Drawing::Size(104, 15);
			this->lblCruiseLength->TabIndex = 2;
			this->lblCruiseLength->Text = L"Cruise Length: ";
			// 
			// lblNumberOfPassangers
			// 
			this->lblNumberOfPassangers->AutoSize = true;
			this->lblNumberOfPassangers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumberOfPassangers->Location = System::Drawing::Point(6, 56);
			this->lblNumberOfPassangers->Name = L"lblNumberOfPassangers";
			this->lblNumberOfPassangers->Size = System::Drawing::Size(161, 15);
			this->lblNumberOfPassangers->TabIndex = 1;
			this->lblNumberOfPassangers->Text = L"Number of Passangers: ";
			// 
			// lblReservationName
			// 
			this->lblReservationName->AutoSize = true;
			this->lblReservationName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblReservationName->Location = System::Drawing::Point(6, 20);
			this->lblReservationName->Name = L"lblReservationName";
			this->lblReservationName->Size = System::Drawing::Size(129, 15);
			this->lblReservationName->TabIndex = 0;
			this->lblReservationName->Text = L"Reservation Name:";
			// 
			// txtBxResults
			// 
			this->txtBxResults->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBxResults->Location = System::Drawing::Point(339, 162);
			this->txtBxResults->Multiline = true;
			this->txtBxResults->Name = L"txtBxResults";
			this->txtBxResults->Size = System::Drawing::Size(286, 160);
			this->txtBxResults->TabIndex = 2;
			// 
			// btnMakeReservation
			// 
			this->btnMakeReservation->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnMakeReservation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMakeReservation->Location = System::Drawing::Point(339, 119);
			this->btnMakeReservation->Name = L"btnMakeReservation";
			this->btnMakeReservation->Size = System::Drawing::Size(191, 37);
			this->btnMakeReservation->TabIndex = 3;
			this->btnMakeReservation->Text = L"Make Reservation";
			this->btnMakeReservation->UseVisualStyleBackColor = false;
			this->btnMakeReservation->Click += gcnew System::EventHandler(this, &MyForm::btnMakeReservation_Click);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(536, 119);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(89, 37);
			this->btnClear->TabIndex = 4;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Info;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(5, 5);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(620, 107);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(637, 334);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnMakeReservation);
			this->Controls->Add(this->txtBxResults);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MlengelaP6 - Alaskan Cruise";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudNumberOfExcursions))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudNumberOfPassangers))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btnMakeReservation_Click(System::Object^ sender, System::EventArgs^ e) {
	// get the reservation name, use the local variable
	string name;
	To_string(txtBxReservationName->Text, name);

	// get the number of passager
	int nPeople = Convert::ToInt32(nudNumberOfPassangers->Value);
	//string To_string(int numberOfPass);
	// get the number of the cruise
	int nDays = 0;
	if (radBtn7DayCruise ->Checked == 0) {
		nDays = true ;
	}
	else {
		nDays = false;
	}
	//string To_string(int numberOfCruise);
	// get the number of the excursions
	int nExcursions = 0;
	//string To_string(int nExcursions);

	// get the values from the date picker
	int Month = picker->Value.Month;
	int day = picker->Value.Day;
	int year = picker->Value.Year;

	//Get all three values: instantiate a departure date object

	// Create the booking date:
	Date booking;
	Date departure(Month, day, year, "Departure Date for: " + name);
	// use an overloaded constructor to create an AlaskanCruise object
	AlaskanCruise cruise(
		name,
		nPeople,
		nDays,
		nExcursions,
		booking,
		departure
	);
	// and pass all the data you just got from the form or created
	//return(cruise);
//show the string ReservationDescription() in the txtBxResults
	txtBxResults->Text = gcnew String(cruise.ReservationDescription().c_str());
	// Check using IsReservationWritten to make sure there's a file
	if (!cruise.IsValidInput()) {
		// if so append a string that says your file name
		cout << "Invalid Input:" << cruise.ReservationDescription() << "\n";
	}
	else {
		string desc = cruise.ReservationDescription();
		if (!cruise.IsFileWritten())
		{
			desc += "Wrote:  " + cruise.GetFilename();
			cout << desc << "\n";
		}
		else {
			// else append a string that says no file written
			cout << "No File was written";
		}
		//Disable make reservation button
		btnMakeReservation->Enabled = false;
		btnMakeReservation->Visible = false;

	}
}

private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	txtBxResults->Clear();
	txtBxResults->ResetText();
	txtBxReservationName->Clear();

}
};
}
