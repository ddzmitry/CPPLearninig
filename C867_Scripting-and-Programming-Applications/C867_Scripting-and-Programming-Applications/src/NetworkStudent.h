//
// Created by Dzmitry Dubarau on 3/12/20.
//

#ifndef C867_ROSTERHW_NETWORKSTUDENT_H
#define C867_ROSTERHW_NETWORKSTUDENT_H


#include "Student.h"

class NetworkStudent : public Student {
private:
    Degree degree = NETWORK;
public:
    virtual Degree get_Degree() override ;
    using  Student::Student;
    virtual void print() override;

    virtual ~NetworkStudent() = default;
};



#endif //C867_ROSTERHW_NETWORKSTUDENT_H
