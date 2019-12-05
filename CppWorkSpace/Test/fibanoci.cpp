#include <iostream>
using namespace std;

int main(void)
{
    
    int i=0,sum = 1, b =0, c=0;
    int n =20;
    cout << 0<<" ";
    while(i<n)
    {
        cout <<sum<<" ";
        b=c;
        c=sum;
        sum = b + c;
        i++;
    }
}