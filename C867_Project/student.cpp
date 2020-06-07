#include <string>
#include "student.h"


using namespace std;


//Accessors
string Student::getStudentId()
{
	return studentID;
}

string Student::getFirstName()
{
	return firstName;
}

string Student::getLastName()
{
	return lastName;
}

string Student::getEmailAddress()
{
	return emailAddress;
}

int Student::getAge()
{
	return age;
}

int* Student::getDaysToComplete()
{
	return daystoComplete;
}


//Mutators
void Student::setStudentId(string id)
{
	studentID = id;
}

void Student::setFirstName(string FirstName)
{
	firstName = FirstName;
}

void Student::setLastName(string LastName)
{
	lastName = LastName;
}

void Student::setEmailAddress(string EmailAddress)
{
	emailAddress = EmailAddress;
}

void Student::setAge(int Age)
{
	age = Age;
}

void Student::setDaysToComplete(int days[])
{
	for (int i = 0; i < 3; i++)
	{
		daystoComplete[i] = days[i];
	}
}

void Student::SetDegreeProgram(Degree degree)
{
	DegreeType = degree;
}


void Student::print()
{
	int* days = getDaysToComplete();
	string degreePrint;
	if (this->DegreeType == SECURITY)
	{
		degreePrint = "Security";
	}
	if (this->DegreeType == NETWORKING)
	{
		degreePrint = "Networking";
	}
	if (this->DegreeType == SOFTWARE)
	{
		degreePrint = "Software";
	}

	cout << "StudentID:    " << getStudentId() << "	First Name:    " << getFirstName() << "	Last Name:    " <<
		getLastName() << "	Email address:    " << getEmailAddress() << "	Age:    " << getAge() << "	Days in course:    "
		<< days[0] << "," << days[1] << "," << days[2] << "	Degree Program:    " << degreePrint << endl;
}

Student::Student(string newStudentID, string newFirstName, string newLastName, string newEmail, int newAge,
                 int newDaysToCompleteCourse[3], Degree newDegree)
{
	setStudentId(newStudentID);
	setFirstName(newFirstName);
	setLastName(newLastName);
	setEmailAddress(newEmail);
	setAge(newAge);
	setDaysToComplete(newDaysToCompleteCourse);
	SetDegreeProgram(newDegree);
}

Student::~Student()
{
}
