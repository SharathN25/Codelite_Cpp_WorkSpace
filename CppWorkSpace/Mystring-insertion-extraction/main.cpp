#include <iostream>
#include <vector>
#include "Mystring.h"
using namespace std;


int main()
{
 Mystring larry{"Larry"};
 Mystring moe{"Moe"};
 Mystring curly;
 
 cout <<"Enter the curlys first name" <<endl;
 cin >> curly;
 
 cout <<"The three objects are: " << larry <<","<<moe <<"and" << curly <<endl;
 
 cout <<"\n enter diff name for 3 objs" <<endl;
 cin >> larry >> moe >> curly ;
 
  cout <<"The three objects are: " << larry <<","<<moe <<" and " << curly <<endl;
  return 0;

}