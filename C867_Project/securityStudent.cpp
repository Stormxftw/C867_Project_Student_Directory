#include "SecurityStudent.h"


SecurityStudent::SecurityStudent() : Student()
{
	
}

SecurityStudent::~SecurityStudent()
{
	
}

//Accessors
Degree SecurityStudent::getDegreePlan() const
{
	return DegreeType;
}

//Mutators
void SecurityStudent::print()
{
	cout << "SECURITY" << endl;
}

void SecurityStudent::setDegreePlan(Degree degree)
{
	this->DegreeType = SECURITY;
}
