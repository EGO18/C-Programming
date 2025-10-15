#include "MyVector.hpp"
#include <iostream>

// Implement constructor
MyVector::MyVector(int capacity) : size(0)
{
    this ->capacity = capacity;
    elements = new int[capacity];
}

MyVector::~MyVector()
{
    delete [] elements;
}

MyVector::MyVector(const MyVector& other)
{
   capacity = other.capacity;
    size = other.size;
    elements = new int[capacity];

    for (int i = 0; i < size; i++)
    {
        elements[i] = other.elements[i];
    }
}

void MyVector::push_back(int value)
{
    if (size >= capacity)
    {
        
        int newCapacity = capacity * 2;
        int* newElements = new int[newCapacity];

        
        for (int i = 0; i < size; i++)
        {
            newElements[i] = elements[i];
        }

        delete[] elements;
        elements = newElements;
        capacity = newCapacity;
    }

    elements[size] = value;
    size++;
}



// TODO 3
// void pop-back(); (capacity should not be greater then double size)

void MyVector::print() const
{
    std::cout << "[ ";
    for (int i = 0; i < size; i++)
    {
        std::cout << elements[i] << ' ';
    } 
    std::cout << "]\n";
}