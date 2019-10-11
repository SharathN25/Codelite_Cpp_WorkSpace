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
    Mystring stooges = "sharath" + larry;
    stooges.display();
    return 0;

}