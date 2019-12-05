#include <iostream>
using namespace std;

int main(void)
{
    int miles{};
    int gallon{};
    double miles_per_gallon{};
    
    cout <<"Enter miles"<<endl;
    cin>>miles;
    cout <<"Enter gallons"<<endl;
    cin>>gallon;
    
    //miles_per_gallon = miles/gallon;
    if(gallon!=0)
    {
    miles_per_gallon = static_cast<double>(miles)/gallon;
    cout<<"Results ="<<miles_per_gallon <<endl;
    cout<<"Bye"<<endl;
    }
    else
    {
        cerr<<"Cant divied by zero"<<endl;
    }
    return 0;
    
}