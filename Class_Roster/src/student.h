#pragma once
#include <string>
#include "degree.h"
using namespace std;

const string studentData[] =
{
    "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmail.com,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawye19@yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Adam,Lucas,aluc167@wgu.edu,22,7,7,7,SOFTWARE"
};

class Student 
{
private:
//VARIABLES
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToCompleteCourses[3];
    DegreeProgram degreeProgram;
public:
    Student();
    Student(string s_studentID, string s_firstName, string s_lastName, string s_emailAddress, int s_age, int* s_daysToCompleteCourses, DegreeProgram s_degreeProgram);
    //SETTERS
    void set_StudentID(string  s_studentID);
    void set_firstName(string s_firstName);
    void set_lastName(string s_lastName);
    void set_emailAddress(string s_emailAddress);
    void set_age(int age);
    void set_daysToCompleteCourses(int s_daysToCompleteCourses[]);
    void set_degreeProgram(DegreeProgram s_degreeProgram);

    void print();

  //GETTERS
    string get_StudentID();
    string get_firstName();
    string get_lastName();
    string get_emailAddress();
    int get_age();
    int* get_daysToCompleteCourses();
    DegreeProgram get_degreeProgram();
};


