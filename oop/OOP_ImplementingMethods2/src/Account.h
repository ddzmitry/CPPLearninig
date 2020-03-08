/*
 * Account.h
 *
 *  Created on: Mar 7, 2020
 *      Author: dzmitrydubarau
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>

class Account {
private:
	double balance;
	std::string acc_name;

public:
	void set_name (std::string);
	std::string get_name();

	void set_balance(double amount);
	double get_balance();


	bool deposit(double amount);
	bool withdraw(double amount);


};

#endif /* ACCOUNT_H_ */
