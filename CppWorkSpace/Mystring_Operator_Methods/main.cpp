#include <iostream>
#include <vector>
#include "Mystring.h"
using namespace std;


int main()
{
    Mystring larry{"Larry"};
    Mystring moe{"moe"};
    Mystring stooge = larry;
    larry.display();
    moe.display();
    cout << (larry == moe) <<endl;
    cout << (larry == stooge) <<endl;
    larry.display();
    Mystring larry2 = -larry;
    larry2.display();
    Mystring stooges = larry+"moe";
    stooges.display();
    /*Mystring stooges1 = "sharath"+ larry; // Error as left value is not class member type
    stooges1.display(); */
    return 0;

}