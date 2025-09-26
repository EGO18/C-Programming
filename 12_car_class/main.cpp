// Testing file
#include "Car.hpp"

int main()
{
    // Create a car object
    Car ferrari_spider("Ferrari", "Spider", 2021, 16.4);
    ferrari_spider.print();

    Car ferrari_150;
    ferrari_150.setMake("Ferrari");
    ferrari_150.setModel("F 50");
    ferrari_150.setYear(2025);
    ferrari_150.setMPG(10.5);

    ferrari_150.print();
    return 0;
}