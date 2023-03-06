// strings_kata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>

int main()
{
    char myCString[6] = { 'F', 'r', 'o', 'g', 's', '\0' };
    std::string myCPPString;

    myCPPString = "Ponds full of water!";

    std::cout << myCString << std::endl;
    std::cout << myCPPString << std::endl;


    std::cin.get();
}
