#include "SoftwareStudent.h"

SoftwareStudent::SoftwareStudent() {
	this->DegreeType = SOFTWARE;
}


Degree SoftwareStudent::getDegreePlan() const
{
	return this->DegreeType;
}
