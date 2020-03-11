//============================================================================
// Name        : Inheritance_BaseClassInitilization.cpp
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

    int get_parent_value(){
       	return value;
       }

   Base() : value {0}  {
            cout << "Base no-args constructor" << endl;
    }
    Base(int x)  : value {x} {
            cout << "Base (int) overloaded constructor" << endl;
    }
   ~Base() {
       cout << "Base destructor" << endl;
    }
};

class Derived : public Base {
private:
    int doubled_value;
public:

    int get_value(){
    	return doubled_value;
    }

    Derived()
	//calling explicitly base class from derived assign double value to the Derived class
        :Base {}, doubled_value {0} {
            cout << "Derived no-args constructor " << endl;
    }
    Derived(int x)
    //calling explicitly base class from derived
        :  Base{x},  doubled_value {x * 2} {
            cout << "Derived (int) constructor" << endl;
    }



    ~Derived() {
        cout << "Derived destructor " << endl;
    }



};

int main() {
	//Derived d;
	Derived d{1000};
	cout << d.get_parent_value() << endl;
	cout << d.get_value() << endl;
	return 0;
}
