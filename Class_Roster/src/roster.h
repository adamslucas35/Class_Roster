#pragma once
#include <string>
#include "degree.h"
#include "roster.cpp"


void test_roster();

class Roster
{
private: 
	string studentID;
	string firstName;
	string lastName; 
	string emailAddress;
	int age;
	int daysInCourse1;
	int daysInCourse2;
	int daysInCourse3;
	DegreeProgram degreeProgram;

public: 

	Roster();

	Roster(string c_studentID, string c_firstName, string c_lastName,
		string c_emailAddress, int c_age, int c_daysInCourse1, int c_daysInCourse2,
		int c_daysInCourse3, DegreeProgram c_degreeProgram);

	void add(string c_studentID, string c_firstName, string c_lastName,
		string c_emailAddress, int c_age, int c_daysInCourse1, int c_daysInCourse2,
		int c_daysInCourse3, DegreeProgram c_degreeProgram);

	Roster* parse(string data);

};

