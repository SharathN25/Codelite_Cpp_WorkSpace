#ifndef _SAVINGS_ACCOUNT_H
#define _SAVINGS_ACCOUNT_H
#include "Account.h"


class Savings_Account : public Account
{
public:
    double int_rate;
    Savings_Account();
    ~Savings_Account();
    void deposit(double ammount);
    void withdraw(double ammount);
    
};

#endif