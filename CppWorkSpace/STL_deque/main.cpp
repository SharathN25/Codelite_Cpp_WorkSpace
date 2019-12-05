/* STL - deque */
#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>

/*template function to display any deque */
template <typename T>
void display(const std::deque<T> &d)
{
    std::cout<<"[ ";
    for(const auto &elem: d)
        std::cout<<elem<<" ";
    std::cout<<"]"<<std::endl;    
}

void test1()
{
    std::cout<<"Test1=========================================="<<std::endl;
    std::deque<int> d {1,2,3,4,5};
    display(d);
    
    d = {2,4,6,8,10};
    display(d);
    
    std::deque<int> d1(10,100);
    display(d1);
    
    d.at(0) = 100;
    d[1] = 200;
    display(d);
}

void test2()
{
    std::cout<<"Test2==============================================="<<std::endl;
    std::deque<int> d {0,0,0};
    display(d);
    
    d.push_back(2);
    d.push_back(3);
    
    display(d);
    
    d.push_front(20);
    d.push_front(30);
    
    display(d);
    
    d.pop_back();
    d.pop_front();
    display(d);
}

void test3()
{
    std::cout<<"Test3==========================================="<<std::endl;
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;
    //Insert all even numbers of vector to front of deque and odd to back of deque
    for(const auto &elem: vec)
    {
        if(elem%2 == 0)
            d.push_front(elem);
        else
            d.push_back(elem);    
    }
    
    display(d);
}

void test4()
{
    //push front vs push back
    std::cout<<"Test4===================================="<<std::endl;
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque<int> d;
    
    for(const auto &elem:vec)
        d.push_front(elem);
    display(d);
     
    d.clear();
  
    for(const auto &elem:vec)
        d.push_back(elem);
    display(d);
    
}

void test5()
{
  //same as test4, but using std::copy
  std::cout<<"Test5============================================="<<std::endl;
  std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
  std::deque<int> d;
  
  std::copy(vec.begin(),vec.end(),std::front_inserter(d));
  display(d);
  
  d.clear();
  
  std::copy(vec.begin(),vec.end(),std::back_inserter(d));
  display(d);  
  
}
int main(void)
{
    //test1();
    //test2();
    //test3();
    //test4();
    test5();
    
}