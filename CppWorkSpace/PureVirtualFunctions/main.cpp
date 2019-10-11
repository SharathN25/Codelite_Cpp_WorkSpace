/* Pure Virtual Functions and abstract classes */
#include <iostream>
#include <vector>
using namespace std;

class Shape
{
private:
    //attributes common to all shapes
public:
    virtual void draw()=0;//pure virtual function
    virtual void rotate()=0;//pure virtual function
    virtual ~Shape() { };
};

class Open_Shape:public Shape //Abstract class
{
public:
    virtual ~Open_Shape();
};

class Closed_Shape:public Shape //Abstract class
{
public:
    virtual ~Closed_Shape();
};

class Line : public Shape //Concrete class
{
public:
    virtual void draw() override 
    {
        cout << "Draw Line" <<endl;
    }
    
    virtual void rotate() override
    {
        cout <<"Rotate line" <<endl;
    }
};

class Circle : public Shape //Concrete class
{
public:
    virtual void draw() override
    {
        cout << "Draw Circle" <<endl;
    }
    
    virtual void rotate() override
    {
        cout << "Rotate circle" << endl;
    }
    
    virtual ~Circle() {} ;
};

class Square : public Shape //Concrete class
{
public:
    virtual void draw() override
    {
        cout <<"Draw Square"<< endl;
    }
    
    virtual void rotate() override
    {
        cout <<"Rotate Square" <<endl;
    }
    
    virtual ~Square() {};
    
};

int main(void)
{
    //Shape s;  //Error
    //Shape *p = new Shape(); //erorr
    
//    Circle c;
//    c.draw();
    
    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();
    
    vector<Shape*> Shapes {s1,s2,s3};
    for(const auto p: Shapes)
        p->draw();
        
    delete s1;    
    delete s2;    
    delete s3;    
    return 0;
}