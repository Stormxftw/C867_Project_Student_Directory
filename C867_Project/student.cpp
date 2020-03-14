
#include <iostream>
#include "student.h"

using namespace std;

//Mutators
void Student::setStudentId(int id) {
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

//Accessors
int Student::getStudentId() const {
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