#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H
#include <iostream>
#include <array>
#include <string>
#include "student.h"
using namespace std;

class securityStudent : public Student
 {
private:
	Degree degree;
public:
	
	Degree getDegreeProgram() const;

	void Student() {
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

	securityStudent();
	securityStudent(string studentID, string firstName, string lastName, string emailaddress, int age, int daystocomplete[3], Degree);
	~securityStudent();


};

#endif