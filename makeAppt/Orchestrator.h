#pragma once
#include <map>
#include "Appointment.h"
#include "Patient.h"

using namespace std;

class Orchestrator
{
private:


public:
	Orchestrator();											// Constructor
	~Orchestrator();										// Destructor


	bool deleteSchedule();
	bool makeAppointment(string reason, string patientName);//date,time_t time, string reason)

private:

	bool findPatient(string patientID);
	bool findSchedule(string patientID);
	bool scheduleAppointment(Appointment& theAppointment, Patient& thePatient);


	Patient* thePatient;
	//Appointment createAppointment(string reason);
	Patient createPatient(string& patientName);
	map<string, Patient*> thePatients;
	//map<string, string> theSchedules;

};

