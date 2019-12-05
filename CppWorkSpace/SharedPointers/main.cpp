#include <iostream>
#include <vector>
#include <memory>
using namespace std;

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

void func(shared_ptr<Test> p)
{
    cout << "Use count:" <<p.use_count() <<endl;
}

int main(void)
{
//    shared_ptr<int> p1 {new int{100}};
//    cout << "Use count:" <<p1.use_count() <<endl; //1
//    
//    shared_ptr<int> p2 { p1 };
//    cout << "Use count:" <<p1.use_count() <<endl; //2
//    
//    p1.reset(); // p1 =null
//    
//    cout << "Use count:" <<p2.use_count() <<endl; //1

 shared_ptr<Test> ptr = make_shared<Test>(100);
 func(ptr);
 cout <<"Use Count:"<<ptr.use_count()<<endl;
 {
 shared_ptr<Test> ptr1 = ptr;
 cout <<"Use Count:"<<ptr.use_count()<<endl;
 {
     shared_ptr<Test> ptr2 = ptr;
     cout <<"Use Count:"<<ptr.use_count()<<endl;
     ptr.reset();
 }
  cout <<"Use Count:"<<ptr.use_count()<<endl;
 }
 cout <<"Use Count:"<<ptr.use_count()<<endl;
 
    return 0;
}
