//============================================================================
// Name        : OOP_ImplementingMethods2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Account.h"
using namespace std;

int main() {
	Account dz_acc;
	dz_acc.set_name("Dzmitry's Account");

	dz_acc.set_balance(10000);
	cout << dz_acc.get_balance() << endl;
	dz_acc.deposit(50000);
	cout << boolalpha;
	cout << dz_acc.withdraw(1000) << endl;
	cout <<  dz_acc.get_name() << " "  <<dz_acc.get_balance() << endl;
	return 0;
}
