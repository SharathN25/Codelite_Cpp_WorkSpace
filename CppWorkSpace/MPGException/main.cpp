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

    try{
    if(gallon == 0)
        throw 0;
    miles_per_gallon = static_cast<double>(miles)/gallon;
    cout<<"Results ="<<miles_per_gallon <<endl;
    cout<<"Bye"<<endl;
    }
    catch(int &ex)
    {
        cerr<<"Sorry, cant divide by 0" <<endl;
    }
    return 0;
    
}