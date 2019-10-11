/* How static binding works and some problem when
 * referec to object is passed and when object dynamically created
 * Basic understanding of this is required before moving in to dynamic bynding in 
 * polymorphism*/
 
 
#include <iostream>
using namespace std;

class Base
{
public:
    void say_hello() const
    {
        cout << "Hello - I am Base Class" <<endl;
    }
};

class Derived: public Base
{
public:
    void say_hello() const
    {
        cout << "Hello- Im Derived"<<endl;
    }
};


void greeings(const Base &obj)
{
    cout <<"Greetings:";
    obj.say_hello();
}


int main(void)
{
    Base b;
    b.say_hello(); // Expected->Base::say_hello()
                   // Actual ->Base::say_hello()
    
    Derived d;
    d.say_hello(); // Expected-> Derived::say_hello()
                   // Actual->Derived::say_hello()
    
    greeings(b); // Expected->base::say_hello();
                 //Actual ->base::say_hello();
                 
    greeings(d); // Expected-> Derived::say_hello()            
                  //  Actual ->base::say_hello();
    
    Base *ptr = new Derived();
    ptr->say_hello(); // Expected-> Derived::say_hello()            
                      //  Actual ->base::say_hello();
                  
}