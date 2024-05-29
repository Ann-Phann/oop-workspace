#ifndef EFFECT_H
#define EFFECT_H

#include "GameEntity.h"
#include <iostream>

class Effect
{
private:
public:
    //Accepts a GameEntity and applies the effect to the entity. This function is pure virtual and needs to be implemented in derived classes.
    virtual void apply (GameEntity& entity) = 0;
};
#endif // EFFECT_H