#include "student.h"
#include <iostream>
#include <array>
#include <string>
#include <cstring>
#include "securityStudent.h"


using namespace std;





int main()
{
    const string studentData[5] = {
                                "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
                                "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
                                "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
                                "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
                                "A5,Joseph,Shaw,jshaw77@wgu.edu,45,13,10,12,SOFTWARE",
    };



    securityStudent A1;

    A1.setStudentId("A1");
    A1.setFirstName("John");
    A1.setLastName("Smith");
    A1.setEmailAddress("Smith,John1989@gmail.com");
    A1.setAge(20);
    
    A1.print();

}