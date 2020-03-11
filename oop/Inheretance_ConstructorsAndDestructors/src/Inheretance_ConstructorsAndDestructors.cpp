//============================================================================
// Name        : Inheretance_ConstructorsAndDestructors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Base {
private:
    int value;
public:
   Base() : value{0} { cout << "Base no-args constructor" << endl; }
   Base(int x) : value{x} { cout << "Base (int) overloaded constructor" << endl; }
   ~Base(){ cout << "Base destructor" << endl; }
};

class Derived : public Base {
    using Base::Base; // will be able to inherit constructor from parent obj
private:
    int doubled_value;
public:
   // Derived() : doubled_value {0} { cout << "Derived no-args constructor " << endl; }
    //Derived(int x) : doubled_value {x*2}  { cout << "Derived (int) overloaded constructor" << endl; }
//    ~Derived() { cout << "Derived destructor " << endl; }
};

int main() {
	//Base b{25};

	Derived d {55};


	return 0;
}