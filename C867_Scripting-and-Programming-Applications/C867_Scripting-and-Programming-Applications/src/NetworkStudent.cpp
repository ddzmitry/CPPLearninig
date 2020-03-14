//
// Created by Dzmitry Dubarau on 3/12/20.
//

#include "NetworkStudent.h"
#include <iostream>
#include "degree.h"
Degree NetworkStudent::get_Degree() {

    return degree;
}

void NetworkStudent::print() {
    Student::print();
}
