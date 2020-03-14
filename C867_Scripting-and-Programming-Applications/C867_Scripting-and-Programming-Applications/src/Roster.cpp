//============================================================================
// Name        : C867_Scripting-and-Programming-Applications.cpp
// Author      : Dzmitry Dubarau
// Version     : V1
// Description : C867_Roster_HW
// Run as : g++ -std=c++14
//============================================================================

#include <iostream>
#include<sstream>
#include <utility>
#include <vector>
#include "cmath"
// Include Roster
#include "Roster.h"
// For email Check
#include<regex>

// Include our students;
#include "NetworkStudent.h"
#include "SoftwareStudent.h"
#include "SecurityStudent.h"

using namespace std;

void Roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age,
                 int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) {


    // Make sure we dont put too many students in array , if so we need to increase array memory
    if (student_array_index_counter >= DEFAULT_ROSTER_SIZE) {
        cout << "Please increase DEFAULT_ROSTER_SIZE to prevent data loss" << endl;
        exit(EXIT_FAILURE);
    }

    int arr[3] = {daysInCourse1, daysInCourse2, daysInCourse3};
    if (degree == SOFTWARE) {
        studentsClassRosterArr[student_array_index_counter] = new SoftwareStudent
                (studentID, firstName, lastName, emailAddress, age, arr, degree);
    } else if (degree == NETWORK) {
        studentsClassRosterArr[student_array_index_counter] = new NetworkStudent
                (std::move(studentID), std::move(firstName), std::move(lastName), std::move(emailAddress), age, arr,
                 degree);
    } else {
        studentsClassRosterArr[student_array_index_counter] = new SecurityStudent
                (std::move(studentID), std::move(firstName), std::move(lastName), std::move(emailAddress), age, arr,
                 degree);
    }

    // increase index to track inputs
    student_array_index_counter += 1;


}

void Roster::remove(std::string studentID) {

    bool isFound{false};

    for (std::size_t i = 0; i < student_array_index_counter; i++) {
        if (studentsClassRosterArr[i] != nullptr && (*studentsClassRosterArr[i]).get_studentID() == studentID) {;
            isFound = true;
            studentsClassRosterArr[i] = nullptr;
            cout << "STUDENT WITH ID " << studentID << " WAS REMOVED";

        }

    }

    if (isFound == false) {
        cout << "ERROR! PLEASE CHECK YOUR ROSTER STUDENT WITH ID " << studentID << " DOES NOT EXISTS!";

    }
    cout << endl;

}

void Roster::printAll() {
    // Based of the index counter we know the values
    for (std::size_t i = 0; i < student_array_index_counter; ++i) {

        (*studentsClassRosterArr[i]).print();

        cout << endl;
    }
}

void Roster::printAverageDaysInCourse(std::string studentID) {

    int totalSum = {0};
    double avgForStudent = {0.0};
    bool isFound{false};

    // Locate Student if exists;
    for (std::size_t i = 0; i < student_array_index_counter; ++i) {

        if ((*studentsClassRosterArr[i]).get_studentID() == studentID) {
            // Get Pointer for days
            int *daysToCompletion = (*studentsClassRosterArr[i]).get_daysToCompletion();

            for (int count = 0; count < 3; count++) {
                //cout << *(daysToCompletion++) << endl;
                // Add to sum
                totalSum += *(daysToCompletion++);
            }

            avgForStudent = totalSum / static_cast<double>(3);
            cout << "For Student average for courses is: " << avgForStudent;
            isFound = true;

        }

    }

    if (!isFound) {
        cout << "ERROR! PLEASE CHECK YOUR ROSTER STUDENT WITH ID " << studentID << " DOES NOT EXISTS!";

    }
    cout << endl;


}

void Roster::printInvalidEmails() {
    // Email Pattern
    const regex email_pattern(R"((\w+)(\.|_)?(\w*)@(\w+)(\.(\w+))+)");
//    return
    for (std::size_t i = 0; i < student_array_index_counter; ++i) {

        if (!regex_match((*studentsClassRosterArr[i]).get_emailAddress(), email_pattern)) {

            cout << "Student with ID " << (*studentsClassRosterArr[i]).get_studentID() << " HAS INVALID EMAIL "
                 << (*studentsClassRosterArr[i]).get_emailAddress() << endl;
        }

    }

}

void Roster::printByDegreeProgram(Degree degreeProgram) {

    for (std::size_t i = 0; i < student_array_index_counter; ++i) {

        if ((*studentsClassRosterArr[i]).get_Degree() == degreeProgram) {

            (*studentsClassRosterArr[i]).print();

            }

        }

    }


Roster::~Roster() {

}

Student **Roster::getClassRosterArr() {
    return this->studentsClassRosterArr;
}


// Parsing functions for string data
Degree define_student_degree(string degree_value) {

    if (degree_value == "SOFTWARE") {
        return SOFTWARE;
    } else if (degree_value == "NETWORK") {
        return NETWORK;
    } else {
        return SECURITY;
    }
}


int main() {
    cout << "================================================================\n"
            "Course title: Scripting and Programming - Applications – C867 \n"
            "Language: C++\n"
            "Student ID: #001170310\n"
            "Student name: Dzmitry Dubarau\n"
            "================================================================\n" << endl;
    // INIT Roster
    Roster classRoster;


    const string studentData[] =
            {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
             "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
             "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
             "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
             "A5,Dzmitry,Dubarau,ddubara@wgu.edu,27,5,6,10,SOFTWARE"
            };

    for (auto my_str : studentData) {

        std::vector<string> result;
        stringstream s_stream(my_str); //create string stream from the string
        while (s_stream.good()) {
            string substr;
            getline(s_stream, substr, ','); //get first string delimited by comma
            result.push_back(substr);
        }

        if (result.size() == 9) {
            classRoster.add(result[0], result[1],
                            result[2], result[3], stoi(result[4]),
                            stoi(result[5]), stoi(result[6]),
                            stoi(result[7]), define_student_degree(result[8]));
        } else {
            cout << "SOMETHING WENT WRONG WITH STRING INPUT CHECK FIELDS";
        }

    }
    // PRINT ALL STUDENTS
    classRoster.printAll();
    // AVG daye per course
    classRoster.printAverageDaysInCourse("A5");
    // invalid emails
    classRoster.printInvalidEmails();
    // Print by degree
    classRoster.printByDegreeProgram(SOFTWARE);

    classRoster.remove("A3");
    classRoster.remove("A3");
    return 0;
}


