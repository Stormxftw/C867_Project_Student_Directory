#pragma once
#include "student.h"
class SecurityStudent :
    public Student
{
private:
	Degree DegreeType = SECURITY;
	
public:

	using Student::Student;

	Degree getDegreePlan() override;

	
};

