#pragma once
#include "student.h"
class NetworkStudent :
	public Student
{
private:
	Degree DegreeType;
public:
	//Default constructor
	NetworkStudent();

	//Deconstructor
	~NetworkStudent();


	//Accessor
	Degree getDegreePlan() const override;

	//Mutators
	void setDegreePlan(Degree degree);
	void print();
};

