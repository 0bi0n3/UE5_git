// struct_kata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

struct locationVec
{
    float Xpos;
    float Ypos;
    float Zpos;
};


struct Player
{
    int Level;
    float Health;
    float Mana;
    float Damage;

    locationVec location = { 0.f, 0.f,0.f };
    
    void takeDamage(float dmg)
    {
        Health -= dmg;
    }

    int getLevel()
    {
        if (Level < 10)
        {
            std::cout << "You are not high enough in level! \n";
        }
        else if (Level > 10)
        {
            std::cout << "You have reached high enough level, enter! \n";
        }
        return Level;
    }

    void displayLocation()
    {
        std::cout << "Location X = " << location.Xpos << std::endl;
        std::cout << "Location Y = " << location.Ypos << std::endl;
        std::cout << "Location Z = " << location.Zpos << std::endl;
    }

};

int main()
{
    Player playerOne;

    playerOne.Level = 12;
    playerOne.Health = 250.f;
    playerOne.Damage = 48.f;
    playerOne.Mana = 120.f;

    std::cout << "Player's level is: " << playerOne.getLevel() << std::endl;

    playerOne.takeDamage(15.f);

    std::cout << "Player takes " << 15.f << " damage!" << std::endl;
    std::cout << "Player's health is now " << playerOne.Health << std::endl;
   
    playerOne.displayLocation();

    Player playerTwo = { 15, 375.f, 54.f, 30.f, {17.f, 34.f,69.f} };

    playerTwo.displayLocation();

    std::cin.get();
}
