#include <iostream>
#include "Patient.h"

// Test all functions contained within the Patient class
string patientTest()
{
	Patient* thePatient = NULL;

	string testAddress = "1111 Program Ct";
	int testAge = 21;
	string testBirthdate = "August";
	string testName = "Test";
	int testPhone = 111;

	// Update thePatient with patientID and patientName
	if (thePatient == NULL)
	{
		thePatient = new Patient(testName);
	}
	// Check that thePatient object has been created
	if (thePatient == NULL)
	{
		return "creation failed";
	}
	// Check that setPatientAddress runs
	if (!thePatient->setPatientAddress(testAddress))
	{
		return "setPatientAddress failed";
	}
	// Check that setPatientAge runs
	if (!thePatient->setPatientAge(testAge))
	{
		return "setPatientAge failed";
	}
	// Check that setPatientBirthdate runs
	if (!thePatient->setPatientBirthdate(testBirthdate))
	{
		return "setPatientBirthdate failed";
	}
	// Check that setPatientPhone runs
	if (!thePatient->setPatientPhone(testPhone))
	{
		return "setPatientPhone failed";
	}
	// Check that object returns patientAddress as testAddress
	if (thePatient->getPatientAddress() != testAddress)
	{
		return "getPatientAddress failed";
	}
	// Check that object returns patientAge as testAge
	if (thePatient->getPatientAge() != testAge)
	{
		return "getPatientAge failed";
	}
	// Check that object returns patientBirthdate as testBirthdate
	if (thePatient->getPatientBirthdate() != testBirthdate)
	{
		return "getPatientBirthdate failed";
	}
	// Check that object returns patientID a string with contents
	if (thePatient->getPatientID().empty())
	{
		return "getPatientID failed";
	}
	// Check that object returns birthdate as testBirthdate
	if (thePatient->getPatientName() != testName)
	{
		return "getPatientName failed";
	}
	// Check that object returns patientPhone as testPhone
	if (thePatient->getPatientPhone() != testPhone)
	{
		return "getPatientPhone failed";
	}
	


	return "All Passed";
}

/*
//Run patientTest as stand-alone
int main()
{
	string result = patientTest();
	cout << result << endl;
}*/