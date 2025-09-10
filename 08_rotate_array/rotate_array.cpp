#include <iostream>

void rotateLeft(const int src[], int dest[], int size, int k);

int main()
{
    const int SIZE = 7;

    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    int newList[SIZE];
    rotateLeft(list, newList, SIZE, 1);

    // Print the rotate array
    for (int i: newList)
    {
        std::cout << i << ' ';
    }
}