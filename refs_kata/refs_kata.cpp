// refs_kata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void plusOne(int& num)
{
    num++;
}

int main()
{
    // Declare and output number.
    int a{ 1 };

    std::cout << a << std::endl;

    // Call function and add one by reference.
    plusOne(a);

    std::cout << a << std::endl;

    std::cin.get();

}
