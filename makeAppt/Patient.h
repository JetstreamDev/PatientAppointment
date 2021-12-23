#pragma once
#include <iostream>

using std::string; using std::cout; using std::endl;

class Patient
{
public:
	Patient(string& name); // Constructor
	~Patient();			   // Destructor

	bool setPatientAddress(string& address);
	bool setPatientAge(int& age);
	bool setPatientBirthdate(string& birthday);
	bool setPatientPhone(int& phone);
	string getPatientAddress();
	int getPatientAge();
	string getPatientBirthdate();
	string getPatientID();
	string getPatientName();
	int getPatientPhone();

private:
	string patientAddress;
	int patientAge;
	string birthdate;
	string patientID;
	string patientName;
	int patientPhone;
};

