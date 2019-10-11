/* Interface - complete */


#include <iostream>
using namespace std;


class I_Printable
{
    friend ostream &operator<<(ostream &os, const I_Printable &obj);
public:
    virtual void print(ostream &os) const = 0;
};

ostream &operator<<(ostream &os, const I_Printable &obj)
{
    obj.print(os);
    return os;
}

class Account : public I_Printable
{
public:
    virtual void withdraw(double amount)
    {
        cout <<"Account::withdraw"<<endl;
    }
    
    virtual void print(ostream &os) const override
    {
        cout << "Account Display" <<endl;
    }
    
    virtual ~Account() {};
};


class Checking : public Account
{
public:
    virtual void withdraw(double amount)
    {
        cout <<"Checking::withdraw"<<endl;
    }
    
    virtual void print(ostream &os) const override
    {
        cout << "Checking Display" <<endl;
    }
    
    virtual ~Checking() {};
};


class Savings : public Account
{
public:
    virtual void withdraw(double amount)
    {
        cout <<"Savings::withdraw"<<endl;
    }
    
    virtual void print(ostream &os) const override
    {
        cout << "Savings Display" <<endl;
    }
    
    virtual ~Savings() {};
};

class Trust : public Account
{
public:
    virtual void withdraw(double amount)
    {
        cout <<"Trust::withdraw"<<endl;
    }
    
    virtual void print(ostream &os) const override
    {
        cout << "Trust Display" <<endl;
    }
    
    virtual ~Trust() {};
};



int main(void)
{
    Account *p1 = new Account(); // Works fine
    cout << *p1 <<endl;
    
    Account *p2 = new Checking(); // Check out in this case
    cout << *p2 <<endl;
    
    //Below cases work fine
    Account a;      
    cout << a <<endl;
    
    Checking c;
    cout << c <<endl;
    
    Savings s;
    cout <<s<<endl;
    
    Trust t;
    cout<<t<<endl;
    
    return 0;
}
