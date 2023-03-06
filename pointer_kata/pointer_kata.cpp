// pointer_kata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

struct Container
{
    std::string Name;

    int x;
    int y;
    int z;
};

int main()
{
    Container container = { "Sam", 5, 6, 7 };

    Container* ptr2cont = &container;

    std::cout << (*ptr2cont).Name << std::endl;
    std::cout << (*ptr2cont).x << std::endl;

    std::cout << ptr2cont->Name << std::endl;
    std::cout << ptr2cont->z << std::endl;


    int a = 100;

    int* ptr1;

    ptr1 = &a;

    std::cout << *ptr1 << std::endl;

    int b = 50;

    ptr1 = &b;

    std::cout << *ptr1 << std::endl;

    int array1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int* ptr2;

    ptr2 = array1;

    std::cout << *ptr2 << std::endl;

    ptr2++;

    std::cout << *ptr2 << std::endl;

    ptr2 += 5;

    std::cout << *ptr2 << std::endl;


    std::cin.get();
}
