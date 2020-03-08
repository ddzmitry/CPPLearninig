#include "Account.h"

void Account::set_balance(double bal){
	balance = bal;
}
double Account::get_balance(){
	return balance;
}

void Account::deposite(double amount){
	balance += amount;
};
void Account::withdraw(double amount){
	balance -= amount;
};

