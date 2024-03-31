#include <iostream>
#include <math.h>
#include <..\headers\Triangle.h>
using namespace std;
Triangle::Triangle()
{
    this->sideA=0;
    this->sideB=0;
    this->sideC=0;
}
Triangle::Triangle(double sideA, double sideB, double sideC)
{
    this->sideA=sideA;
    this->sideB=sideB;
    this->sideC=sideC;
}
Triangle::Triangle(const Triangle &other)
{
    this->sideA=other.sideA;
    this->sideB=other.sideB;
    this->sideC=other.sideC;    
}
Triangle::Triangle(Triangle &&other)
{
    this->sideA=other.sideA;
    this->sideB=other.sideB;
    this->sideC=other.sideC;    
    other.sideA=double(NULL);
    other.sideB=double(NULL);
    other.sideC=double(NULL);
}
Triangle& Triangle::operator=(Triangle &other)
{
    this->sideA=other.sideA;
    this->sideB=other.sideB;
    this->sideC=other.sideC;    
    return *this;    
}
Triangle::~Triangle()
{
    //cout<<"*** Triangle Memory got released ***"<<endl;
}
double Triangle::getAreaOfTriangle()
{
    double s = getSemiPerimeterOfTriangle();
    return sqrt(s * (s - this->sideA) * (s - this->sideB) * (s - this->sideC));
}
double Triangle::getPerimeterOfTriangle()
{
    return this->sideA + this->sideB + this->sideC;
}
double Triangle::getSemiPerimeterOfTriangle()
{
    return getPerimeterOfTriangle() / 2.0;
}
double Triangle::getInRadiusOfTraingle()
{
    return getAreaOfTriangle() / getSemiPerimeterOfTriangle();
}
double Triangle::getCircumRadiusOfTraingle()
{
    return (this->sideA * this->sideB * this->sideC) / (4 * getAreaOfTriangle());
}

