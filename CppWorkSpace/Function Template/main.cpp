#include <iostream>
#include <string>

using namespace std;

template<typename T>
T minu(T a, T b)
{
    return (a<b)?a:b;
}

template<typename T1, typename T2>
T1 printf(T1 a, T2 b)
{
    cout <<"type1 = "<<a<<endl;
    cout <<"type2 = "<<b<<endl;
    return 0;
}

int main(void)
{
  cout<<minu<int>(2,3)<<endl;
  printf(1,1.3);
//    cout<<minu(4,5)<<endl;
//    cout<< minu<double>(10.5,17.8)<<endl;
//    cout<< minu(12.6,9.8)<<endl;
//    cout<<minu<char>('S','X')<<endl;
//    cout<< minu('A','B')<<endl;
    return 0;
}