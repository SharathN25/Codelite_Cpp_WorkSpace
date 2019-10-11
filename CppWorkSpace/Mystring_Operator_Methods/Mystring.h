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
    Mystring(Mystring &&source);// Move Constructor
    ~Mystring();
    
    Mystring &operator=(const Mystring &rhs); //Copy assignment
    Mystring &operator=(Mystring &&rhs); //Move assignment
    
    Mystring operator-() const; //make lower case
    Mystring operator+(const Mystring &rhs) const; //Concate
    bool operator==(const Mystring &rhs) const; 
    
    void display() const;
    int get_lenghth() const;           //getters
    const char *get_str() const;
    
};






#endif