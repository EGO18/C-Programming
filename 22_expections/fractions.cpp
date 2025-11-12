#include <iostream>

class fraction
{
    public:
        fraction(int n, int d) : num(n), denom(d)
        {

        }

        int quotient()
        {
            if (denom == 0)
            {
                throw "Cannot divide by zero"; 
            }
            if (num < -100)
            {
                std::string ex("Error: the numerator is too small");
                throw ex;
            }
            // TODO throw an int expection with code 777 if the result is less than 0
            if (num / denom < 0)
            {
                throw 777;
            }

            //throw 2.5;

            return num / denom;
        }
    private:
        int num;
        int denom;
};

int main ()
{
    int n1, n2;
    std::cout << "Enter two integers: ";
    std::cin >> n1 >> n2;
    fraction f1(n1, n2);

    try
    {
        f1.quotient();
    }
    catch (const char *str)
    {
        std:: cout << str << std::endl;
    }
    catch (const std::string& str)
    {
        std:: cout << str << std::endl;
    }

    catch (int ex)
    {
        std:: cout << "Expection code is " << ex << ". The result is less than 0" << std::endl;
    }
    catch (...)
    {
        std::cout << "Other type of expection" << std::endl;
    }

std::cout << "Execution of the program continues" << std::endl;

    return 0;
}