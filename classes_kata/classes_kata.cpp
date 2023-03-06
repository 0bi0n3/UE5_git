// classes_kata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

struct Trooper
{
    Trooper();

    int Level;
    float health;

    void Move2Location();
};

Trooper::Trooper()
{
    Level = 4;
    health = 60.f;
    std::cout << "Ready for orders commander." << std::endl;
    Move2Location();
}

void Trooper::Move2Location()
{
    std::cout << "Roger, moving to location!" << std::endl;
    std::cout << "Our current health is " << health << std::endl;
}

class Commander
{
public:
    Commander()
    {
        OrderCharge();
        CmdName = "default name...";
        Level = 5;
        Health = 75.f;
    }

    std::string CmdName;

    int Level = 10;
    float Health = 100.f;

    void OrderCharge()
    {
        std::cout << "Charge!" << std::endl;
    }

    void OrderRetreat()
    {
        std::cout << "Fall back!" << std::endl;
    }
};

int main()
{
    
    Commander Kingsley;
    Commander Willow;
    Trooper solider1;

    Kingsley.OrderRetreat();

    std::cout << Kingsley.CmdName << std::endl;
    std::cout << Willow.CmdName << std::endl;
    std::cout << Willow.Health << std::endl;

    std::cin.get();
}

