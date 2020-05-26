#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H
#include <iostream>
#include <array>
#include <string>
#include "student.h"
using namespace std;

class networkStudent : Student 
{
private:
	Degree degree;
public:
	Degree getDegreeProgram() const;

};

#endif