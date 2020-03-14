//
// Created by Dzmitry Dubarau on 3/12/20.
//

#ifndef C867_ROSTERHW_SECURITYSTUDENT_H
#define C867_ROSTERHW_SECURITYSTUDENT_H


#include "Student.h"

class SecurityStudent : public Student {
private:
    Degree degree = SECURITY;
public:
    virtual Degree get_Degree() override ;
    using  Student::Student;
    virtual void print() override ;

    virtual ~SecurityStudent() = default;
};


#endif //C867_ROSTERHW_SECURITYSTUDENT_H
