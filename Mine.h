#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"
#include <iostream>

class Mine : public GameEntity
{
    Mine(int x, int y, char type) : GameEntity(x, y, 'M') {}
    // function to return exploision object

    
    Explosion explode() {
        std::tuple<int, int> pos = getPos();
        return Exploision(pos, 'X');
        }
};

#endif // MINE_H