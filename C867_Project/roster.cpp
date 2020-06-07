#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "roster.h"

using namespace std;


void main()
{
	cout <<
		"SCRIPTING AND PROGRAMMING APPLICATIONS - C867 - Written in C++ - Student ID: #000884242 - Student Name: Joseph Shaw"
		<< endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	Roster* classRoster = new Roster();


	const string studentData[] =
	{
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Joseph,Shaw,jshaw77@wgu.edu,26,106,30,30,SOFTWARE"
	};


	for (int i = 0; i < size(studentData); i++)
	{
		stringstream ss(studentData[i]);
		vector<string> line;

		while (ss.good())
		{
			string substr;
			getline(ss, substr, ',');
			line.push_back(substr);
		}

		Degree degree;
		string StudentDegree = line.at(8);
		if (StudentDegree == "SECURITY")
		{
			degree = SECURITY;
		}
		else if (StudentDegree == "NETWORK")
		{
			degree = NETWORKING;
		}
		else
		{
			degree = SOFTWARE;
		}

		classRoster->Add(line.at(0), line.at(1), line.at(2), line.at(3), stoi(line.at(4)), stoi(line.at(5)),
		                 stoi(line.at(6)), stoi(line.at(7)), degree);
	}


	cout << "All Students in this Class Roster:" << endl;
	classRoster->PrintAll();
	cout << endl;
	cout << endl;
	cout << "All en-valid emails:" << endl;
	classRoster->PrintInvalidEmails();
	cout << endl;
	cout << endl;
	cout << "Average days for each student Roster:" << endl;
	for (int i = 0; i < 5; i++)
	{
		classRoster->PrintDaysInCourse(classRoster->ClassRosterArray[i]->getStudentId());
	}
	cout << endl;
	cout << endl;
	cout << "All students currently in the software program:" << endl;
	classRoster->PrintByDegreeProgram(SOFTWARE);
	cout << endl;
	cout << endl;
	cout << "Removing students from roster:" << endl;
	classRoster->Remove("A3");
	classRoster->Remove("A3");
}

Roster::~Roster()
{
}

void Roster::Add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1,
                 int daysInCourse2, int daysInCourse3, Degree program)
{
	int days[3] = {daysInCourse1, daysInCourse2, daysInCourse3};

	for (int i = 0; i < 5; i++)
	{
		if (ClassRosterArray[i] == nullptr)
		{
			if (program == SECURITY)
			{
				ClassRosterArray[i] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, days,
				                                          program);
			}
			else if (program == NETWORKING)
			{
				ClassRosterArray[i] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, days,
				                                         program);
			}
			else
			{
				ClassRosterArray[i] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, days,
				                                          program);
			}

			break;
		}
	}
}

void Roster::Remove(string studentID)
{
	int i = 0;
	bool found = false;

	while (i < 5)
	{
		if (ClassRosterArray[i] != nullptr && ClassRosterArray[i]->getStudentId() == studentID)
		{
			ClassRosterArray[i] = nullptr;

			found = true;

			break;
		}

		i++;
	}

	if (found == false)
	{
		cout << "Error: Student not found." << endl;
	}
}

void Roster::PrintAll()
{
	for (int i = 0; i < size(ClassRosterArray); i++)
	{
		if (ClassRosterArray[i] != nullptr)
		{
			ClassRosterArray[i]->print();
		}
	}
}

void Roster::PrintDaysInCourse(string studentID)
{
	int i = 0;
	while (i < 5)
	{
		if (ClassRosterArray[i] != nullptr && ClassRosterArray[i]->getStudentId() == studentID)
		{
			int* daysToAvg = ClassRosterArray[i]->getDaysToComplete();
			float sumOfDays = 0.0;

			for (int i = 0; i < 3; i++)
			{
				sumOfDays += daysToAvg[i];
			}

			cout << (sumOfDays / 3) << endl;
		}

		i++;
	}
}

void Roster::PrintInvalidEmails()
{
	int i = 0;

	while (i < 5)
	{
		Student* student = ClassRosterArray[i];
		string email = student->getEmailAddress();
		bool foundError = false;

		if (email.find('@') == string::npos)
		{
			foundError = true;
		}

		if (email.find('.') == string::npos)
		{
			foundError = true;
		}

		if (email.find(' ') != string::npos)
		{
			foundError = true;
		}

		if (foundError == true)
		{
			cout << email << endl;
		}

		i++;
	}
}

void Roster::PrintByDegreeProgram(Degree degree)
{
	int i = 0;

	while (i < 5)
	{
		Student* student = ClassRosterArray[i];

		if (student->getDegreePlan() == degree)
		{
			student->print();
		}

		i++;
	}
}
