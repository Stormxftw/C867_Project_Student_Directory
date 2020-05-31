#include "student.h"
#include <iostream>
#include <array>
#include <string>
#include <cstring>
#include "securityStudent.h"
#include <vector>
#include <sstream>


using namespace std;





int main()
{
	Student* classRosterArray[5];

	string studentData[5] = {
							   "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
							   "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
							   "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
							   "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
							   "A5,Joseph,Shaw,jshaw77@wgu.edu,45,13,10,12,SOFTWARE",
	};

	for (int i = 0; i < 5 ; i++)
	{
		string parseLine = studentData[i];
		string id;
		string fn;
		string ln;
		string em;
		int age;
		int days[3];
		string degree;
		
	
		vector<string> result;
		stringstream s_stream(studentData[i]);

		while ((s_stream.good()))
		{
			string substr;
			getline(s_stream, substr, ',');
			result.push_back(substr);
		} 

		id = result[0];
		fn = result[1];
		ln = result[2];
		em = result[3];
		age = stoi(result[4], nullptr, 0);
	/*	days[0] = stoi(result[5], nullptr, 0);
		days[1] = stoi(result[6], nullptr, 0);
		days[2] = stoi(result[7], nullptr, 0);*/
		degree = result[8];

		if(degree == "SECURITY") 
		{
		
			classRosterArray[i] = new SecurityStudent();
			classRosterArray[i]->setStudentId(id);
			classRosterArray[i]->setFirstName(fn);
			classRosterArray[i]->setLastName(ln);
			classRosterArray[i]->setEmailAddress(em);
			classRosterArray[i]->setAge(age);
			/*classRosterArray[i]->setDaysToComplete(days);*/
			classRosterArray[i]->getDegreePlan();
			
		
		}


		//Parse studentInfo
		//Set the degree type from parsing the string to object Degree
		////string studentId
		/////string firstname
		/////string lastname
		/////.......

		//if(Degree == "SECURITY")
		//classRosterArray[i] = new SecurityStudent();
		////else if (studentinfo has NETWORK)
		///classRosterArray[i] = new NetworkStudent();
		///
		/////Call the setters after the object is created
		//////classRosterArray[i].setStudentId(studentId);
	}

	classRosterArray[0]->print();

	//Student* student = new SecurityStudent();

	//Some logic here

	//delete student;

	/*securityStudent A1;

	A1.setStudentId("A1");
	A1.setFirstName("John");
	A1.setLastName("Smith");
	A1.setEmailAddress("Smith,John1989@gmail.com");
	A1.setAge(20);

	A1.print();*/

	

}