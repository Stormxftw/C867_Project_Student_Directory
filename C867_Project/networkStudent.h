#pragma once
#include "student.h"
class NetworkStudent :
	public Student
{
private:
	Degree DegreeType;
public:
	NetworkStudent();
	~NetworkStudent();

	Degree getDegreePlan() const override;
};

