/*c++ cctype lib has many char test and manioulate function */
#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{
    char c;
    cout<< "Enter the character : "<<endl;
    cin >> c;
    cout<< "Is it a just letter(isalpha()) : "<< isalpha(c) <<endl;
    cout<< "Is it a just digit(isdigit()) : "<< isdigit(c) <<endl;
    cout<< "Is it a just letter/digit(isanum()) : "<< isalnum(c) <<endl;
    cout<< "Is it lowercase (islower()) : "<< islower(c) <<endl;
    cout<< "Is it uppercase(isupper()) : "<< isupper(c) <<endl;
    cout<< "Is it printable isprint()) : "<< isprint(c) <<endl;
    cout<< "Is it whitespace isspace()) : "<< isspace(c) <<endl;
    cout<< "Convertig to lower(tolower()): " << tolower(c) <<endl;
    cout<< "Convertig to upper (toupper()): " << toupper(c) <<endl;
    
    return 0;
} 