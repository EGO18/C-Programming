// The implementation of a Car class
#include"Car.hpp"


// No-arg constructor
Car::Car()
{
    setMake("Unkown");
    SetModel("Unkown");
    setYear(1900);
    setMPG(0.0);
}

Car::Car(std::string make, std::string model, int year, double MPG);
    setMake(make);
    setModel(model);
    setYear(year);
    setMPG(MPG);


// Setters

 void setMake(std::string newMake);
        void setModel(std::string newModel)
         {
            if(!newModel.empty())
            {
                model = newModel;
            }
        }
        void setYear(int newYear);
        void setMPG(double newMPG);

// Getters
std::string Car::getMake() const {return make;}
std::string Car::getModel(const {return model;}
int getYear();
double getMPG();