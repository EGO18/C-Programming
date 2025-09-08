/*
  Prints combination of n characters
*/

#include<iostream>
#include<string>

void printCombinations(std::string& s, int n, int i);
void printCombinations(int n);

int main()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    
    printCombinations(n);
    
    return 0;
}

void printCombinations(int n)
{
    // Create a string and intialize with a 'a' with characters
    std::string s(n,'a');
    
    printCombinations(s, n, 0);
    
    
}

void printCombinations(std::string& s, int n, int i)
{
        // base case
        if (i >= n)
        {
            std::cout << s << std::endl;
            return;
        }
        while (s[i] <= 'z')
        {
            printCombinations(s, n, i + 1);
            s[i]++;
        }
        s[i]='a';
    
    
}