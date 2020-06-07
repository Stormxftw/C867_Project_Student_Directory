#pragma once
#include "student.h"
class SoftwareStudent :
	public Student
{

public:
	using Student::Student;
	//Accessor
	Degree getDegreePlan();

private:
	Degree DegreeType = SOFTWARE;

};

