class Line
{
    private:
        double x1,y1;
        double x2,y2;
    public:
        Line();
        Line(double x1,double y1,double x2,double y2);
        Line(const Line &other);
        Line(Line &&other);
        Line& operator=(Line &other);
        ~Line();
        double getLengthOfLine();
        double getSlopeOfLine();
};