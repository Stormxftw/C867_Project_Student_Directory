#include "SecurityStudent.h"


SecurityStudent::SecurityStudent() : Student()
{
	this->DegreeType = SECURITY;
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
	cout << "StudentID: " << studentID << endl;
	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
	cout << "Email address: " << emailAddress << endl;
	cout << "Age: " << age << endl;
	cout << "Degree program: SECURITY" << endl;
}

void SecurityStudent::setDegreePlan(Degree degree)
{
	this->DegreeType = SECURITY;
}
