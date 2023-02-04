#include <iostream>
#include <string>
#include "roster.h"
#include "degree.h"
#include "student.h"
using namespace std;

int main() {
	cout << "MAIN TEST" << endl;
	test_roster();
	
	int myArr[] = { 1, 2, 3 };
	// Student ID test
	Student adam(35, "Adam", "Lucas", "aluc167@wgu.edu", 22, myArr, DegreeProgram::SOFTWARE);
	
	cout << endl << endl << endl << endl;

	int var = 20; // actual variable declaration
	int* iptr; // pointer variable

	iptr = &var;  // store address of var in pointer variable (if ip changes, var changes? )

	var = 50;
	*iptr = 40;

	//Print the [memory]address stored in iptr pointer variable
	cout << "Value of variable: ";
	cout << iptr << endl;
	cout << &var << endl;

	// access the value at the address available in pointer
	cout << "Value of *ip variable: ";
	cout << *iptr << endl;
	*iptr = 50;
	cout << var << endl;





	

		  

	cin.get();


}
