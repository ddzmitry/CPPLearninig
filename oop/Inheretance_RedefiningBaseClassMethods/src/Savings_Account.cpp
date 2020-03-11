#include "Savings_Account.h"

Savings_Account::Savings_Account(double balance, double int_rate)
// constructor calls balance for account int_rate stays with savings
    : Account(balance), int_rate{int_rate} {
        
    }

Savings_Account::Savings_Account() 
    : Savings_Account{0.0, 0.0} {
        
    }
    
void Savings_Account::deposit(double amount) {
    amount = amount + (amount * int_rate/100);
    // Deposit from actuall Inherited Class
    Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account) {
    os << "Savings account balance: " << account.balance << " Interest rate: " << account.int_rate;
    return os;
}
