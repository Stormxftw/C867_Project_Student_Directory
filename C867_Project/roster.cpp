

#include "roster.h"
#include <string>
#include <sstream>
#include <vector>


using namespace std;


void main() {

}

Roster::~Roster() {

}

void Roster::Add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree program) {
    int days[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };

    for (int i = 0; i < 5; i++) {
        if (ClassRosterArray[i] == nullptr) {
            if (program == SECURITY) {
                ClassRosterArray[i] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, days, program);
            }
            else if (program == NETWORKING) {
                ClassRosterArray[i] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, days, program);
            }
            else {
                ClassRosterArray[i] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, days, program);
            }

            break;
        }
    }
}
