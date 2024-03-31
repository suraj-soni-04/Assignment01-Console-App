class Circle
{
    private:
        double radius; //property
    public:
        Circle(); // Default Constructor
        Circle(double radius); //Parametrized Constructor
        Circle(const Circle &other); //Copy Constructor
        Circle(Circle &&other); //Move Constructor
        Circle& operator=(Circle &other); //Operator =
        ~Circle(); //Destructor
        double getAreaOfCircle(); //method-1
        double getCircumferenceOfCircle(); //method-1
};