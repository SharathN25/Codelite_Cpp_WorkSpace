#include <iostream>
#include "Account.h"
#include "Savings_Account.h"
using namespace std;

int main(void)
{
    cout <<"\n===============================Account==============================================="<<endl;
    Account acc{};
    acc.deposit(500);
    acc.withdraw(200);
    
    cout << endl;
    
    Account *acc_pointer{nullptr};
    acc_pointer = new Account();
    acc_pointer->deposit(100);
    acc_pointer->withdraw(50);
    delete acc_pointer;
    
    cout <<"\n==============================Savings Accounts======================================"<<endl;
    
    Savings_Account s_acc{};
    s_acc.deposit(100);
    s_acc.withdraw(200);
    
    cout <<endl;
    
    Savings_Account *s_ptr{nullptr};
    s_ptr = new Savings_Account();
    s_ptr->deposit(100);
    s_ptr->withdraw(200);
    delete s_ptr;

}
    
