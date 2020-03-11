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

int main() {

	cout << "\n=========Account=============" << endl;
	Account acc {};
	acc.deposit(2000.0);
	acc.withdraw(500.0);
	cout << endl;

	// Pointer to class
	Account *p_acc {nullptr};
	p_acc =  new Account();
	p_acc->deposit(1000.0);
	p_acc->withdraw(200.0);
	delete p_acc;

	cout << "\n=========Savings Account=============" << endl;

	Savings_Account sac {};
	sac.deposit(2000.0);
	sac.withdraw(500.0);
	cout << sac.name << endl;
	cout << endl;

	cout << endl;

	// Pointer to class
	Savings_Account *s_acc {nullptr};
	s_acc =  new Savings_Account();
	s_acc->deposit(1000.0);
	s_acc->withdraw(200.0);
	delete s_acc;

	return 0;
}
