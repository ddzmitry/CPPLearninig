//
// Created by Dzmitry Dubarau on 3/11/20.
//

#ifndef C867_ROSTERHW_SOFTWARESTUDENT_H
#define C867_ROSTERHW_SOFTWARESTUDENT_H

#include "degree.h"
#include "Student.h"

class SoftwareStudent : public Student {
private:
    Degree degree = SOFTWARE;
public:
    virtual Degree get_Degree() override ;
    using  Student::Student;
    virtual ~SoftwareStudent() = default;
    virtual void print() override ;
};


#endif //C867_ROSTERHW_SOFTWARESTUDENT_H
