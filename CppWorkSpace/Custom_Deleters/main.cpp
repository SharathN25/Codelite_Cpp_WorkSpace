#include <iostream>
#include <memory>
using namespace std;

class Test
{
private:
    int data;
public:
    Test():data{0} { cout << "\tTest Constructor ("<<data<<")"<<endl;}
    Test(int data):data{data} { cout << "\tTest Constructor ("<<data<<")"<<endl;}
    int get_data() const { return data; }
    ~Test(){ cout<<"\tTest Destructors"<<endl; }
};

void my_deleter(Test *ptr)
{
    cout << "\t Using my custom deleter" <<endl;
    delete ptr;
}

int main(void)
{
    {
        //Using function
        shared_ptr<Test> t1 {new Test{100}, my_deleter};
    }
    cout << "============================================="<<endl;
    {
        //Using the lambdas
        shared_ptr<Test> t2 (new Test{200}, 
        [](Test *ptr)
        {
            cout <<"\t Using Custom Lambda deleter"<<endl;
            delete ptr;
        });
        
    }
        
}