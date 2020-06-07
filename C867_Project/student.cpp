

#include <string>
#include "student.h"


using namespace std;


//Accessors
string Student::getStudentId()  {
	return studentID;
}

string Student::getFirstName()  {
	return firstName;
}

string Student::getLastName()  {
	return lastName;
}

string Student::getEmailAddress()  {
	return emailAddress;
}

int Student::getAge()  {
	return age;
}

int* Student::getDaysToComplete()  {
	return daystoComplete[3];
}


//Mutators
void Student::setStudentId(string id) {
	studentID = id;
	
}

void Student::setFirstName(string FirstName) {
	firstName = FirstName;
	
}

void Student::setLastName(string LastName) {
	lastName = LastName;
}

void Student::setEmailAddress(string EmailAddress) {
	emailAddress = EmailAddress;
}

void Student::setAge(int Age) {
	age = Age;
}

void Student::setDaysToComplete(int* days[]) {
	for (int i = 0; i < 3; i++) {
		daystoComplete[i] = days[i];
	}
}


void Student::print()
{
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

	cout << "StudentID: " <<  studentID << endl;
	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
	cout << "Email address: " << emailAddress << endl;
	cout << "Age: " << age << endl;
	cout << "Degree Program: " << degreePrint << endl;
}

Student::~Student() {

}