#include <iostream>
using namespace std;

class Base 
{
private:
    int value;
public:
    Base():value{0}
    {
        cout <<"Base no-arg constructor " <<endl;
    }
    
    Base(int x):value{x}
    {
        cout << "Base Overlaoded Constructor " <<endl;
    }
    
    ~Base()
    {
        cout <<"Base Destructor " <<endl;
    }
    
};
    
    
class Derived:public Base
{
    using Base::Base;
private:
    int doubled_value;
public:
    Derived():doubled_value{0}
    {
        cout <<"Derived No-arg constructor " <<endl;
    }
    
    Derived(int x):doubled_value{x*2}
    {
        cout <<" Derived Overloaded constructor " << endl;
    }
    
    ~Derived()
    {
       cout <<"Derived Destructor " <<endl; 
    }
    
};

int main()
{
    //Base b;
    //Base bb(100);
    //Derived d;
    Derived dd{12};
    return 0;
}