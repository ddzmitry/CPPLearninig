
#pragma once

class Account {
private:
	double balance;
public:
	void set_balance(double bal);
	void deposite(double amount);
	void withdraw(double amount);
	double get_balance();
};
