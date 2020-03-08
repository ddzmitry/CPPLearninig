//============================================================================
// Name        : OOPMember_Methods_Constructors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Account.h"

using namespace std;

// Goes to Account.h
//class Account {
//private:
//	double balance;
//public:
//	void set_balance(double bal);
//	double get_balance();
//};

// Goes to Acount.cpp
//void Account::set_balance(double bal){
//	balance = bal;
//}
//double Account::get_balance(){
//	return balance;
//}

int main() {


	Account dzmitry_acc;
	dzmitry_acc.set_balance(10000);
	cout << dzmitry_acc.get_balance() << endl;
	dzmitry_acc.deposite(50000);
	cout << dzmitry_acc.get_balance() << endl;
	dzmitry_acc.withdraw(10000);
	cout << dzmitry_acc.get_balance() << endl;
	return 0;
}
