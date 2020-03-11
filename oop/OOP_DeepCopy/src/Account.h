/*
 * Account.h
 *
 *  Created on: Mar 10, 2020
 *      Author: dzmitrydubarau
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account {
public:
	void depositr(double amount);
	void wthdraw(double amount);
	Account();

	virtual ~Account();
	Account(const Account &other);
};

#endif /* ACCOUNT_H_ */
