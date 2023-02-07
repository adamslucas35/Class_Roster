#include "roster.h"

Roster::~Roster()
{
	for (int loop = 0; loop < numOfStudents; ++loop)
	{
		delete classRosterArray[loop];
	}
	cout << "DESTROYED!";
}

void Roster::parse(string data)
{
	// p_ = parsed
	size_t endpoint;
	size_t startpoint = 0;
	// parse string studentid
	endpoint = data.find(",");
	string p_studentID = data.substr(0, endpoint);
	// parse string first name
	startpoint = endpoint + 1;
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
	string p_degreeProgram = data.substr(startpoint, endpoint - startpoint);

	DegreeProgram dp_degreeProgram = DegreeProgram::EMPTY;
	if (p_degreeProgram == "SECURITY")
		dp_degreeProgram = DegreeProgram::SECURITY;
	else if (p_degreeProgram == "NETWORK")
		dp_degreeProgram = DegreeProgram::NETWORK;
	else if (p_degreeProgram == "SOFTWARE")
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

void Roster::remove(string student_id)
{
	bool valid = false; 
	for (int looper = 0; looper <= Roster::index; ++looper)
		if (classRosterArray[looper]->get_studentID() == student_id)
		{
			valid = true;
			if (looper < numOfStudents - 1)
			{
			Student* temp = classRosterArray[looper];
			classRosterArray[looper] = classRosterArray[numOfStudents - 1];
			classRosterArray[numOfStudents - 1] = temp;
		}
			Roster::index--;
		} 
	if (!valid)
			cout << "{ERROR}: Student ID not found.\n";


}

void Roster::printAll()
{
	for (int i = 0; i <=Roster::index; ++i)
	{
		classRosterArray[i]->printStudent();
	}
}

void Roster::printAverageDaysInCourse(string studentID)
{
	for (int i = 0; i < numOfStudents; ++i)
	{
		if (classRosterArray[i]->get_studentID() == studentID)
		{
			int average =
				(classRosterArray[i]->get_daysToCompleteCourses()[0]
					+ // addition
					classRosterArray[i]->get_daysToCompleteCourses()[1]
					+ //addition
					classRosterArray[i]->get_daysToCompleteCourses()[2])
				/ 3; //division
			cout << classRosterArray[i]->get_studentID() << "'s average days in each course: " << average << endl;

		}
	}
}

bool Roster::isValidEmail(string emailToCheck)
{
	int arrobaPosition = -1;
	int periodPosition = -1;
	for (int textLooper = 0; textLooper < emailToCheck.length(); ++textLooper)
	{
		if (isspace(emailToCheck[textLooper]))
		{
			return false;
		}
		else {
		if (emailToCheck[textLooper] == '@')
		{
			arrobaPosition = textLooper;
		}
		if (emailToCheck[textLooper] == '.')
			periodPosition = textLooper;
		else return true;

		}
	}
	if ((arrobaPosition > 0) && (periodPosition > 0))
	{
		return true;
	}
	else if (arrobaPosition == -1 || periodPosition == -1) //not present
	{
		return false;
	}
}

void Roster::printInvalidEmailAddresses()
{
	
	for (int i = 0; i < numOfStudents; ++i)
	{
		string emailCheck = classRosterArray[i]->get_emailAddress();
		
		if (isValidEmail(emailCheck) == false)
		{
			cout << classRosterArray[i]->get_emailAddress() << " is NOT a valid email!\n";
		}

	}
	
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
	
	for (int i = 0; i < numOfStudents; ++i)
	{
		
		if (degreeProgram == DegreeProgram::SECURITY)
		{
			if (classRosterArray[i]->get_degreeProgram() == DegreeProgram::SECURITY)
			classRosterArray[i]->printStudent();
			cout << "SECURITY";
		}
		else if (degreeProgram == DegreeProgram::NETWORK)
		{
			if (classRosterArray[i]->get_degreeProgram() == DegreeProgram::NETWORK)
				classRosterArray[i]->printStudent();
		} 
		else if (degreeProgram == DegreeProgram::SOFTWARE)
		{
			if (classRosterArray[i]->get_degreeProgram() == DegreeProgram::SOFTWARE)
				classRosterArray[i]->printStudent();
		}
	}
}
