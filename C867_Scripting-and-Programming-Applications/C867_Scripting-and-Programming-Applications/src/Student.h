//
// Created by Dzmitry Dubarau on 3/11/20.
//
// Include degree
#include "degree.h"
// Include standard string
#include <string>

#ifndef C867_ROSTERHW_STUDENT_H
#define C867_ROSTERHW_STUDENT_H
using namespace std;


// Parent student class
class Student {

private:
    static constexpr const int classes_to_commit{3};
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToCompletion[classes_to_commit];
    Degree degree;

protected:
// constants

public:
    // Empty Constructor
    Student();
    // Full constructor
    Student(string studentID, string firstName, string lastName, string emailAddress, int age,
            int *daysToCompletion, Degree degree);

    // Setters
    void set_studentID(string studentID);
    void set_firstName(string firstName);
    void set_lastName (string lastName);
    void set_emailAddress (string emailAddress);
    void set_age(int age);
    void set_daysToCompletion(int daysToCompletion[classes_to_commit]);
    void set_Degree(Degree degree);


    // Getter Immutable
    string get_studentID() const;
    string get_firstName() const;
    string get_lastName() const;
    string get_emailAddress() const;
    int get_age() const;
    int* get_daysToCompletion();

    // Virtuals
    virtual  Degree get_Degree() = 0;
    virtual void print();
    //    // Destructor
    virtual ~Student();


};


#endif //C867_ROSTERHW_STUDENT_H
