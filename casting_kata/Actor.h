#pragma once
#include "Object.h"
#include <iostream>

class Actor : public Object
{
public:
    virtual void beginPlay() override;

    void actorFunction();
};