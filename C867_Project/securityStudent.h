#pragma once
#include "student.h"
class SecurityStudent :
    public Student
{
private:
	Degree DegreeType;
	
public:
	//Default constructor
	SecurityStudent();
	//Desctructor
	~SecurityStudent();
	
	//Accessor
	Degree getDegreePlan() const override;

	//Mutators
	void setDegreePlan(Degree degree);
	void print();

	
};

