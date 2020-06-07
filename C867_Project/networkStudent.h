#pragma once
#include "student.h"
class NetworkStudent :
	public Student
{

public:
	using Student::Student;

	Degree getDegreePlan();

private:
	
	Degree DegreeType = NETWORKING;

};

