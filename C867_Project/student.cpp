
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