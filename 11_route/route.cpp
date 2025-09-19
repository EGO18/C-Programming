#include<iostream>
#include<ctime>
#include<string>
// Create a Route structure
class Route
{
private: // access specifier
    std::string source;
    std::string destination;
    int length;


    void updateLength()
    {
        length = (source.empty() || destination.empty ()) ? 0 : rand() % 900 + 75;
    }
public:
    //Get functions (getters, accessor functions)
    std::string getSource(void)
    {
        return source;
    }

    std::string getDestination(void)
    {
        return destination;
    }

    // Set function (mutator functions, setters)
    void setSource(std::string new_source)
    {
        source = new_source;
        updateLength();
    }

    void setDestination(std::string new_destination)
    {
        destination = new_destination;
        updateLength();
    }

    void print(void)
    {
        std::cout << source << " -> " << destination << " : " << length << std::endl;
    }
};

int main()
{
    srand(time(0)); // Set the seed of random number
    //Create an object of Route
    Route fall_trip;

    fall_trip.setSource("Lakland");
    fall_trip.setDestination("Paris");

    fall_trip.print();
    fall_trip.setDestination("New York");
    fall_trip.print();


    return 0;
}