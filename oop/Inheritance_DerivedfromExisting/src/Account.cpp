/*
 * Account.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: dzmitrydubarau
 */

#include "Account.h"
#include <iostream>
void Account::deposit(double amount){
	std::cout << "Account deposit called with " << amount << std::endl;
}

void Account::withdraw(double amount){
	std::cout << "Account withdraw called with " << amount << std::endl;
}

Account::Account():
	balance{0},name{"An Account"}{
}

Account::~Account() {
	// TODO Auto-generated destructor stub
}

