// accessModifiers_kata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Creature
{
public:
    Creature();

    void setName(std::string name);
    std::string getName();

    float getHealth();

    void takeDamage(float dmg);

private:
    std::string Name;
    float Health;


protected:
    int NumberOfLimbs;


};

class Goblin : public Creature
{
public:
    Goblin();
    int getNumbOfLimps();
};

int main()
{
    Creature Igor;
    Igor.setName("Igor");

    std::cout << "Name: " << Igor.getName() << std::endl;
    std::cout << "Health: " << Igor.getHealth() << std::endl;

    std::cout << "Igor will now take 35 damage!" << std::endl;
    Igor.takeDamage(35.f);

    Goblin Gobby;

    std::cout << Gobby.getName() << std::endl;
    std::cout << Gobby.getNumbOfLimps() << std::endl;


    system("pause");
}


Creature::Creature()
{
    Health = 100.f;
    std::cout << "A creature has been created!\n";
}

void Creature::setName(std::string name)
{
    Name = name;
}

std::string Creature::getName()
{
    return Name;
}

float Creature::getHealth()
{
    return Health;
}

void Creature::takeDamage(float dmg)
{
    float total;
    total = Health - dmg;

    if (total <= 0.f)
    {
        std::cout << getName() << " has died!\n";
    }
    else
    {
        Health -= dmg;
    }

    std::cout << "Health: " << Health << std::endl;
}

Goblin::Goblin()
{
    NumberOfLimbs = 5;
    setName("Gobby");
}

int Goblin::getNumbOfLimps()
{
    return NumberOfLimbs;
}