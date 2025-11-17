#include<fstream>
#include<iostream>
#include<iomanip>


int main()
{
    std::ifstream in;
    std::cout << "Enter a file name: ";
    std::string file_name;
    std::cin >> file_name;
    //Open the file
    in.open(file_name);
    
    // Check if file exist
    if (in.fail())
    {
        std::cout << file_name << " could not be opened\n";
        return 1; // Error
    }

    //Reading from a file
    std::string first_lane;
    std::string second_lane;

    getline(in, first_lane);
    getline(in, second_lane);

    int sum = 0;
    int num;
    while(in >> num)
    {
        std::cout << num << ' ';
        sum += num;
    }
    
    //TODO research getline


    std::cout << first_lane << " A+ Code: " << second_lane << std::endl;
    std::cout << "Sum: " << sum << std::endl;



    // //Writing the file
    // out << "Hello" << std::endl;
    // out << "MDRM8" << std::endl;

    // for(int i = 1; i < 100; i++)
    // {
    //     out << std::setw(5) << i;
    //     if (i% 10 == 0)
    //     {
    //         out << '\n';
    //     }
    // }

    //Close the file
    in.close();

    return 0;
}
