/* Interfaces - start  , this is just demo of problem 
 * where we are not creating virtual function for << operator overloading,
 * instead we careate a separate printable interface to fix problem in this program ,
 * ref : Interface-Complete */

#include <iostream>
using namespace std;

class Account
{
    friend ostream &operator<<(ostream &os, const Account &acc);
public:
    virtual void withdraw(double amount)
    {
        cout <<"Account::withdraw"<<endl;
    }
    
    virtual ~Account() {};
};

ostream &operator<<(ostream &os, const Account &acc)
{
    os << "Account display";
    return os;

}

class Checking : public Account
{
    friend ostream &operator<<(ostream &os,const Checking &acc);
public:
    virtual void withdraw(double amount)
    {
        cout <<"Checking::withdraw"<<endl;
    }
    
    virtual ~Checking() {};
};

ostream &operator<<(ostream &os,const Checking &acc)
{
    os << "Checking Display";
    return os;
}


class Savings : public Account
{
    friend ostream &operator<<(ostream &os,const Savings &acc);
public:
    virtual void withdraw(double amount)
    {
        cout <<"Savings::withdraw"<<endl;
    }
    
    virtual ~Savings() {};
};

ostream &operator<<(ostream &os,const Savings &acc)
{
    os << "Savings Display";
    return os;
}


class Trust : public Account
{
    friend ostream &operator<<(ostream &os,const Trust &acc);
public:
    virtual void withdraw(double amount)
    {
        cout <<"Trust::withdraw"<<endl;
    }
    
    virtual ~Trust() {};
};

ostream &operator<<(ostream &os,const Trust &acc)
{
    os << "Trust Display";
    return os;
}


int main(void)
{
    Account *p1 = new Account(); // Works fine
    cout << *p1 <<endl;
    
    Account *p2 = new Checking(); // does it ?....  no , here problem
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


