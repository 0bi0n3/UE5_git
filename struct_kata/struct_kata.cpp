// struct_kata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

struct Player
{
    int Level;
    float Health;
    float Mana;
    float Damage;
    
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

};

int main()
{
    Player playerOne;

    playerOne.Level = 12;
    playerOne.Health = 250.f;
    playerOne.Damage = 48.f;
    playerOne.Mana = 120.f;

    std::cout << "Player's level is: " << playerOne.getLevel() << std::endl;
   

    std::cin.get();
}
