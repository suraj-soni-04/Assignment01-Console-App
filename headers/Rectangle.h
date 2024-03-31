class Rectangle
{
    private:
        double length,breadth;
    public:
        Rectangle();
        Rectangle(double length,double breadth);
        Rectangle(const Rectangle &other); //copy constructor
        Rectangle(Rectangle &&other); //move constructor
        Rectangle& operator=(Rectangle &other); //operator =
        ~Rectangle();
        double getAreaOfRectangle();
        double getPerimeterOfRectangle();
        double getDiagonalOfRectangle();
};