//
// Created by Dzmitry Dubarau on 3/12/20.
//

#ifndef C867_ROSTERHW_ROSTER_H
#define C867_ROSTERHW_ROSTER_H

#include "string"
#include "degree.h"
#include "Student.h"
using namespace std;

class Roster {

private:
    static constexpr const int DEFAULT_ROSTER_SIZE {1000};
    Student *studentsClassRosterArr[DEFAULT_ROSTER_SIZE];
public:
    int student_array_index_counter {0};
    // Add student
    void add(string studentID, string firstName,
            string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);

    // Remove student
    void remove(string studentID);

    // Print all students
    void printAll();

    // Print days in course based of StudentID
    void printAverageDaysInCourse(string studentID);

    // Verifies student email addresses and displays all invalid email addresses to the user
    void printInvalidEmails();

    // Prints out student information for a degree program specified by an enumerated type
    void printByDegreeProgram(Degree degreeProgram);

    Student ** getClassRosterArr();

    ~Roster();

};


#endif //C867_ROSTERHW_ROSTER_H
