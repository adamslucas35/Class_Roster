#include <iostream>
#include <string>
#include "roster.h"
#include "degree.h"
#include "student.h"
using namespace std;

int main() {
	cout << "MAIN TEST" << endl;
	int myArr[] = { 1, 2, 3 };
	// Student ID test
	Student adam("A6", "Adam", "Lucas", "aluc167@wgu.edu", 22, myArr, DegreeProgram::SOFTWARE);
	adam.print();
	
	cout << endl << endl << endl << endl;



	//Roster classRoster;
	//for (int i = 0; i < 5; ++i)
	//{
	//	
	//}











	

		  

	cin.get();


}
