#include<iostream>
#include<math.h>
#include<..\headers\Circle.h>
using namespace std;
Circle::Circle()
{
    this->radius=0;
}
Circle::Circle(double radius)
{
    this->radius=radius;    
}
Circle::Circle(const Circle &other)
{
    this->radius=other.radius;
}
Circle::Circle(Circle &&other)
{
    this->radius=other.radius;
    other.radius=double(NULL);
}
Circle& Circle::operator=(Circle &other)
{
    this->radius=other.radius;
    return *this;   
}
Circle::~Circle()
{
    //cout<<"***Memory for the Circle released***"<<endl;   
}
double Circle::getAreaOfCircle()
{
    return M_PI*(this->radius)*(this->radius);
}
double Circle::getCircumferenceOfCircle()
{
    return 2*M_PI*(this->radius);
}
