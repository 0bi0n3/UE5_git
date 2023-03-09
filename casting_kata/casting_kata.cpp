// casting_kata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//------------------------------------------------------------
// Classes.
class Object
{
public:
    virtual void beginPlay();
};

class Actor : public Object
{
public:
    virtual void beginPlay() override;
};

class Pawn : public Actor
{
public:
    virtual void beginPlay() override;
};

//------------------------------------------------------------
// Main body.
int main()
{
    Object* obj = new Object;
    //obj->beginPlay();

    Actor* actor = new Actor;
    //actor->beginPlay();

    Pawn* pwn = new Pawn;
    //pwn->beginPlay();

    Object* ObjectArray[] = { obj, actor, pwn };

    for (int i = 0; i < 3; i++)
    {
        ObjectArray[i]->beginPlay();
    }


    delete obj;
    delete actor;
    delete pwn;

    std::cin.get();
}

//------------------------------------------------------------
// Definitions.
void Object::beginPlay()
{
    std::cout << "Object beingPlay() called!\n" << std::endl;
}

void Actor::beginPlay()
{
    std::cout << "Actor beingPlay() called!\n" << std::endl;
}

void Pawn::beginPlay()
{
    std::cout << "Pawn beingPlay() called!\n" << std::endl;
}
