// Pointers2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::cout << "Test lengths of variables.\n\n";


    // Show the values and addresses for an array of integers
    int a[5] = { 10, 20, 30, 40, 50 };
    std::cout << "Length of integer array = " << (sizeof(a) / sizeof(*a)) << std::endl;
    std::cout << "Size of array = " << (sizeof(a)) << std::endl;
    std::cout << "Size of array element = " << (sizeof(*a)) << std::endl;
    std::cout << "Value of elements = " << a[0] << "   " << a[1] << "   " << a[2] << "   " << a[3] << "   " << a[4] << std::endl;
    std::cout << "Address of elements = " << &a[0] << "   " << &a[1] << "   " << &a[2] << "   " << &a[3] << "   " << &a[4] << std::endl << std::endl;

 
    // Similar for an array of doubles
    double b[5] = { 10.5, 20.5, 30.5, 40.5, 50.5 };
    std::cout << "Length of double array = " << (sizeof(b) / sizeof(*b)) << std::endl;
    std::cout << "Size of array = " << (sizeof(b)) << std::endl;
    std::cout << "Size of array element = " << (sizeof(*b)) << std::endl;
    std::cout << "Value of elements = " << b[0] << "   " << b[1] << "   " << b[2] << "   " << b[3] << "   " << b[4] << std::endl;
    std::cout << "Address of elements = " << &b[0] << "   " << &b[1] << "   " << &b[2] << "   " << &b[3] << "   " << &b[4] << std::endl << std::endl;


    // Similar for an array of strings, and pointers to each array element
    std::string colour[4] = { "Red", "Orange", "Yellow", "Green" };
    std::string* p13, * p14, * p15, * p16;

    p13 = &colour[0];                   // Point to first array element
    p14 = &colour[1];
    p15 = &colour[2];
    p16 = &colour[3];

    // Show the values and addresses of the string variables:
    std::cout << "Length of string array = " << (sizeof(colour) / sizeof(*colour)) << std::endl;
    std::cout << "Size of string array = " << (sizeof(colour)) << std::endl;
    std::cout << "Size of string array element = " << (sizeof(*colour)) << std::endl;
    std::cout << "Value of string array elements: " << colour[0] << "  " << colour[1] << "   " << colour[2] << "   " << colour[3] << "\n";
    std::cout << "Addresses of string array elements: " << p13 << "  " << p14 << "   " << p15 << "   " << p16 << "\n\n";

}