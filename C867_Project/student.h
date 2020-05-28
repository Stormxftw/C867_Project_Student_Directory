#ifndef STUDENT_H
#define STUDENT_H


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
	int daystoComplete[3];
	

public:
	//default constructor
	Student();

	//destructor
	~Student();


	//Accessors
	string getStudentId() const;
	string getFirstName() const;
	string getLastName() const;
	string getEmailAddress() const;
	int getAge() const;
	int getDaysToComplete() const;

	//Virtual getDegreeProgram 2.f
	virtual Degree getDegreePlan() const = 0; // This caused the Student class to become an Abstract Class

	//Mutators
	void setStudentId(string id);
	void setFirstName(string FirstName);
	void setLastName(string LastName);
	void setEmailAddress(string EmailAddress);
	void setAge(int Age);
	void setDaysToComplete(const int* daystoComplete);
	//Virtual print to print specific data 2.d
	virtual void print();
	



};

#endif 