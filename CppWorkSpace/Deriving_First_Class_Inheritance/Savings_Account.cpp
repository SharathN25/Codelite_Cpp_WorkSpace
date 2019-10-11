#include "Savings_Account.h"
#include <iostream>
using namespace std;

Savings_Account::Savings_Account()
:int_rate{3.0}
{
    
}

Savings_Account::~Savings_Account()
{
    
}

void Savings_Account::deposit(double ammount)
{
    cout << "Savings Account deposit called with " << ammount << endl;
}

void Savings_Account::withdraw(double ammount)
{
    cout << "Savings Account withdraw called with " << ammount << endl;
}