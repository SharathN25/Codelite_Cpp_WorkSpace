#include <iostream>
#include <queue>


class Person
{
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person() : name{"Unkown"}, age{0} {}
    Person(std::string name, int age)
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

std::ostream &operator<<(std::ostream &os, const Person &p)
{
    os<<p.name<<":"<<p.age;
    return os;
}

template <typename T>
void display(std::priority_queue<T> pq)
{
    std::cout<<"[ ";
    while(!pq.empty())
    {
        T elem = pq.top();
        pq.pop();
        std::cout<<elem<<" ";
    }
    std::cout<<"]"<<std::endl;
    
}

void test1()
{
    std::cout<<"Test1==========================================="<<std::endl;
    std::priority_queue<int> pq;
    for(int i:{3,5,7,12,23,12,4,100,0,3,5,7})
        pq.push(i);
    
    std::cout<<"Size :"<<pq.size()<<std::endl;
    std::cout<<"Top :"<<pq.top()<<std::endl;
    
    display(pq);
    pq.pop();
    display(pq);

}


void test2()
{
    std::cout<<"Test2======================================"<<std::endl;
    std::priority_queue<Person> pq;
    
    pq.push(Person{"A",3});
    pq.push(Person{"B",7});
    pq.push(Person{"C",1});
    pq.push(Person{"D",2});
    pq.push(Person{"E",4});
    pq.push(Person{"F",5});
    
    display(pq);
    
}

int main(void)
{
    
        //test1();
        test2();

      
    
}

