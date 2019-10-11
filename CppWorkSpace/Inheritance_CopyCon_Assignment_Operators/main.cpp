#include <iostream>
using namespace std;

class Base
{
    int value;
public:
    Base()
    :value{0}
    {
     cout <<"Base No-arg constructor" <<endl;   
    }
    
    Base(int x)
    :value{x}
    {
      cout<<"Base overloaded constructor"<<endl;
    }
    
    Base(const Base &other)
    :value{other.value}
    {
        cout << "Base Copy Constructor"<< endl;
    }
    
    Base &operator=(const Base &rhs)
    {
        cout << "Base Operator="<<endl;
        if(this == &rhs)
            return *this;
        value = rhs.value;
        return *this;
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
    
    Derived(const Derived &other)
    :Base(other), doubled_value{other.doubled_value}
    {
        cout << "Derived Copy constructor" << endl;
    }
    
    Derived &operator=(const Derived &rhs)
    {
        cout <<"Derived assignmnet operator"<<endl;
        if(this == &rhs)
            return *this;
        Base::operator=(rhs);
        doubled_value = rhs.doubled_value;
        return *this; 
    }
    
    
    ~Derived() { cout << "Derived Destructor" << endl;}
    
};

int main(void)
{
    //Base b{100}; //overloaded constructors
    //Base b1 {b} ; //Copy constructor
    //b = b1; //Copy assignment
    Derived d{200};
    Derived d1{d};
    d = d1;
}