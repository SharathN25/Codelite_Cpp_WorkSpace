#include <iostream>
#include <set>
#include <algorithm>


class Person
{
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person(): name{"Unkonwn"},age{0} {};
    Person(std::string name, int age)
    :name{name},age{age} {};
    
    bool operator<(const Person &rhs)const
    {
        return this->age < rhs.age;
    }
    
    bool operator==(const Person &rhs)const
    {
        return (this->age == rhs.age && this->name == rhs.name);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p)
{
    os<<p.name<<":"<<p.age;
    return os;
}

template <typename T>
void display(const std::set<T> &l)
{
    std::cout<<"[ ";
    for(const auto &elem:l)
        std::cout<<elem<<" ";
    std::cout<<"]"<<std::endl;    
}

void test1()
{
    std::cout<<"Test1=================================="<<std::endl;
    std::set<int> s {1,4,5,2};
    display(s);
    
    s ={1,2,3,1,1,1,2,2,2,4,5,6,7,8,9};
    display(s);
    
    s.insert(0);
    s.insert(10);
    display(s);
    
    if(s.count(10))
        std::cout<<"10 is in the set"<<std::endl;
    else
        std::cout<<"10 is not in the set"<<std::endl;
        
    auto it = s.find(5);
    if(it!=s.end())
        std::cout<<"Found :"<<*it<<std::endl;
    else
        std::cout<<"Not found"<<std::endl;
        
    s.clear();
    display(s);
            
    
}

void test2()
{
    std::cout<<"Test2====================================="<<std::endl;
    std::set<Person> stooges
    {
        {"Larry",1},
        {"Moe",2},
        {"Curly",3}
    };
    display(stooges);
    
    stooges.insert(Person{"James",50});
    stooges.insert(Person{"Frank",50}); //--->!!! 50 already exist
    
    display(stooges);
    
    auto it = stooges.find(Person{"Moe",2});
    if(it!=stooges.end())
        stooges.erase(it);
    display(stooges);
    
    it = stooges.find(Person{"XXX",50}); //removes the james, uses < operator
    if(it!=stooges.end())
        stooges.erase(it);
    display(stooges);
    
}

void test3()
{
    std::cout<<"Test3====================================="<<std::endl;
    std::set<std::string> s {"A","B","C"};
    display(s);
    
    auto result = s.insert("D");
    
    std::cout<<std::boolalpha;
    std::cout<<"First: "<<*(result.first)<<std::endl;
    std::cout<<"Second : "<<result.second<<std::endl;
    std::cout<<std::endl;
    display(s);
    
    result = s.insert("A");
    std::cout<<std::boolalpha;
    std::cout<<"First: "<<*(result.first)<<std::endl;
    std::cout<<"Second : "<<result.second<<std::endl;
    std::cout<<std::endl;    
}

int main(void)
{
    //test1();
    //test2();
    test3();
    
}