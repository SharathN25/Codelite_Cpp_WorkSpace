#include <iostream>
using namespace std;

class Account
{
public:
    virtual void withdraw(double amount)
    {
        cout << "Account::withdraw" <<endl;
    }
    virtual ~Account() {};
};


class Checking: public  Account
{
public:
    virtual void withdraw(double amount)
    {
        cout << "Checking::withdraw" <<endl;
    }
    
    virtual ~Checking() {};
};


class Savings: public  Account
{
public:
    virtual void withdraw(double amount)
    {
        cout << "Savings::withdraw" <<endl;
    }
    
    virtual ~Savings() {};
};

class Trust: public Account
{
public:
    virtual void withdraw(double amount)
    {
        cout << "Trust::withdraw" <<endl;
    }
    
    virtual ~Trust() {};
};

void do_withdraw(Account &account, double Amount)
{
    account.withdraw(Amount);
}

int main(void)
{
    Account a;
    Account &ref = a;
    ref.withdraw(1000);  //Account::withdraw
    
    Trust t;
    Trust &ref1 = t;
    ref1.withdraw(1000); //Trust::withdraw
    
    Account a1;
    Checking a2;
    Savings a3;
    Trust a4;
    
    do_withdraw(a1,1000);//Acoount::withdraw
    do_withdraw(a2,1000);//Checking::withdraw
    do_withdraw(a3,1000);//Savings::withdraw
    do_withdraw(a4,1000);//Trust::withdraw
    
    return 0;
}