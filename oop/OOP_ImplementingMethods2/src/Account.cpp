/*
 * Account.cpp
 *
 *  Created on: Mar 7, 2020
 *      Author: dzmitrydubarau
 */

#include "Account.h"
// Balance
double Account::get_balance(){
	return balance;
}

void Account::set_balance(double bal){
	balance = bal;
}


// Money stuff
bool Account::deposit(double amount){

	if(balance += amount){
		return true;
	}
	else {
		return false;
	}
}

bool Account::withdraw(double amount){

	return (balance -= amount) >= 0 ? true : false;
}
// Name stuff

void Account::set_name (std::string value){
	acc_name =value;
};
std::string Account::get_name(){

	return acc_name;
};
