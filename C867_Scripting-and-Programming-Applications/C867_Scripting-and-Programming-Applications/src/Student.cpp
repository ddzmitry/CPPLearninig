//
// Created by Dzmitry Dubarau on 3/11/20.
//

#include <iostream>
#include "Student.h"
#include "degree.h"
#include <array>
using namespace std;
// Empty constructor
Student::Student(){}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age,int daysToCompletion[3],Degree degree_provided){

    // SET THE VALUES
    set_studentID(studentID);
    set_firstName(firstName);
    set_lastName(lastName);
    set_emailAddress(emailAddress);
    set_age(age);
    set_daysToCompletion(daysToCompletion);
    set_Degree(degree_provided);
}

// Setters
void Student::set_studentID(string studentID) {
    this->studentID=studentID;
}

void Student::set_firstName(string firstName) {
    this->firstName=firstName;
}

void Student::set_lastName(string lastName) {
    this->lastName = lastName;
}

void Student::set_emailAddress(string emailAddress) {
    this->emailAddress = emailAddress;
}

void Student::set_age(int age) {
        this->age = age;
}

void Student::set_daysToCompletion(int *daysToCompletion) {
    for (int i = 0; i < classes_to_commit; ++i) {
        this->daysToCompletion[i] = daysToCompletion[i];
    }

}

void Student::set_Degree(Degree degree) {
    this->degree = degree;
}

string Student::get_studentID() const {
    return this->studentID;
}

string Student::get_firstName() const {
    return this->firstName;
}

string Student::get_lastName() const {
    return this->lastName;
}

string Student::get_emailAddress() const {
    return this->emailAddress;
}

int Student::get_age() const {
    return this->age;
}

int* Student::get_daysToCompletion()  {
    return this->daysToCompletion;
}

void Student::print(){

	cout << "\tStudent ID: " << get_studentID()   << endl;
    cout << "\tFirst Name: " << get_firstName() << endl;
    cout << "\tLast Name: " << get_lastName() << endl;
    cout << "\tAge : " << get_age() << endl;
    auto* days_aggregator = new string(" { ");
    for (size_t i{0}; i < classes_to_commit; ++i){

        // Convert int to string
        auto* place_holder = new string(to_string(get_daysToCompletion()[i]));
        // append to poineter
        i == classes_to_commit -1 ?  days_aggregator->append(*place_holder += " ")  : days_aggregator->append(*place_holder += " , ");
        delete place_holder;
    }
    days_aggregator->append("}");
    cout << "daysInCourse: " << *days_aggregator << endl;
    // Print degree since it's virtual function it will take child class params
    cout << "Degree Program: " ;
    switch (get_Degree()){
        case 0: cout << "Security \n";
        break;
        case 1: cout << "Network \n";
        break;
        case 2: cout << "Software \n";
        break;
        default:
            break;
    }
    delete days_aggregator;
}

  Student::~Student() {

}

