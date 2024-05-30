#ifndef CHARACTER_H
#define CHARACTER_H

#include "Cell.h"

class Character : public Cell {
public:
    Character(int x, int y) : Cell(x, y, 'C') {}

    void move(int dx, int dy) {
       std::tuple<int, int> pos = getPos();
        int x = std::get<0>(pos);
        int y = std::get<1>(pos);
        setPos(x + dx, y + dy);    
    }
};

#endif // CHARACTER_H

