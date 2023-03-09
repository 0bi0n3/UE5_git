// casting_kata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//------------------------------------------------------------
// Classes.
class Object
{
public:
    virtual void beginPlay();

    void objectFunction()
    {
        std::cout << "Object function called!\n\n";
    }
};

class Actor : public Object
{
public:
    virtual void beginPlay() override;

    void actorFunction()
    {
        std::cout << "Actor function called!\n\n";
    }
};

class Pawn : public Actor
{
public:
    virtual void beginPlay() override;

    void pawnFunction()
    {
        std::cout << "Pawn function called!\n\n";
    }
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

    for (int i = 0; i < 3; i++)
    {
        Object* ptr2obj = ObjectArray[i];

        Actor* ptr2act = dynamic_cast<Actor*>(ptr2obj);

        if (ptr2act)
        {
            ptr2act->actorFunction();
        }

        Pawn* ptr2pwn = dynamic_cast<Pawn*>(ptr2obj);

        if (ptr2pwn)
        {
            ptr2pwn->pawnFunction();
        }
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
