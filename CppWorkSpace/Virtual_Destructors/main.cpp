/* Virtual functions - virtual destructors */

#include <iostream>
using namespace std;

//This class uses dynamic polymorphism for the withdraw method
class Account
{
public:
    virtual void withdraw(double amount)
    {
        cout << "Account::withdraw" <<endl;
    }
    
    virtual ~Account()
    {
        cout <<"Account::Destructors"<<endl;
    }
};


class Checking: public  Account
{
public:
    virtual void withdraw(double amount)
    {
        cout << "Checking::withdraw" <<endl;
    }
    
    virtual ~Checking()
    {
        cout <<"Checking::Destructors"<<endl;
    }
};


class Savings: public  Account
{
public:
    virtual void withdraw(double amount)
    {
        cout << "Savings::withdraw" <<endl;
    }
    
    virtual ~Savings()
    {
        cout <<"Savings::Destructors"<<endl;
    }
};

class Trust: public Account
{
public:
    virtual void withdraw(double amount)
    {
        cout << "Trust::withdraw" <<endl;
    }
    
    virtual ~Trust()
    {
        cout <<"Trust:Destructors"<<endl;
    }    
};


int main(void)
{
    cout << "=====================Pointers==========================="<<endl;
    
    Account *p1 = new Account();
    Account *p2 = new Checking();
    Account *p3 = new Savings();
    Account *p4 = new Trust();
    
    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);
    
    cout<<"===========Clean up=============" <<endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    return 0;
}



