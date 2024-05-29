#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "Effect.h"
#include "GameEntity.h"

class Explosion :public Effect, public GameEntity
{
private:

public:
    Explosion(int x, int y) : GameEntity(x, y, 'E') 
    {
        //Contains a parameterized constructor that takes an x , y position argument and sets the type character to 'E' for Explosion.
    }

    //Implements the apply() function in a way that modifies a GameEntity object. The method sets the position to (-1, -1) and the type to 'X'.
    void apply(GameEntity& entity) override {
        entity.setPos(-1, -1);
        entity.setType('X');
    }
    
};
#endif // EXPLOSION_H