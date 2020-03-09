#ifndef _MONEY_MONEY_H
#define _MONEY_MONEY_H


#include <iostream>


class Money {
    int dollars;
    int cents;
    friend std::ostream &operator<<(std::ostream &os,const Money &money);
public:
    Money(int dollars, int cents);
    Money(int total);
};


#endif //_MONEY_MONEY_H
