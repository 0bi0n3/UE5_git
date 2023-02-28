// refs_kata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void ChangeCharacterClass(std::string& ccc);

int main()
{
    std::string characterClass = "Druid";

    ChangeCharacterClass(characterClass);

    std::cout << characterClass << std::endl;
    


    std::cin.get();

}

void ChangeCharacterClass(std::string& ccc)
{
    ccc += "!";
}
