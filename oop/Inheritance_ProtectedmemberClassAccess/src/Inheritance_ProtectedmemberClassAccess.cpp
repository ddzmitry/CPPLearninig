//============================================================================
// Name        : Inheritance_DerivedfromExisting.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
using namespace std;
class Base {
    // Note friends of Base have access to all
public:
    int a {0};
    void display() { std::cout << a << ", " << b << ", " << c << endl; } // member method has access to all
protected:
    int b {0};
private:
    int c {0};
};

class Derived: public Base {
    // Note friends of Derived have access to only what Derived has access to

    // a will be public
    // b will be protected
    // c will not be accessible
public:
    void access_base_members() {
        a = 100;    // OK
        b = 200;    // OK
     //   c = 300;    // not accessible
    }

};
int main() {

	cout << "\n=========Base=============" << endl;
	Base base;
	base.a = 100; // OK
	//base.b = 200; // ERR
	//base.c = 300; // ERR

	cout << "\n=========Derived=============" << endl;
	Derived derived ;
	derived.a =100;
	derived.access_base_members(); // OK derived methods are avaliable for b
	derived.display();
	//derived.b =200; //ERR
	//derived.c = 300; //ERR



	return 0;
}
