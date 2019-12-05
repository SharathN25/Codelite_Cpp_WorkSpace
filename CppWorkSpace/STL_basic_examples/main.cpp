#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(void)
{
    //sort
    vector<int> v {1,4,2,3,6,8,9};
    sort(v.begin(),v.end());
    for(auto elem: v)
        cout<<elem<<endl;
    
    //reverse    
    reverse(v.begin(),v.end());
    for(auto elem: v)
        cout<<elem<<endl;
   //sum all
   int sum {};
   sum = accumulate(v.begin(),v.end(),0);
   cout<<sum<<endl;
        
}
