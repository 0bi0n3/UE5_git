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

    int i = 1;
    int j = 2;
    int k = 3;

    if (i <= k && i < j)
    {
        std::cout << "This will be printed!" << std::endl;
    }


    std::cin.get();
}
