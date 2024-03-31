class Square
{
    private:
        double side;
    public:
        Square();
        Square(double side);
        Square(const Square &other);
        Square(Square &&other);
        Square& operator=(Square &other);
        ~Square();
        double getAreaOfSquare();
        double getPerimeterOfSquare();
        double getDiagonalOfSquare();
};