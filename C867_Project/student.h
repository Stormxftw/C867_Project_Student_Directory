#pragma once


#include <iostream>
#include <array>
#include <string>
#include "degree.h"
using namespace std;

class Student {
protected:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int* daystoComplete[3];
	Degree DegreeType;

public:
	//default constructor
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daystoComplete[3], Degree degree);

	//destructor
	~Student();

	//Accessors
	string getStudentId();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int* getDaysToComplete();

	//Virtual getDegreeProgram 2.f
	virtual Degree getDegreePlan() = 0;

	//Mutators
	void setStudentId(string id);
	void setFirstName(string FirstName);
	void setLastName(string LastName);
	void setEmailAddress(string EmailAddress);
	void setAge(int Age);
	void setDaysToComplete(int* days[]);

	//Virtual print to print specific data 2.d
	virtual void print();
	



};

