#ifndef _MYSTRING_H
#define _MYSTRING_H

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &is, Mystring &rhs);
    
private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();
    
    Mystring &operator=(const Mystring &rhs); //Copy assignment
    Mystring &operator=(Mystring &&rhs); //Move assignment
    
    void display() const;
    int get_lenghth() const;           //getters
    const char *get_str() const;
    
};

#endif