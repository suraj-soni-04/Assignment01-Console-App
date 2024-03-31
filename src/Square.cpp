#include <iostream>
#include <math.h>
#include <..\headers\Square.h>
using namespace std;
Square::Square()
{
    this->side=0;
}
Square::Square(double side)
{
    this->side=side;
}
Square::Square(const Square &other)
{
    this->side=other.side;
}
Square::Square(Square &&other)
{
    this->side=other.side;
    other.side=double(NULL);
}
Square& Square::operator=(Square &other)
{
    this->side=other.side;
    return *this;
}
Square::~Square()
{
    //cout<<"***Square Memory got released***"<<endl;
}
double Square::getAreaOfSquare()
{
    return this->side * this->side;   
}
double Square::getPerimeterOfSquare()
{
    return 4 * this->side;
}
double Square::getDiagonalOfSquare()
{
    return this->side * sqrt(2);
}

