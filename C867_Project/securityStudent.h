#pragma once
#include "student.h"
class SecurityStudent :
    public Student
{
private:
	Degree DegreeType;
	
public:
	
	SecurityStudent();
	~SecurityStudent();
	
	Degree getDegreePlan() const override;

	Student* otherStudent;
};

