/* class template */

#include <iostream>
#include <string>

using namespace std;

template<typename T>
class Item
{
private:
    std::string name;
    T value;
public:
Item(std::string name, T value)
:name{name}, value{value} {}

std::string get_name() const { return name; }
T get_value() const { return value;}    
};

int main(void)
{
    Item<int> i1 = {"frank", 1};
    cout<<i1.get_name()<<endl;
    cout<<i1.get_value()<<endl;
    
    Item<double> i2 = {"frank", 1.24};
    cout<<i2.get_name()<<endl;
    cout<<i2.get_value()<<endl;
    
    return 0;
}