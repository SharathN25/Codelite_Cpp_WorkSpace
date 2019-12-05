/* Creating an array class , that takes user given size and type , basically 
a generic array class */

#include <iostream>
#include <string>
using namespace std;
template <typename T, int N>
class Array 
{
    int size {N};
    T value[N];
    
    friend std::ostream& operator<<(std::ostream& os, const Array<T,N>& arr)
    {
        os<<"[";
        for(const auto& val:arr.value)
            os <<val<<" ";
         os<<"]"<<std::endl;
     return os;  
    }
    
public:

Array() = default;
Array(T init_val)
{
    for(auto& item:value)
        item = init_val;
}

void fill(int val)
{
    for(auto &item: value)
        item = val;
}

int get_size() const{
    return size;
}

T &operator[](int index)
{
    return value[index];
}

};


int main(void)
{
    Array<double, 5> a1 {1.11};
    cout<<a1<<endl;
    
    Array<char,5> a2 {'a'};
    cout<<a2<<endl;
    a2[3] = 'S';
    cout<<a2<<endl;
}