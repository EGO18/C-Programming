#include <iostream>

int main(void){
    int age = 25;
    double gpa = 3.5;
    char grade = 'A';
    std::string name = "Mike"; //string requires <string> headr)
    bool isActive = true;

    //Scan the input
    std::cout <<"Enter your name";
    getline(std::cin, name);



    std::cout << name << std::endl;
    std::cout << age << std::endl;
    std::cout << grade << std::endl;


    return 0;
}