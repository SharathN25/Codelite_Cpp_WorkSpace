#include <iostream>
using namespace std;

double calculate_mpg(int miles,int gallon)
{
    if(gallon == 0)
        throw 0;
    return static_cast<double>(miles)/gallon;
}

int main(void)
{
    int miles{};
    int gallon{};
    double miles_per_gallon{};
    
    cout <<"Enter miles"<<endl;
    cin>>miles;
    cout <<"Enter gallons"<<endl;
    cin>>gallon;
try
{
    miles_per_gallon = calculate_mpg(miles,gallon);
    cout<<"Results ="<<miles_per_gallon <<endl;   
}
catch(int &ex)
{
    cerr<<"Sorry, cant devide by zero"<<endl;
}

    cout<<"Bye"<<endl;
    return 0;
    
}