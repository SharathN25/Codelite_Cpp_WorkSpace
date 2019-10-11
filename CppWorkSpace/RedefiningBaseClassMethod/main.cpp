#include "Account.h"
#include "Savings_Account.h"

#include <iostream>
using namespace std;

int main(void)
{
    cout <<"============================Account Class======================================"<<endl;
    Account a1{1000.0};
    cout <<a1<<endl;
    
    a1.deposit(500);
    cout <<a1<<endl;
    
    a1.withdraw(1000);
    cout <<a1<<endl;
    
    a1.withdraw(1000);
    cout <<a1<<endl;
    
     cout <<"============================Account Class======================================"<<endl;
     Savings_Account s1{1000.0, 5.0};
     cout <<s1<<endl;
     
     s1.deposit(1000);
     cout <<s1<<endl;
     
     s1.withdraw(2000);
     cout <<s1<<endl;
     
     s1.withdraw(1000);
     cout <<s1<<endl;
     
     
    return 0;
}