#include<iostream>
#include<math.h>
#include<../headers/Rectangle.h>
using namespace std;
Rectangle::Rectangle()
{
    this->length=0;
    this->breadth=0;
}
Rectangle::Rectangle(double length,double breadth)
{
    this->length=length;
    this->breadth=breadth;
}
Rectangle::Rectangle(const Rectangle &other)
{
    this->length=other.length;
    this->breadth=other.breadth;
}
Rectangle::Rectangle(Rectangle &&other)
{
    this->length=other.length;
    this->breadth=other.breadth;
    other.length=double(NULL);
    other.breadth=double(NULL);
}
Rectangle& Rectangle::operator=(Rectangle &other)
{
    this->length=other.length;
    this->breadth=other.breadth;    
    return *this;
}
Rectangle::~Rectangle()
{
    //cout<<"***Rectangle Memory got released***"<<endl;
}
double Rectangle::getAreaOfRectangle()
{
    return (this->length)*(this->breadth);   
}
double Rectangle::getPerimeterOfRectangle()
{
    return 2*(this->length+this->breadth);
}
double Rectangle::getDiagonalOfRectangle()
{
    return sqrt(pow(length,2) + pow(breadth,2));
}
