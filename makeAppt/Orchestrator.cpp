#include "Orchestrator.h"
#include "Schedule.h"
#include "Appointment.h"
#include "Patient.h"

map<string, Patient> thePatients;	// patientID, Patient
map<string, string> theSchedules;	// patientID, appointmentID

Orchestrator::Orchestrator()		// Constructor
{
	cout << "Built Orchestrator" << endl;
	Patient* thePatient = NULL;

}

Orchestrator::~Orchestrator()
{

}


bool Orchestrator::deleteSchedule()
{
	return 1;
}

/*
[param in] reason	 - string for why appointment is needed
[param in] patientID - unique string to identify patient
*/
bool Orchestrator::makeAppointment(string reason, string patientName)//date,time_t time, string reason)
{
	if (thePatient == NULL)
	{
		thePatient = new Patient(patientName);
	}


	// findPatient returns 1 - found; 0 - not found
	/*if (!findPatient(patientName))
	{
		//Patient aPatient = createPatient(patientID);
		 Patient* thePatient = new Patient(createPatient(patientName));
		cout << "Does this work? " << thePatient->getPatientID() << endl;
	}*/

	// findSchedule returns 1 - found; 0 - not found
	/*if (!findSchedule(patientID))
	{
		Appointment anAppointment = createAppointment(patientID);
	}*/
	//scheduleAppointment(anAppointment, aPatient)
	//cout << patientID << endl << reason << endl;
	//createAppointment();
	return 1;
}


/*Appointment& Orchestrator::createAppointment(string reason)
{
	Appointment aAppointment;
	aAppointment.apptID		= "001";
	aAppointment.apptReason = reason;
	return aAppointment;
}*/

/*Appointment Orchestrator::createAppointment(string reason)
{
	Appointment anAppointment = Appointment(reason);
	anAppointment.apptID = "001";
	return anAppointment;
}

Patient Orchestrator::createPatient(string patientID)
{
	aPatient->patientName = "Bob";
	//Patient aPatient = Patient(patientID);
	//aPatient.patientName = "Bob";
	//cout << aPatient->patientID << endl;							// Dereference pointer to output patientID
	return *aPatient;
}

bool Orchestrator::findPatient(string patientID)
{
	if (thePatients.find(patientID) == thePatients.end())
	{
		return 0;
	}
	return 1;
}

bool Orchestrator::findSchedule(string patientID)
{
	if (theSchedules.find(patientID) == theSchedules.end())
	{
		return 0;
	}
	return 1;
}

bool Orchestrator::scheduleAppointment(Appointment& aAppointment, Patient& aPatient)
{
	return 1;
}*/
