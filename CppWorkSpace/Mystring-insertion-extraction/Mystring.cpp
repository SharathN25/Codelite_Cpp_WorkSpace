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

//Copy Assignment 
Mystring &Mystring::operator=(const Mystring &rhs)
{
    std::cout <<"Copy Assignment" <<std::endl;
    if(this==&rhs)
        return *this;
    delete [] str;
    str =  new char[std::strlen(rhs.str) +1];
    std::strcpy(str,rhs.str);
    return *this;
}

//Move Assignment
Mystring &Mystring::operator=(Mystring &&rhs)
{
    std::cout <<"Move assignment" << std::endl;
    if(this==&rhs)
        return *this;
        
    delete [] str;
    str = rhs.str;
    rhs.str =  nullptr;
    return *this;    
}

//insertion operator overloading
std::ostream &operator<<(std::ostream &os, const Mystring &rhs)
{
    os << rhs.str;
    return os;
}

//extraction operator overloading
std::istream &operator>>(std::istream &is, Mystring &rhs)
{
    char *buff = new char[1000];
    is >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return is;
}


