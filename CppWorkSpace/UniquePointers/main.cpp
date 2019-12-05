/* Unique Pointers */
#include <iostream>
//#include <vector>
#include <memory>

using namespace std;

#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"

class Test
{
private:
    int data;
public:
    Test():data{0} { cout<< "Test Constructor("<<data<<")" <<endl; }
    Test(int data):data{data} { cout<< "Test Constructor("<<data<<")" <<endl; }
    int get_data() const { return data; }
    ~Test() { cout<< "Test Destructors("<<data<<")" <<endl; }
};

int main(void)
{
//   Test *t1 = new Test{100};
//   delete t1;
unique_ptr<Test> t1 {new Test{1000}};
unique_ptr<Test> t2 = make_unique<Test>(200);
unique_ptr<Test> t3;
//t3 = t1; //Copy not allowed - error
t3 = move(t1); //Moves the ownership to t3, and t1 =nullptr
if(!t1)
    cout <<"t1 = nullptr"<<endl;
   return 0;
}