
#include <iostream>
#include <array>
#include <string>
#include "student.h"


using namespace std;

//Constructor
Student::Student() {
	studentID = "no id";
	firstName = "no first name";
	lastName = "no last name";
	emailAddress = "no email address";
	age = 1;
	for (int i = 0; i < 3; i++)
	{
		daystoComplete[i] = 1;
	};
	
}

//Accessors
string Student::getStudentId() const {
	return studentID;
}

string Student::getFirstName() const {
	return firstName;
}

string Student::getLastName() const {
	return lastName;
}

string Student::getEmailAddress() const {
	return emailAddress;
}

int Student::getAge() const {
	return age;
}

int Student::getDaysToComplete() const {
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

//void Student::setDegreeProgram(string Degree) {
//	degree = Degree;
//}

void Student::print()
{
	cout << "StudentID: " <<  studentID << endl;
	cout << "First Name" << firstName << endl;
	cout << "Last Name" << lastName << endl;
	cout << "Email address: " << emailAddress << endl;
	cout << "Age: " << age << endl;
}

