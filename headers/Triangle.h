class Triangle
{
    private:
        double sideA,sideB,sideC;
    public:
        Triangle();
        Triangle(double sideA,double sideB,double sideC);
        Triangle(const Triangle &other);
        Triangle(Triangle &&other);
        Triangle& operator=(Triangle &other);
        ~Triangle();
        double getAreaOfTriangle();
        double getPerimeterOfTriangle();
        double getSemiPerimeterOfTriangle();
        double getInRadiusOfTraingle();
        double getCircumRadiusOfTraingle();
};