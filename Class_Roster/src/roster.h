#include "degree.h"
#include "student.h"
#include <string>


class Roster
{private: 
	const static int numOfStudents = 5;
public:
	bool isValidEmail(string emailToCheck);

int index = -1;
Student* classRosterArray[numOfStudents];

~Roster();

	void parse(string data);

	void add(string a_studentID, string a_firstName, string a_lastName, string a_emailAddress, int a_age, int a_daysToCompleteCourse1, int a_daysToCompleteCourse2, int a_daysToCompleteCourses3, DegreeProgram a_degreeProgram);

	void remove(string student_id);

	void printAll();
	
	void printAverageDaysInCourse(string studentID);

	void printInvalidEmailAddresses();

	void printByDegreeProgram(DegreeProgram degreeProgram);

};



