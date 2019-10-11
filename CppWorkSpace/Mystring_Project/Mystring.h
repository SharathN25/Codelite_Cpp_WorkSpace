#ifndef _MYSTRING_H
#define _MYSTRING_H

class Mystring
{
private:
    char *str;
public:
    Mystring(); //No-arg constructor
    Mystring(const char *s); //overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    ~Mystring();
    void display() const;
    int get_lenghth() const;           //getters
    const char *get_str() const;
    
};






#endif