class Ellipse
{
    private:
        double majorAxis,minorAxis; //property
    public:
        Ellipse();  //Default Constructor
        Ellipse(double majorAxis,double minorAxis); //Parameterized Constructor
        Ellipse(const Ellipse &other); //Copy Constructor
        Ellipse(Ellipse &&other); //Move Constructor
        Ellipse& operator=(Ellipse &other); //Operator =
        ~Ellipse(); //Destructor
        std::pair<double, double> getCenterOfEllipse(); //method-1
        double getEccentricityOfEllipse();//method-2
        double getFocalLengthOfEllipse(); //method-3
        double getAreaOfEllipse();//method-4
};