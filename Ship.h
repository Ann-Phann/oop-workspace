#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"
#include <iostream>

class Ship : public GameEntity {
    public:
        Ship(int x, int y) : GameEntity(x, y, 'S') {
        }
        void move(int dx, int dy) {
            std::tuple<int, int> pos = getPos();
            int x = std::get<0>(pos);
            int y = std::get<1>(pos);
            setPos(x + dx, y + dy);
        }



};

#endif // SHIP_H