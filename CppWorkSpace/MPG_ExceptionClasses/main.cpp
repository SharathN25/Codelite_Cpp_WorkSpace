/* User defined exception classes */
#include <iostream>
using namespace std;
class DivideByZeroException
{
    
};

class NegativeValueException
{
    
};


double calculate_mpg(int miles, int gallons)
{
    if(gallons == 0)
        throw DivideByZeroException();
    if(miles<0||gallons<0)
        throw NegativeValueException();

   return static_cast<double> (miles)/gallons;    
}

int main(void)
{
    int miles{};
    int gallon{};
    double miles_per_gallon{};
    
    cout<<"Enter miles: "<<endl;
    cin>>miles;
    
    cout<<"Enter gallons: "<<endl;
    cin>>gallon;
    
    try
    {
        miles_per_gallon = calculate_mpg(miles, gallon);
        cout<<"Result: "<<miles_per_gallon<<endl;
    }
    catch(const DivideByZeroException &ex)
    {
        cerr<<"Sorry, you cannot divide by zero"<<endl;
    }
    catch(const NegativeValueException &ex)
    {
        cerr<<"Sorry, negative values not allowed"<<endl;
    }
    
    
    
}