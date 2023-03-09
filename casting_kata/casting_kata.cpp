// casting_kata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Object.h"
#include "Actor.h"
#include "Pawn.h"

void InheritanceFunction();

//------------------------------------------------------------
// Main body.
int main()
{
    InheritanceFunction();

    std::cin.get();
}

//------------------------------------------------------------
// Definitions.

void InheritanceFunction()
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
}