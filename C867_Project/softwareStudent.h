#pragma once
#include "student.h"
class SoftwareStudent :
	public Student
{
private:
	Degree DegreeType = SOFTWARE;
public:
	using Student::Student;
	//Accessor
	Degree getDegreePlan() override;

};

