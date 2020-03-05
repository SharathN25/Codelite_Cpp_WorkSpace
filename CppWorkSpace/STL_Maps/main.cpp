#include <iostream>
#include <map>
#include <set>
#include <algorithm>

void display(const std::map<std::string, std::set<int>> &m)
{
    std::cout<<"[ ";
    for(const auto &elem: m)
    {
        std::cout<<elem.first<<":[ ";
        for(const auto &set_elem: elem.second)
            std::cout<<set_elem<<" ";
         std::cout<<"]";   
    }
    std::cout<<"]"<<std::endl;
}

template <typename T1, typename T2>
void display(const std::map<T1,T2> &l)
{
    std::cout<<"[ ";
    for(const auto elem: l)
        std::cout<<elem.first<<":"<<elem.second<<" ";
    std::cout<<"]"<<std::endl;  
}


void test1()
{
    std::cout<<"Test1=================================================="<<std::endl;
    std::map<std::string, int> m {
        {"Larry",3},
        {"Moe",4},
        {"Curly",1}
    };
    
    display(m);
    
    m.insert(std::pair<std::string, int> ("Anna",10));
    display(m);
    
    m.insert(std::make_pair("Joe",5));
    display(m);
    
    m["Frank"] = 18;
    display(m);
    
    m["Frank"] += 10;
    display(m);
    
    m.erase("Frank");
    display(m);
    
    std::cout<<"count for joe:"<<m.count("Joe")<<std::endl;
    std::cout<<"count for Frank:"<<m.count("Frank")<<std::endl;
    
    auto  it = m.find("Larry");
    if(it!= m.end())
        std::cout<<"Found"<<it->first<<":"<<it->second<<std::endl;
        
     m.clear();
     display(m);   
}

void test2()
{
    std::cout<<"Test2========================================"<<std::endl;
    std::map<std::string, std::set<int> > m1 {
        {"Larry",{100,90}},
        {"Moe",{94}},
        {"Curly",{80,90,100}}
    };
    display(m1);
    
    m1["Larry"].insert(95);
    display(m1);
    
    auto it = m1.find("Moe");
    if(it!=m1.end())
        it->second.insert(1000);
      
    display(m1);
  
}


int main(void)
{
    //test1();
    test2();
    
}