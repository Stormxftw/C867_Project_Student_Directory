#ifndef  DEGREE_H
#define DEGREE_H

#include <string>

using namespace std;


enum Degree
{
	SECURITY,
	NETWORKING,
	SOFTWARE
};

static const string degreeType[3] = { "SECURITY", "NETWORKING", "SOFTWARE" };


#endif;