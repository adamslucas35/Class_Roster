#include <iostream>
#include <string>
#include "student.h"

using namespace std;
// =======^^^== HEADERS ==^^^=========
void print(const char* test) {
    cout << "this is a test\n";
    cout <<  test;
}    

//CLASS STUDENT INITIALIZATION
Student::Student() {
    this->studentID = NULL;
    this->firstName = " ";
    this->lastName = " ";
    this->emailAddress = " ";
    this->age = NULL;
    for (int i = 0; i < 3; i++) {
        this->daysToCompleteCourses[i] = { };
    }
    this->degreeProgram = DegreeProgram::EMPTY;

}
Student::Student(int s_studentID, string s_firstName, string s_lastName, string s_emailAddress, int s_age, int* s_daysToCompleteCourses, DegreeProgram s_degreeProgram) 
{
    studentID = s_studentID;
    firstName = s_firstName;
    lastName = s_lastName;
    emailAddress = s_emailAddress;
    age = s_age;
    for (int i = 0; i < 3; i++) {
        daysToCompleteCourses[i] = s_daysToCompleteCourses[i];
    };
    degreeProgram = s_degreeProgram;
}
//SETTERS
    void Student::set_StudentID(int s_studentID) 
    {
    this->studentID = s_studentID;
}
    void Student::set_firstName(string s_firstName) 
    {
        this->firstName = s_firstName;
    }
    void Student::set_lastName(string s_lastName) 
    {
        this->lastName = s_lastName;
    }
    void Student::set_emailAddress(string s_emailAddress)
    {
        this->emailAddress = s_emailAddress;
    }
    void Student::set_age(int s_age)
    {
        this->age = s_age;
    }
    void Student::set_daysToCompleteCourses(int* s_daysToCompleteCourses)
    {
        for (int i = 0; i < 3; i++)
        {
            this->daysToCompleteCourses[i] = s_daysToCompleteCourses[i];
        }
    }
    void Student::set_degreeProgram(DegreeProgram s_degreeProgram)
    {
        degreeProgram = s_degreeProgram;
    }

  
    //GETTERS
int Student::get_StudentID() 
{
    return this->studentID;
}
string Student::get_firstName() 
{
    return this->firstName;
}
string Student::get_lastName()
{
    return this->lastName;
}
string Student::get_emailAddress() 
{
    return this->emailAddress;
}
int Student::get_age()
{
    return this->age;
}
int* Student::get_daysToCompleteCourses()
{
        return this->daysToCompleteCourses;
}
DegreeProgram Student::get_degreeProgram() {
    return degreeProgram;
}

    void Student::print()
    {
        cout << "Student ID: " << studentID << endl;
        cout << "First name: " << firstName << endl;
        cout << "Last name: " << lastName << endl;
        cout << "Email address: " << emailAddress << endl;
        cout << "Student age: " << age << endl;
        cout << "Days to complete 3 courses respectively: ";
        for (int loop = 0; loop < 3; ++loop)
        {
            cout << daysToCompleteCourses[loop] << " ";
        }
    }

