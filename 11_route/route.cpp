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
    //Constructors
    //Constructors have no return type
    //Constructors are called when the object is created
    //Constructors should be public
    //Constructors cannot be called explicitely

    //No-argument constructor (frist version)
    //Route()
    //{
    //    length = 0;
   // }

     //No-argument constructor (second version)
    Route() : length(0)
    {

    }

    // Overloaded constructor
    Route(std::string source_, std::string destination_)
    {
        setSource(source_);
        setDestination(destination_);
    }

    //Get functions (getters, accessor functions)
    std::string getSource(void)
    {
        return source;
    }

    std::string getDestination(void)
    {
        return destination;
    }
    //get length
    int getLength()
    {
        return length;
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

    //Return whether the route is long or not
    bool isLong();


};

int main()
{
    srand(time(0)); // Set the seed of random number
    //Create an object of Route
    Route fall_trip;
    fall_trip.print();

    fall_trip.setSource("Lakland");
    fall_trip.setDestination("Paris");

    fall_trip.print();
    fall_trip.setDestination("New York");
    fall_trip.print();

    // Create a Route object with constructor with arguments
    Route christmas_trip("Orlando", "Los Angeles");

    christmas_trip.print();

    //Creating objects
    Route route1; // no-argument constructor
    Route route2("A","B"); // constructor with arguments
    Route route3 = Route(); // no-arguments constructor
    Route route4 = Route("C","D"); // constructor with arguments 

    //Route route5(); // THIS IS NOT AN OBJECT. Function prototype.

    std::cout << route1.isLong() << std::endl;
    std::cout << route2.isLong() << std::endl;
    std::cout << route3.isLong() << std::endl;
    std::cout << route4.isLong() << std::endl;
    std::cout << fall_trip.isLong() << std::endl;
    std::cout << christmas_trip.isLong() << std::endl;

    return 0;
}


//Method implementation
bool Route::isLong()
{
    return getLength() > 300;
}