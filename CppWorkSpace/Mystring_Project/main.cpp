#include <iostream>
#include "Mystring.h"

int main(void)
{
    Mystring emty; //no arg constructor called 
    Mystring larry{"Larry"};// Overloaded constructor called
    Mystring stoog {larry};// copy constructor is called
    
    emty.display();
    larry.display();
    stoog.display();
    
    return 0;
}