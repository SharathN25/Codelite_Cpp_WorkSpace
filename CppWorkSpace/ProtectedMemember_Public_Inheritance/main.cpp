#include <iostream>
using namespace std;

class BASE
{
public:
    int a{0};
    void display()
    {
        cout << a <<", "<<b<<", "<<c<<endl;
    }
protected:
    int b{0};
private:
    int c{0};
};

class Derived : public BASE
{
    //a is public
    //b is protected
    //c : no access to c
public:
    void access_base_class_member()
    {
        a = 100; //OK
        b = 200; //OK
        //c = 300; // Compiler error - as it is private
    }
    
    
    
};

int main(void)
{
    BASE base_object;
    base_object.a =100; //OK
    //base_object.b =100; // Compiler error - as it is protected
    //base_object.c = 300; // Compiler error - as it is private
    
    Derived d;
    d.a = 200; //Ok
    //d.b = 300; // Error
    //d.c = 400; // Error
    
}

