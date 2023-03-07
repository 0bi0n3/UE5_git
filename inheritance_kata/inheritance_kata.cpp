// inheritance_kata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Creature
{
public:
    Creature();
    Creature(std::string title, int lvl, float hp, float dmg);

    std::string Name;
    int Level;
    float Health;
    float Damage;

    void Report();

};

class HumanNPC : public Creature
{
public:
    HumanNPC();
    HumanNPC(std::string title, int lvl, float hp, float dmg);

    void Speak();

};

class Gnome : public HumanNPC
{

};

int main()
{
    
    Gnome Gnomer;
    
    Gnomer.Speak();
    Gnomer.Report();
    
    /*
    Creature enemy1;

    enemy1.Report();

    Creature enemy2("Dragkin", 11, 88.f, 45.f);

    enemy2.Report();
    */

    std::cin.get();
}

Creature::Creature()
{
    std::cout << "NPC spawned." << std::endl;

    Name = "Bandit.";
    Level = 5;
    Health = 25.f;
    Damage = 10.f;
}

Creature::Creature(std::string title, int lvl, float hp, float dmg) 
    : Name(title), Level(lvl), Health(hp), Damage(dmg)
{
    Report();
}


void Creature::Report()
{
    std::cout << "NPC Name: " << Name << std::endl; 
    std::cout << "NPC Level: " << Level << std::endl;
    std::cout << "NPC HP: " << Health << std::endl;
    std::cout << "NPC Damage: " << Damage << std::endl;

}

HumanNPC::HumanNPC()
{
    std::cout << "Human NPC spawned!" << std::endl;
}

HumanNPC::HumanNPC(std::string title, int lvl, float hp, float dmg)
    : Creature(title, lvl, hp, dmg)
{

}

void HumanNPC::Speak()
{
    std::cout << "Greetings adventurer!" << std::endl;
}

