#pragma once
#include <iostream>

using std::string;

class Appointment
{
	public:
		Appointment(string& date, string& time, string& reason); // Constructor
		~Appointment();											 // Destructor

		string getApptDate();
		string getApptID();
		string getApptTime();
		string getApptReason();

	private:
		string apptID;
		string apptDate;
		string apptTime;
		string apptReason;
};

