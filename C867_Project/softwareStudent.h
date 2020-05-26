#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H
#include <iostream>
#include <array>
#include <string>
#include "student.h"
using namespace std;

class softwareStudent : Student
{
private:
	Degree degree;
public:
	Degree getDegreeProgram() const;

};

#endif