#include <iostream>
#include <string>
#include "roster.h"
#include "degree.h"
#include "student.h"
using namespace std;

int main() {
	//cout << "MAIN TEST" << endl;
	//int myArr[] = { 1, 2, 3 };
	//// Student ID test
	//Student adam("A6", "Adam", "Lucas", "aluc167@wgu.edu", 22, myArr, DegreeProgram::SOFTWARE);
	//adam.printStudent();
	//
	//cout << endl << endl << endl << endl;

	const int numOfStudents = 5;

	Roster classRoster;
	for (int i = 0; i < numOfStudents; ++i)
	{
		classRoster.parse(studentData[i]);
	}
		classRoster.printAll();
		classRoster.printAverageDaysInCourse("A1");
		classRoster.printInvalidEmailAddresses();


	cin.get();


}
