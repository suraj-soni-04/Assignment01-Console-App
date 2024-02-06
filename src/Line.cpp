#include<iostream>
#include<cmath>
#include<..\headers\Line.h>
using namespace std;
Line::Line()
{
    this->x1=0.0;
    this->y1=0.0;
    this->x2=0.0;
    this->y2=0.0;
}
Line::Line(double x1, double y1, double x2, double y2)
{
    this->x1=x1;
    this->y1=y1;
    this->x2=x2;
    this->y2=y2;    
}
Line::Line(const Line &other)
{
    this->x1=other.x1;
    this->y1=other.y1;
    this->x2=other.x2;
    this->y2=other.y2;        
}
Line::Line(Line &&other)
{
    this->x1=other.x1;
    this->y1=other.y1;
    this->x2=other.x2;
    this->y2=other.y2;        
    other.x1=double(NULL);
    other.x2=double(NULL);
    other.y1=double(NULL);
    other.y2=double(NULL);
}
Line& Line::operator=(Line &other)
{
    this->x1=other.x1;
    this->y1=other.y1;
    this->x2=other.x2;
    this->y2=other.y2;        
    return *this;
}
Line::~Line()
{
    //cout<<"***Memory for the Line released***"<<endl;   
}
double Line::getLengthOfLine()
{
    return sqrt(pow(this->x2 - this->x1, 2) + pow(this->y2 - this->y1, 2));
}
double Line::getSlopeOfLine()
{
    if(this->x2 - this->x1 == 0) 
    {
        cout << "--- The line is vertical, and the slope is undefined ---" << endl;
        return 0;
    }
    return (this->y2 - this->y1) / (this->x2 - this->x1);
}

