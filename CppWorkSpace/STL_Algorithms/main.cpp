/* STL Algorithms */
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>

class Person
{
    std::string name;
    int age;
public:
    Person() = default;
    Person(std::string name , int age)
    :name{name},age{age} {}
    
    bool operator<(const Person &rhs) const
    {
        return this->age < rhs.age;
    }
    
    bool operator==(const Person &rhs) const
    {
        return (this->age == rhs.age && this->name == rhs.name);
    }
};


void find_test()
{
    std::cout << "======================================="<<std::endl;
    
    std::vector<int> vec {1,2,3,4,5,6,7,8,9};
    
    //auto loc = std::find(vec.begin(), vec.end(), 5);
    auto loc = std::find(std::begin(vec),std::end(vec),5); //Euqilavent to above.Alternate syntax
    
    if(loc != vec.end())
        std::cout<<"Found number :"<< *loc<<std::endl;
    else
        std::cout<<"Not found"<<std::endl;
        
    std::cout << "======================================="<<std::endl;

    std::list<Person> players {
        {"Larry",18},
        {"Moe",20},
        {"Curly",34}
    };
    
    auto loc1 = std::find(players.begin(),players.end(),Person{"Moe",20});
    
    if(loc1!=players.end())
        std::cout<<"Found Moe"<<std::endl;
    else
        std::cout<<"Not found Moe"<<std::endl;
}

void count_test()
{
    std::vector<int> vec {1,2,3,4,5,1,4,5,1,6,1,7};
    
    int num = std::count(vec.begin(),vec.end(),1);
    std::cout<<num<<" :occuurances"<<std::endl;
}

void count_if_test()
{
    std::cout << "======================================="<<std::endl;
    std::vector<int> vec {1,2,3,4,5,6,7,11,23,13,14,22,56,86};
    
    //Return the count of even number in vector
    int num =  std::count_if(vec.begin(), vec.end(),[](int x){ return x%2==0; } );
    std::cout<<num<<" : even numbers found"<<std::endl;
    //Return the count of odd number in vector
    num =  std::count_if(vec.begin(), vec.end(),[](int x){ return x%2!=0; } );
    std::cout<<num<<" : odd numbers found"<<std::endl;
    //Return the count of numbers>=5 number in vector
    num =  std::count_if(vec.begin(), vec.end(),[](int x){ return x>=5; } );
    std::cout<<num<<" : numbers >=5 are found"<<std::endl;
    
}

void replace_test()
{
    // replace a number with another in vector
    std::cout<<"======================================="<<std::endl;
    std::vector<int> vec {1,2,3,1,4,5,1,6,7,1,8,9,1};
    
    for(auto i:vec)
        std::cout<<i<<" ";
    std::cout<<std::endl;   
    
    std::cout<<"After replacement :"<<std::endl;
    std::replace(vec.begin(),vec.end(),1,100); //replace 1 with 100
    
    for(auto i:vec)
        std::cout<<i<<" ";
    std::cout<<std::endl;
    
}

void all_off_test()
{
    std::cout<<"======================================================="<<std::endl;
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,11,12,14,15,16,18,19};
    //check if all number are greater than 10
    if(std::all_of(vec.begin(),vec.end(),[](int x){ return x>10; }))
        std::cout<<"All the number are >10"<<std::endl;
    else
        std::cout<<"Not all the number are >10"<<std::endl;
        
    //check if all number are greater than 20
    if(std::all_of(vec.begin(),vec.end(),[](int x){ return x<20; }))
        std::cout<<"All the number are <20"<<std::endl;
    else
        std::cout<<"Not all the number are <20"<<std::endl;        
        
}

void string_transform_test()
{
    std::cout<<"=================================================="<<std::endl;
    std::string s1{"This is a test"};
    std::cout<<"Before transform: "<<s1<<std::endl;
    std::transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    /* ::toupper --> global scope " :: " --> means global*/
     std::cout<<"After transform: "<<s1<<std::endl;
    
}
int main(void)
{
    //find_test();
    //count_test();
    //count_if_test();
    //replace_test();
    //all_off_test();
    string_transform_test();
    
}
