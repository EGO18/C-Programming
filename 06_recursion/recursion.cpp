#include <iostream>

void test(int n);

int main(void)
{
    test(100);
    return 0;
}

// Recursion function

void test(int n)
{
    // The base case
    if (n<=0)
    {
        return;
    }
    // The recursive case
    std::cout << n << std::endl;
    test(n-1);
}
