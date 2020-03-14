#ifndef STUDENT_H
#define STUDENT_H


#include <iostream>
using namespace std;

class Student {

public:

	//Mutators
	void setStudentId(int id);
	void setFirstName(string FirstName);
	void setLastName(string LastName);
	void setEmailAddress(string EmailAddress);
	void setAge(int Age);
	void setDaysToComplete(int DaysToComplete);

	//Accessors
	int getStudentId() const;
	string getFirstName() const;
	string getLastName() const;
	string getEmailAddress() const;
	int getAge() const;

private:
	int studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysToComplete{};

};


#endif // !