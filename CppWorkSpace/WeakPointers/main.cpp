/* Weak Pointers */
#include <iostream>
#include <memory>
using namespace std;

class B; //Forward declaration

class A
{
    shared_ptr<B> b_ptr;
public:
    void set_B(shared_ptr<B> &b)
    {
        b_ptr = b;
    }
    A() { cout <<"A constructor"<<endl; }
    ~A(){ cout <<"A destructor"<<endl; }
    
};

class B
{
    //shared_ptr<A> a_ptr; //Make weak to break strong circular ref as below.
    weak_ptr<A> a_ptr;
public:
    void set_A(shared_ptr<A> &a)
    {
        a_ptr = a;
    }
    
    B() { cout << "B constructor" <<endl;}
    ~B() { cout << "B deconstructor"<<endl;}
};


int main(void)
{
    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();
    a->set_B(b);
    b->set_A(a);
    return 0;
}
