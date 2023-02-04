#include <iostream>
#include <string>
#include "roster.h"
using namespace std;
void test_roster() {
	std::cout << "test roster\n";

};
const string studentData[] =
{
	"A1, John, Smith, John1989@gmail.com, 20, 30,35,40, SECURITY",
	"A2, Suzan, Erickson, Erickson_1990@gmail.com, 19, 50,30,40, NETWORK",
	"A3, Jack, Napoli, The_lawye19@yahoo.com, 20,40,33, SOFTWARE",
	"A4, Erin, Black, Erin.black@comcast.net, 22, 50,58,40, SECURITY",
	"A5, Adam, Lucas, aluc167@wgu.edu, 22, 7,7,7, SOFTWARE"
};






Roster::Roster()
{
	this->studentID = "unk";
	this->firstName = "unk";
	this->lastName = "unk";
	this->emailAddress = "unk";
	this->age = 0;
	this->daysInCourse1 = 0;
	this->daysInCourse2 = 0;
	this->daysInCourse3 = 0;
	this->degreeProgram = DegreeProgram::EMPTY
}


	Roster::Roster(string c_studentID, string c_firstName, string c_lastName,
		string c_emailAddress, int c_age, int c_daysInCourse1, int c_daysInCourse2,
		int c_daysInCourse3, DegreeProgram c_degreeProgram)
	{
		this->studentID = c_studentID;
		this->firstName = c_firstName; 
		this->lastName = c_lastName;
		this->emailAddress = c_emailAddress;
		this->age = c_age;
		this->daysInCourse1 = c_daysInCourse1;
		this->daysInCourse2 = c_daysInCourse2;
		this->daysInCourse3 = c_daysInCourse3;
		this->degreeProgram = c_degreeProgram;


	}

	Roster *classRosterArray[5]; 

	Roster *parse(string data)
	{
		//Parse student id
		size_t endPoint = data.find(",");
		string studentId = data.substr(0, endPoint);
		//Parse first name
		size_t startPoint = endPoint + 1; //Step next after comma
		endPoint = data.find(",", startPoint); //Select startpoint until reaches comma
		string firstName = data.substr(startPoint, endPoint - startPoint); //ep - sp to calculate length of selection
		//Parse last name
		startPoint = endPoint + 1;
		endPoint = data.find(",", startPoint);
		string lastName = data.substr(startPoint, endPoint - startPoint);
		//Parse email address
		startPoint = endPoint + 1;
		endPoint = data.find(",", startPoint);
		string emailAddress = data.substr(startPoint, endPoint - startPoint);
		//Parse age
		startPoint = endPoint + 1;
		endPoint = data.find(",", startPoint);
		int age = stoi(data.substr(startPoint, endPoint - startPoint));
		//Parse dayInCourses1
		startPoint = endPoint + 1;
		endPoint = data.find(",", startPoint);
		int daysInCourses1 = stoi(data.substr(startPoint, endPoint - startPoint));
		//Parse dayInCourses2
		startPoint = endPoint + 1;
		endPoint = data.find(",", startPoint);
		int daysInCourses2 = stoi(data.substr(startPoint, endPoint - startPoint));
		//Parse dayInCourses3
		startPoint = endPoint + 1;
		endPoint = data.find(",", startPoint);
		int daysInCourses3 = stoi(data.substr(startPoint, endPoint - startPoint));
		//Parse DegreeProgram
		startPoint = endPoint + 1;
		endPoint = data.find(",", startPoint);
		string str_degreeProgram = data.substr(startPoint, endPoint - startPoint);

		DegreeProgram degreeProgram = DegreeProgram::EMPTY;
		if (str_degreeProgram == "SECURITY")
		{
			str_degreeProgram = DegreeProgram::SOFTWARE;
		}
		else if (str_degreeProgram == "SOFTWARE")
		{
			str_degreeProgram = DegreeProgram::SECURITY;
		} else if (str_degreeProgram == "NETWORK")
		{
			str_degreeProgram = DegreeProgram::NETWORK;
		}
		return new Roster(studentId, firstName, lastName, emailAddress, age, daysInCourses1, daysInCourses2, daysInCourses3, degreeProgram);

	

	


};







