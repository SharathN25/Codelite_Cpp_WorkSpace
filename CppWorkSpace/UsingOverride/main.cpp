/* Using the C++ 11 feature - i.e override specifier */

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void say_hello() const
    {
        cout <<"Hello.. I'm Base"<<endl;
    }
    
    virtual ~Base(){};
    
};

class Derived : public Base 
{
public:
    //Virtual void say_hello() - forgot const and didnt use "override"
    virtual void say_hello() const override  
    {
        cout << "Hello.. I'm Derived" <<endl;
    }
    
    virtual ~Derived(){} ;
};

int main(void)
{
    Base *p1 = new Base();
    p1->say_hello();
    
    Derived *p2 = new Derived();
    p2->say_hello();
    
    Base *p3 = new Derived();
    p3->say_hello();
    
    return 0;
    
}



