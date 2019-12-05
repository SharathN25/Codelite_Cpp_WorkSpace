/* STL - Arrays */
#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>


void display(const std::array<int,5> &arr)
{
    std::cout<<"[ ";
    for(const auto &i:arr)
        std::cout<<i<<" ";
    std::cout<<"]"<<std::endl;        
}

void test1()
{
    std::cout<<"Test1====================================================="<<std::endl;
    std::array<int,5> arr1 {1,2,3,4,5}; // double {{ }}  if C++11 used
    std::array<int,5> arr2;    
    
    display(arr1);
    display(arr2); //Displays garbage as elements not initialized
    
    arr2 = {10,20,30,40,50};
    
    display(arr1);
    display(arr2);
    
    std::cout<<"Size of arr1 = "<<arr1.size()<<std::endl;
    std::cout<<"Size of arr2 = "<<arr2.size()<<std::endl;
    
    arr1[0] = 1000;
    arr2.at(1) = 2000;
    
    std::cout<<"Front of arr2= "<<arr2.front()<<std::endl;
    std::cout<<"Back of arr1= "<<arr2.back() <<std::endl;
}

void test2()
{
    std::cout<<"Test2======================================"<<std::endl;
    std::array<int,5> arr1 {1,2,3,4,5};
    std::array<int,5> arr2 {10,20,30,40,50};
    
    display(arr1);
    display(arr2);
    
    arr1.fill(0);

    display(arr1);
    display(arr2);
    
     arr1.swap(arr2);

    display(arr1);
    display(arr2);    
    
}

void test3()
{
    std::cout<<"Test3====================================="<<std::endl;
    std::array<int,5> arr1 {1,2,3,4,5};
    
    display(arr1);
    
    int* p = arr1.data();
    std::cout<<"Address of p= "<<p<<std::endl;
    std::cout<<"Value of p= "<<*p<<std::endl;
    
    *p = 1000;
    
    display(arr1);
    
    
}

void test4()
{
    std::cout<<"Test4========================================"<<std::endl;
    std::array<int, 5> arr1 {7,5,1,6,8};
    display(arr1);
    std::sort(arr1.begin(),arr1.end());
    display(arr1);
    
}

void test5()
{
    std::cout<<"Test5============================="<<std::endl;
    std::array<int,5> arr1{2,1,5,4,3};
    display(arr1);
    std::array<int,5>::iterator min_num = std::min_element(arr1.begin(),arr1.end());
    std::array<int,5>::iterator max_num = std::max_element(arr1.begin(),arr1.end());
    std::cout<<"Min = "<<*min_num<<" Max = "<<*max_num<<std::endl;
    
    
    
}

void test6()
{
    std::cout<<"Test6==========================================="<<std::endl;
    std::array<int,5> arr1 {1,2,3,3,4};
    auto adjacent = std::adjacent_find(arr1.begin(),arr1.end());
    if(adjacent!=arr1.end())
        std::cout<<"Aajecent element found with: "<<*adjacent<<std::endl;
    else
        std::cout<<"Adjacent not found"<<std::endl;
        
}

void test7()
{
    std::cout<<"Test7========================================="<<std::endl;
    std::array<int,5> arr1 {1,2,3,4,5};
    display(arr1);
    int sum = std::accumulate(arr1.begin(),arr1.end(),0);
    std::cout<<"Sum of arr1 elements = "<<sum<<std::endl;
}

void test8()
{
    std::cout<<"Test8======================================="<<std::endl;
    std::array<int,9> arr1 {1,2,3,4,3,3,3,3,3};
    int count = std::count(arr1.begin(),arr1.end(),3);
    std::cout<<"Found 3 in arr1 "<<count<<"->times"<<std::endl;
}

void test9()
{
    std::cout<<"Test 9 ================================="<<std::endl;
    std::array<int,10> arr1 {1,2,3,50,60,70,80,200,300,400};
    //how many elements are between 10 and 200 -->50,60,70,80
    
    int count = std::count_if(arr1.begin(),arr1.end(), [](int x){ return (x>10 && x<200);});
    std::cout<<"Between 10 and 200 we have -->"<<count<<"Elements"<<std::endl;
}

int main(void)
{
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    //test6();
   // test7();
   //test8();
   test9();
}