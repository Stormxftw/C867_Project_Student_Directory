#pragma once
#include "student.h"
class SoftwareStudent :
	public Student
{
private:
	Degree DegreeType;
public:
	SoftwareStudent();
	~SoftwareStudent();

	Degree getDegreePlan() const override;
};

