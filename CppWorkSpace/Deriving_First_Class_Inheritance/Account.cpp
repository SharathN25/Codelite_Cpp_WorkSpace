#include "Account.h"
#include <iostream>
using namespace std;

Account::Account()
:balance{0.0}, name{"An Account"}
{
    
}

Account::~Account()
{
    
}

void Account::deposit(double ammount)
{
    cout << "Account deposit called with " << ammount << endl;
}

void Account::withdraw(double ammount)
{
    cout << "Account withdraw called with " << ammount << endl;
}