#pragma once
#include "student.h"
class NetworkStudent :
	public Student
{
private:
	Degree DegreeType = NETWORKING;
public:
	Student::Student;
	//Accessor
	Degree getDegreePlan() override;

	NetworkStudent(string student_id, string first_name, string last_name, string email_address, int age, int days[3],
	               Degree degree);
};

