//============================================================================
// Name        : Inheritance_CopyConstructorAssignmentOperator.cpp
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
   Base()
        : value {0}  {
            cout << "Base no-args constructor" << endl;
    }
    Base(int x)
        : value {x} {
            cout << "int Base constructor" << endl;
    }
    Base(const Base &other)
        : value {other.value} {
         cout << "Base copy constructor" << endl;
    }

    // Copy constructor
    Base &operator=(const Base &rhs)  {
    cout << "Base operator=" << endl;
        if (this == &rhs)
            return *this;
        value = rhs.value;
        return *this;
    }

   ~Base(){ cout << "Base destructor" << endl; }
};

class Derived : public Base {
private:
    int doubled_value;
public:
    Derived() :
        Base {}  {
            cout << "Derived no-args constructor " << endl;
    }
    Derived(int x)
        : Base{x} , doubled_value {x * 2} {
            cout << "int Derived constructor" << endl;
    }

    //Copy constructor
    Derived(const Derived &other)
        : Base(other), doubled_value {other.doubled_value} {
         cout << "Derived copy constructor" << endl;
    }

        // Copy assignment operator
    Derived &operator=(const Derived &rhs) {
            cout << "Derived Copy operator=" << endl;
        if (this == &rhs)
            return *this;
        Base::operator=(rhs);
        doubled_value = rhs.doubled_value;
        return *this;
    }
   ~Derived(){ cout << "Derived destructor " << endl; }
};
int main() {
	//Base b {100};
	//Base b2 {b}
	Derived d {200}; // Overloaded constructor
	Derived d2 {d}; // Copy constructor
	d2 = d; // Copy assignment

	return 0;
}
