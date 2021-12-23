#include "Patient.h"
#include <iostream>

using std::string; using std::cout; using std::endl;

// Constructor
Patient::Patient(string& name)
	// Assign default values
	:patientAddress(""), patientAge(0), birthdate(""), patientID(""), patientName(name), patientPhone(0)
{
	// Give Patient a generated ID
	patientID = "001";
	// Verify ID
	cout << "Built Patient " << patientID << " - " << patientName << endl;
}
// Destructor
Patient::~Patient()
{
	// Verify destruction
	cout << "Destroyed " << patientID << endl;
}
// Singular pull of patientAddress
string Patient::getPatientAddress()
{
	return patientAddress;
}
// Singular pull of patientAge
int Patient::getPatientAge()
{
	return patientAge;
}
// Singular pull of birthdate
string Patient::getPatientBirthdate()
{
	return birthdate;
}
// Singular pull of patientID
string Patient::getPatientID()
{
	return patientID;
}
// Singular pull of patientName
string Patient::getPatientName()
{
	return patientName;
}
// Singular pull of patientPhone
int Patient::getPatientPhone()
{
	return patientPhone;
}
// Singular set of patientAddress
// param string& address - reference to address value
// return 1 - success
bool Patient::setPatientAddress(string& address)
{
	patientAddress = address;
	return 1;
}
// Singular set of patientAge
// param int& age - reference to age of patient
// return 1 - success
bool Patient::setPatientAge(int& age)
{
	patientAge = age;
	return 1;
}
// Singular set of birthdate
// param string& birthday - reference to birthdate of patient
// return 1 - success
bool Patient::setPatientBirthdate(string& birthday)
{
	birthdate = birthday;
	return 1;
}
// Singular set of patientPhone
// param int& phone - reference to phone number of patient
// return 1 - success
bool Patient::setPatientPhone(int& phone)
{
	patientPhone = phone;
	return 1;
}

