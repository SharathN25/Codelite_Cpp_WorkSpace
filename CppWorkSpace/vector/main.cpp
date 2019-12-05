#include <iostream>
#include <vector>
#include <algorithm>

class Person
{
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person() = default;
    Person(std::string name, int age)
    :name{name},age{age} {} 
    
    bool operator<(const Person &rhs)
    {
        return this->age < rhs.age;
    }
    
    bool operator==(const Person &rhs)
    {
        return (this->age == rhs.age && this->name == rhs.name);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p)
{
    os<<p.name<<": "<<p.age;
    return os;
}

//display() using lambda and for_each
void display2(const std::vector<int> &vec)
{
    std::cout<<"[ ";
    std::for_each(vec.begin(),vec.end(),[](int x){std::cout<<x<<" ";});
    std::cout<<"]"<<std::endl;
}


//template function to display any vector
template <typename T>
void display(const std::vector<T> &vec)
{
    std::cout<<"[";
    for(const auto &ele:vec)
        std::cout<<ele<<" ";
    std::cout<<"]"<<std::endl;    
}


void test1()
{
    std::cout<<"Test1=================================="<<std::endl;
    std::vector<int> vec {1,2,3,4,5};
    display2(vec);
    
    vec = {2,3,4,5,6};
    display(vec);
    
    std::vector<int> vec1(10,100);
    display(vec1);
    
}


void test2()
{
 std::cout<<"Test2================================"<<std::endl;
 std::vector<int> vec {1,2,3,4,5};
 display(vec);
 std::cout<<"\nsize :"<<vec.size()<<std::endl;
 std::cout<<"max_size :"<<vec.max_size()<<std::endl;
 std::cout<<"Capacity :"<<vec.capacity()<<std::endl;
 
 vec.push_back(6);
 display(vec);
 std::cout<<"\nsize :"<<vec.size()<<std::endl;
 std::cout<<"max_size :"<<vec.max_size()<<std::endl;
 std::cout<<"Capacity :"<<vec.capacity()<<std::endl; 
 
 vec.shrink_to_fit(); //c++ , it shriks the size to what exacly needed
 display(vec);
 std::cout<<"\nsize :"<<vec.size()<<std::endl;
 std::cout<<"max_size :"<<vec.max_size()<<std::endl;
 std::cout<<"Capacity :"<<vec.capacity()<<std::endl;

 vec.reserve(100); //reserves the 100 contiguos mem block
 display(vec);
 std::cout<<"\nsize :"<<vec.size()<<std::endl;
 std::cout<<"max_size :"<<vec.max_size()<<std::endl;
 std::cout<<"Capacity :"<<vec.capacity()<<std::endl; 
 
}


void test3()
{
    std::cout<<"Test3========================================="<<std::endl;
    std::vector<int> vec {1,2,3,4};
    display(vec);
    vec.at(0) = 100;
    vec[1] = 200;
    display(vec);
    
}

void test4()
{
    std::cout<<"Test4============================="<<std::endl;
    std::vector<Person> stooges;
    Person P1{"Larry",18};
    stooges.push_back(P1);
    display(stooges);
    
    stooges.push_back(Person{"Moe",19});
    display(stooges);
    
    stooges.emplace_back("Culry",20); // This is great method!!!!!
    display(stooges);
}

void test5()
{
    std::cout<<"Test5====================================="<<std::endl;
    std::vector<Person> stooges {
        {"Larry",20},
        {"Moe",21},
        {"Curly",22}
    };
    display(stooges);
    
    std::cout<<"Front : "<<stooges.front()<<std::endl;
    std::cout<<"Back  : "<<stooges.back() <<std::endl;
    
    stooges.pop_back();
    
    display(stooges);
    
}

void test6()
{
   std::cout<<"Test6=============================="<<std::endl;
   std::vector<int> vec {1,2,3,4,5};
   display(vec);
   vec.clear();
   display(vec);
   
   vec = {1,2,3,4,5,6,7,8};
   display(vec);
   
   vec.erase(vec.begin(),vec.begin()+2); //erase first 2 elements
   display(vec);
   
   vec = {1,2,3,4,5,6,7,8,9,10};
   //erase all even numbers
   auto it =vec.begin();
   while(it!=vec.end())
   {
       if(*it%2 == 0)
           vec.erase(it);
        else
            it++;
   }
   display(vec);
   
   
}
\
void test7()
{
    std::cout<<"Test7=================================="<<std::endl;
    std::vector<int>  vec1 {1,2,3,4,5};
    std::vector<int> vec2 {10,20,30,40,50,60};
    display(vec1);
    display(vec2);
    
    vec2.swap(vec1); //swap 2 vectors
    display(vec1);
    display(vec2);
}

void test8()
{
    std::cout<<"Test8============================================="<<std::endl;
    std::vector<int> vec1 {1,5,2,31,0,4,6,12};
    display(vec1);
    
    std::sort(vec1.begin(),vec1.end());
    display(vec1);
    
}

void test9()
{
    
    std::cout<<"Test9====================================="<<std::endl;
    std::vector<int> vec1 {1,2,3,4,5};
    std::vector<int> vec2 {10,20};
    display(vec1);
    display(vec2);
    
    /* copy all vec1 element n put after 20 in vec2*/
    std::copy(vec1.begin(),vec1.end(),std::back_inserter(vec2));
    display(vec1);
    display(vec2);
    
    /* Now same thig, but copy only if its even number*/
    vec1 = {1,2,3,4,5};
    vec2 = {10,20};
    display(vec1);
    display(vec2);
    
    std::copy_if(vec1.begin(),vec1.end(),std::back_inserter(vec2),[](int x){return x%2==0;});
    display(vec1);
    display(vec2);
}

void test10()
{
 std::cout<<"Test10=================================="<<std::endl;
 //transform over 2 ranges
 std::vector<int> vec1 {1,2,3,4,5};
 std::vector<int> vec2 {10,20,30,40,50};
 std::vector<int> vec3;  
 display(vec1);
 display(vec2);
 
 std::transform(vec1
 .begin(),vec1.end(),vec2.begin(),std::back_inserter(vec3),[](int x, int y){ return x*y;});
 display(vec3);
}

int main(void)
{
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    //test6();
    //test7();
    //test8();
    //test9();
    test10();
}