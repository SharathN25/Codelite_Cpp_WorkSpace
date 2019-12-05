/* C++ Strings are part of STL */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s1 ;
    //cout << s1 <<endl;
    string s2 {"Sharath"};  
    //cout << s2 <<endl;
    string s3 {s2};
    //cout << s3 <<endl;
    string s4 {"Sharath", 4};
    //cout << s4 <<endl;
    string s5 {s3, 1, 4};
    //cout << s5 <<endl;
    string s6(3,'x');
    //cout << s6 <<endl;
    
    string s7;
    s7 = "C++ Rocks"; 
    //cout << s7 <<endl;
    
    string part1 {"C++ is a "};
    string part2 {"Powerfull "};
    //string sentence = part1 + part2 + "Language";
    string sentence = "Language " + part1 + part2  ;
    //string sentence = part1 + "Language " + part2 ;
    //cout << sentence<<endl;
    
    //string sentence1 = "c++" + "Is Poerfull "; // combination of c and c++ string - ok, but only c string not okay.
    
    string s8 {"This is a test"};
    cout << s8.substr(0,4) <<endl;
    cout << 
    
}