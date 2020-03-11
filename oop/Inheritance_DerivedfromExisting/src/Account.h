/*
 * Account.h
 *
 *  Created on: Mar 10, 2020
 *      Author: dzmitrydubarau
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <iostream>
class Account {
public:
	double balance;
	std::string name;
	void withdraw(double amount);
	void deposit(double amount);
	Account();
	virtual ~Account();
};

#endif /* ACCOUNT_H_ */
