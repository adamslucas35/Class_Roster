#include <iostream>
#include <string>
#include "student.h"

using namespace std;
// =======^^^== HEADERS ==^^^=========


//CLASS STUDENT INITIALIZATION
Student::Student() {
    this->studentID = " ";
    this->firstName = " ";
    this->lastName = " ";
    this->emailAddress = " ";
    this->age = NULL;
    for (int i = 0; i < 3; i++) {
        this->daysToCompleteCourses[i] = { };
    }
    this->degreeProgram = DegreeProgram::EMPTY;

}
Student::Student(string s_studentID, string s_firstName, string s_lastName, string s_emailAddress, int s_age, int* s_daysToCompleteCourses, DegreeProgram s_degreeProgram) 
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
    void Student::set_studentID(string s_studentID) 
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
string Student::get_studentID() 
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

    void Student::printStudent()
    {
        cout << studentID << "\t";
        cout << "First name: " << firstName << "\t";
        cout << "Last name: " << lastName << "\t";
        cout << "Email address: " << emailAddress << "\t";
        cout << "Student age: " << age << "\t";
        cout << "daysInCourses: {";
        for (int loop = 0; loop < 3; ++loop)
        {
            if (loop < 2)
                cout << daysToCompleteCourses[loop] << ", ";
            else
                cout << daysToCompleteCourses[loop];
        }
        cout << "}\t";
        string str_degreeProgram;
        if (degreeProgram == DegreeProgram::SECURITY)
        {
            str_degreeProgram = "Security";
        } 
        else if (degreeProgram == DegreeProgram::SOFTWARE)
        {
            str_degreeProgram = "Software";
        }
        else if (degreeProgram == DegreeProgram::NETWORK)
        {
            str_degreeProgram = "Network";
        }
        else
        {
            str_degreeProgram = "Empty";
        }
        cout << "Degree Program: " << str_degreeProgram << endl;
        
    }

