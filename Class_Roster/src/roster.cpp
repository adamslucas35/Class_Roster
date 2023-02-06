#include "roster.h"

void Roster::parse(string data)
{
	// p_ = parsed
	// parse string studentid
	size_t endpoint = data.find(",");
	string p_studentID = data.substr(0, endpoint);
	// parse string first name
	size_t startpoint = endpoint + 1;
	endpoint = data.find(",", startpoint);
	string p_firstName = data.substr(startpoint, endpoint - startpoint);
	//parse string last name
	startpoint = endpoint + 1;
	endpoint = data.find(",", startpoint);
	string p_lastName = data.substr(startpoint, endpoint - startpoint);
	//parse string email address
	startpoint = endpoint + 1;
	endpoint = data.find(",", startpoint);
	string p_emailAddress = data.substr(startpoint, endpoint - startpoint);
	//parse int age
	startpoint = endpoint + 1;
	endpoint = data.find(",", startpoint);
	int p_age = stoi(data.substr(startpoint, endpoint - startpoint));
	//parse int daysToCompleteCourese1
	startpoint = endpoint + 1;
	endpoint = data.find(",", startpoint);
	int p_daysToCompleteCourses1 = stoi(data.substr(startpoint, endpoint - startpoint));
	//parse int daysToCompleteCourese2
	startpoint = endpoint + 1;
	endpoint = data.find(",", startpoint);
	int p_daysToCompleteCourses2 =stoi( data.substr(startpoint, endpoint - startpoint));
	//parse int daysToCompleteCourese3
	startpoint = endpoint + 1;
	endpoint = data.find(",", startpoint);
	int p_daysToCompleteCourses3 = stoi(data.substr(startpoint, endpoint - startpoint));
	//parse string degreeProgram
	startpoint = endpoint + 1;
	endpoint = data.find(",", startpoint);
	string p_degreePrgram = data.substr(startpoint, endpoint - startpoint);

	DegreeProgram dp_degreeProgram = DegreeProgram::EMPTY;

	if (p_degreePrgram == "SECURITY")
		dp_degreeProgram = DegreeProgram::SECURITY;
	else if (p_degreePrgram == "NETWORK")
		dp_degreeProgram = DegreeProgram::SECURITY;
	else if (p_degreePrgram == "SOFTWARE")
		dp_degreeProgram = DegreeProgram::SOFTWARE;
	else
		dp_degreeProgram = DegreeProgram::EMPTY;

	Roster::add(p_studentID, p_firstName, p_lastName, p_emailAddress, p_age, p_daysToCompleteCourses1, p_daysToCompleteCourses2, p_daysToCompleteCourses3, dp_degreeProgram);

}

//a_ = add
void Roster::add(string a_studentID, string a_firstName, string a_lastName, string a_emailAddress, int a_age, int a_daysToCompleteCourse1, int a_daysToCompleteCourse2, int a_daysToCompleteCourses3, DegreeProgram a_degreeProgram)
{
	int daysToCompleteCourses[3] = { a_daysToCompleteCourse1, a_daysToCompleteCourse2, a_daysToCompleteCourses3 };

	classRosterArray[++index] = new Student(a_studentID, a_firstName, a_lastName, a_emailAddress, a_age, daysToCompleteCourses, a_degreeProgram);

}
