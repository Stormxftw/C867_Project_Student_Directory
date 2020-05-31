
#include "NetworkStudent.h"

NetworkStudent::NetworkStudent() : Student()
{
	this->DegreeType = NETWORKING;
}

NetworkStudent::~NetworkStudent()
{

}

//Accessor
Degree NetworkStudent::getDegreePlan() const
{
	return this->DegreeType;
}

//Mutators
void NetworkStudent::print()
{
	cout << "StudentID: " << studentID << endl;
	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
	cout << "Email address: " << emailAddress << endl;
	cout << "Age: " << age << endl;
	cout << "Degree program: NETWORKING" << endl;
}

void NetworkStudent::setDegreePlan(Degree degree)
{
	this->DegreeType = NETWORKING;
}
