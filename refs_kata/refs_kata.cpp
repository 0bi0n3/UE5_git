// refs_kata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void ChangeCharacterClass(std::string& ccc);

void printDamage(std::string dmg);
void printDamage(int damage);
void printDamage(std::string msg1, std::string msg2);
void printDamage(std::string msg3, int damage1);

int main()
{
    std::string characterClass = "Druid";

    ChangeCharacterClass(characterClass);

    std::cout << characterClass << std::endl;

    printDamage("forty HP lost...");
    printDamage(40);
    printDamage("Critical Hit!", "Damage Taken!");
    printDamage("Crit: ", 59);
    printDamage("Healed: ", 120);
    printDamage("Cast: ", 44);
    printDamage("Deflect: ", 100);
    


    std::cin.get();

}

void printDamage(std::string msg3, int damage1)
{
    std::cout << msg3 << damage1 << std::endl;
}


void printDamage(std::string msg1, std::string msg2)
{
    std::cout << "Message 1: " << msg1 << std::endl;
    std::cout << "Message 2: " << msg2 << std::endl;
}


void printDamage(int damage)
{
    std::cout << damage << std::endl;
}

void printDamage(std::string dmg)
{
    std::cout << dmg << std::endl;
}

void ChangeCharacterClass(std::string& ccc)
{
    ccc += "!";
}
