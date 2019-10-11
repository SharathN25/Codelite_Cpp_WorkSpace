#include <iostream>
using namespace std;

class Base
{
    int value;
public:
    Base():value{0}
    {
     cout <<"Base No-arg constructor" <<endl;   
    }
    
    Base(int x):value{x}
    {
      cout<<"Base overloaded constructor"<<endl;
    }
    
    ~Base() { cout <<"Base destructor"<<endl;}
    
};

class Derived:public Base
{
    int doubled_value;
    public:
    Derived():Base{},doubled_value{0}
    {
        cout <<"Deived no-arg constructor" <<endl;
    }
    
    Derived(int x):Base{x}, doubled_value{x*2}
    {
        cout <<"Derived overloaded constructor"<<endl;
    }
    
    ~Derived() { cout << "Derived Destructor" << endl;}
    
};

int main(void)
{
    Base base;
    Base Base1(100);
    Derived d;
    Derived d1(120);
    return 0;
}