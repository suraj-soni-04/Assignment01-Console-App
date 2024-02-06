#include<iostream>
#include<cmath>
#include<..\headers\Ellipse.h>
using namespace std;
Ellipse::Ellipse()
{
    this->majorAxis=0;
    this->minorAxis=0;
}
Ellipse::Ellipse(double majorAxis, double minorAxis)
{
    this->majorAxis=majorAxis;
    this->minorAxis=minorAxis;
}
Ellipse::Ellipse(const Ellipse &other)
{
    this->majorAxis=other.majorAxis;
    this->minorAxis=other.minorAxis;
}
Ellipse::Ellipse(Ellipse &&other)
{
    this->majorAxis=other.majorAxis;
    this->minorAxis=other.minorAxis;
    other.majorAxis=double(NULL);
    other.minorAxis=(double)NULL;
}
Ellipse& Ellipse::operator=(Ellipse &other)
{
    this->majorAxis=other.majorAxis;
    this->minorAxis=other.minorAxis;
    return *this;
}
Ellipse::~Ellipse()
{
    //cout<<"***Memory for the Ellipse released***"<<endl;   
}
pair<double, double> Ellipse::getCenterOfEllipse()
{
    return make_pair(this->majorAxis / 2, this->minorAxis / 2);
}
double Ellipse::getEccentricityOfEllipse()
{
    return sqrt(1-pow(this->minorAxis/this->majorAxis, 2));
}
double Ellipse::getFocalLengthOfEllipse()
{
    return sqrt(pow(this->majorAxis, 2) - pow(this->minorAxis, 2)) / 2;
}
double Ellipse::getAreaOfEllipse()
{
    return M_PI*this->majorAxis * this->minorAxis / 4;
}

