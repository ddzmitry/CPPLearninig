/*
 * SavingsAccount.h
 *
 *  Created on: Mar 10, 2020
 *      Author: dzmitrydubarau
 */

#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_

#include "Account.h"

class Savings_Account: public Account {
public:
	double int_rate;
	Savings_Account();
	virtual ~Savings_Account();
	void withdraw(double amount);
	void deposit(double amount);
};

#endif /* SAVINGSACCOUNT_H_ */
