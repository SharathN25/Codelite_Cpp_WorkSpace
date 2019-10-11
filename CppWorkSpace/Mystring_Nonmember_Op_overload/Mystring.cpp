#include <cstring>
#include <iostream>
#include "Mystring.h"

//No-arg Constructor
Mystring::Mystring()
:str{nullptr}
{
    str = new char[1];
    *str = '\0';  
}

//Overloaded constructor
Mystring::Mystring(const char *s)
:str{nullptr}
{
    if(s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
    str = new char[std::strlen(s) +1];
    std::strcpy(str,s);
    }
}

//Copy Constructor
Mystring::Mystring(const Mystring &source)
:str{nullptr}
{
    str = new char[std::strlen(source.str)+1];
    std::strcpy(str,source.str);
}

//Destructor 
Mystring::~Mystring()
{
    delete [] str;
}

//Display method
void Mystring::display() const
{
    std::cout << str << ":" << get_lenghth() <<std::endl;
}

//length getter 
int Mystring::get_lenghth() const
{
    return std::strlen(str);
}

//string gettter
const char* Mystring::get_str() const
{
    return str;
}

//Equality
bool operator==(const Mystring &lhs, const Mystring &rhs)
{
    return(std::strcpy(lhs.str, rhs.str) == 0);
}

//Lower case
Mystring operator-(const Mystring &obj)
{
    char *buff = new char[std::strlen(obj.str)+1];
    std::strcpy(buff,obj.str);
    for(size_t i=0; i<std::strlen(buff);i++)
    {
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

//concate
Mystring operator+(const Mystring &lhs, const Mystring &rhs)
{
    char *buff = new char[std::strlen(lhs.str)+std::strlen(rhs.str)+1];
    std::strcpy(buff,lhs.str);
    std::strcat(buff,rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}