#include "Appointment.h"

using std::string; using std::cout; using std::endl;

	string apptID;
	string apptDate;
	string apptTime;
	string apptReason;

	// Constructor
	Appointment::Appointment(string& date, string& time, string& reason)						
		:apptID(""), apptDate(date), apptTime(time), apptReason(reason)
	{
		// Generate an apptID
		apptID = "001";
		// Verify appointment ID
		cout << "Built Appointment " << apptID << " for " << apptReason << " at " << apptDate << " " << apptTime << endl;
	}
	// Destructor
	Appointment::~Appointment()
	{
		// Verify destruction of object
		cout << "Destroyed " << apptID << endl;
	}
	// Singular pull of apptDate
	string getApptDate()
	{
		return apptDate;
	}
	// Singular pull of apptID
	string getApptID()
	{
		return apptID;
	}
	// Singular pull of apptTime
	string getApptTime()
	{
		return apptTime;
	}
	// Singular pull of apptReason
	string getApptReason()
	{
		return apptReason;
	}