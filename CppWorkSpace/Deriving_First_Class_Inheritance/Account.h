#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <string>

class Account
{
public:
    double balance;
    std::string name;
    void deposit(double ammount);
    void withdraw(double ammount);
    Account();
    ~Account();
    
};

#endif