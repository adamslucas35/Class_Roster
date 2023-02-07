#include <iostream>
#include <string>
#include "roster.h"
#include "degree.h"
#include "student.h"
using namespace std;

void printTitle()
{
	cout << "--------------------------------------------------------------------------------------------------------\n";
	cout << "COURSE TITLE: Scripting and Programming - Applications - C867\n";
	cout << "PROGRAMMING LANGUAGE USED: C++ (C Plus Plus)\n";
	cout << "STUDENT ID: 010241173\n";
	cout << "STUDENT NAME: Adam S Lucas\n";
	cout << "--------------------------------------------------------------------------------------------------------\n";
}


int main() {
	//VARIABLES: 
	const int numOfStudents = 5;
	Student* classRosterArray[numOfStudents];

	// 1. Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
	printTitle();
	// 2. Create an instance of the Roster class called classRoster.
	Roster classRoster;
	// 3.  Add each student to classRoster.
	for (int i = 0; i < numOfStudents; ++i)
	{
		classRoster.parse(studentData[i]);
	}
	// 4. 
	cout << endl;
	classRoster.printAll();
	cout << endl;
	classRoster.printInvalidEmailAddresses();
	cout << endl;
	for (int loop = 0; loop < numOfStudents; ++loop)
	{
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[loop]->get_studentID());
	}
	cout << endl;
	classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
	cout << endl;
	classRoster.remove("A3");
	classRoster.printAll();
	cout << endl;
	classRoster.remove("A3");


	cout << endl;
	classRoster.~Roster();
	
	// Key 'enter' to end program
	cin.get();

}



