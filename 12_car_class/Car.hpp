// Headr file (.hpp, .h)
// Description of the class
#include<string>

/*
    TODO
    Add:
    mileage: the odometer of the car
    fuel_capacity: tank capacity of the car
    fuel_level: current fuel in gallons

    Methods:
    void refuel(double gallons);
    void drive(double distance); if car has enough fuel to drive the given distance print <Car (make,model) is driving!>

*/
class Car 
{
public:
    // Constructors
    Car(); // no-arg
    Car(std::string make, std::string model, int year, double MPG);
    
        //Getters
        std::string getMake() const;
        std::string getModel() const;
        int getYear() const;
        double getMPG() const;

        //Setters
       void setMake(std::string newMake);
        void setModel(std::string newModel);
        void setYear(int newYear);
        void setMPG(double newMPG);


private:
    std::string make;
    std::string model;
    int year;
    double MPG;
}