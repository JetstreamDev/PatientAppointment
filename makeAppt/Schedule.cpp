#include "Schedule.h"
#include "Appointment.h"

using namespace std;

Schedule::Schedule(string& patientId, string& apptID) //Constructor
	:patientID(patientID), apptID(apptID)
{
	cout << "Built Schedule for " << patientID << " : " << apptID << endl;
}