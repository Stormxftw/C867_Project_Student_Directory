
#include "NetworkStudent.h"

NetworkStudent::NetworkStudent() : Student()
{
	this->DegreeType = SECURITY;
}

NetworkStudent::~NetworkStudent()
{

}

Degree NetworkStudent::getDegreePlan() const
{
	return this->DegreeType;
}
