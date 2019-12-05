#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

/*Display any vector of integer */
void display(const std::vector<int> &vec)
{
    std::cout<< "[ ";
    for(auto const &i:vec)
        std::cout<<i<<" ";
    std::cout<<"]"<<std::endl;
}

void test1()
{
    std::cout << "\n========================================"<<std::endl;
    std::vector<int> nums1 {1,2,3,4,5};
    auto it = nums1.begin();   //points to 1
    std::cout<<*it<<std::endl;
    
    it++;                      //points to 2
    std::cout<<*it<<std::endl;

    it += 2;                   //points to 4
    std::cout<<*it<<std::endl;

    it -= 2;;                   //points to 2
    std::cout<<*it<<std::endl;

    it = nums1.end() - 1;       //points to 5
    std::cout<<*it<<std::endl;    
}

void test2()
{
    std::cout << "\n========================================"<<std::endl;
    std::vector<int> nums1{1,2,3,4,5};
    
    std::vector<int>::iterator it = nums1.begin();
    
    while(it!= nums1.end())
    {
        std::cout<<*it<<std::endl;
        it++;
    }
    
    std::cout << "\n========================================"<<std::endl;
    //fill all values to 0
    it = nums1.begin();
    while(it!= nums1.end())
    {
        *it = 0;
        it++;
    }
    
    display(nums1);
}

void test3()
{
    
    std::cout << "\n========================================"<<std::endl;
    std::vector<int> nums1{1,2,3,4,5};
    
    std::vector<int>::const_iterator it = nums1.begin();
    
    while(it!= nums1.end())
    {
        std::cout<<*it<<std::endl;
        it++;
    }
    
    //Compiler error 
    //fill all values to 0
//    it = nums1.begin();
//    while(it!= nums1.end())
//    {
//        *it = 0; // <--Compiler error here 
//        it++;
//    }
//    
}

void test4()
{
 std::cout << "\n========================================"<<std::endl;
 //iterate over vector
 std::vector<int> vec {1,2,3,4,5};
 auto it1 = vec.rbegin();
 while(it1!= vec.rend())
 {
     std::cout<<*it1<<std::endl;
     it1++;
 }

std::cout << "\n========================================"<<std::endl;
//interate over list
std::list<std::string> name {"Larry","moe","curly"};
auto it2 =   name.crbegin(); // points to "curly"
it2++; // actually decremets and point to "moe"  
std::cout<<*it2<<std::endl;

std::cout << "\n========================================"<<std::endl;
//interate over map
std::map<std::string, std::string> fav{
    {"Sankirth", "c++"},
    {"Sharath", "c"},
    {"Kiran", "SIGNALS"}
};

auto it3 = fav.begin();
while(it3!= fav.end())
{
    std::cout<<it3->first<<":"<<it3->second<<std::endl;
    it3++;
}

}

void test5()
{
    std::cout << "\n========================================"<<std::endl;
    //iterate over a subset of container
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    auto start = vec.begin()+2;
    auto finish = vec.end()-3;
    
    while(start!= finish)
    {
        std::cout<<*start<<std::endl;
        start++;
    }
    
}
int main(void)
{
    //test1();
    //test2();
    //test3();
    //test4();
    test5();
    return 0 ;
}