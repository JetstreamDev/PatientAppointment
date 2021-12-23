#include <iostream>
#include "Appointment.h"

using std::string; using std::cout; using std::endl;

string appointmentTest()
{
	Appointment* theAppointment = NULL;

	string date   = "01/01/2000";
	string time	  = "01:00";
	string reason = "This is a test";

	// Update thePatient with patientID and patientName
	if (theAppointment == NULL)
	{
		theAppointment = new Appointment(date, time, reason);
	}
	// Check that thePatient object has been created
	if (theAppointment == NULL)
	{
		return "creation failed";
	}
}

/*
//Run appointmentTest as stand-alone
int main()
{
	string result = appointmentTest();
	cout << result << endl;
}*/