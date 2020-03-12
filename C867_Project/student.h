#ifndef STUDENT_H
#define STUDENT_H


#include <iostream>
using namespace std;

class Student {

public:
	void getStudentId(int id);

private:
	int studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysToComplete{};

};


#endif // !