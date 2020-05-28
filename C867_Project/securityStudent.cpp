#include "SecurityStudent.h"


SecurityStudent::SecurityStudent() : Student()
{
	this->DegreeType = SECURITY;
}

SecurityStudent::~SecurityStudent()
{
	delete otherStudent;
}

Degree SecurityStudent::getDegreePlan() const
{
	return this->DegreeType;
}
