#pragma once
#include <string>
#include "degree.h"
using namespace std;
void print(const char* test);
class Student 
{
private:
//VARIABLES
    int studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToCompleteCourses[3];
    DegreeProgram degreeProgram;
public:
    Student();
    Student(int s_studentID, string s_firstName, string s_lastName, string s_emailAddress, int s_age, int* s_daysToCompleteCourses, DegreeProgram s_degreeProgram);
    //SETTERS
    void set_StudentID(int s_studentID);
    void set_firstName(string s_firstName);
    void set_lastName(string s_lastName);
    void set_emailAddress(string s_emailAddress);
    void set_age(int age);
    void set_daysToCompleteCourses(int s_daysToCompleteCourses[]);
    void set_degreeProgram(DegreeProgram s_degreeProgram);

    void print();

  //GETTERS
    int get_StudentID();
    string get_firstName();
    string get_lastName();
    string get_emailAddress();
    int get_age();
    int* get_daysToCompleteCourses();
    DegreeProgram get_degreeProgram();
};


