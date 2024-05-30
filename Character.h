#ifndef CHARACTER_H
#define CHARACTER_H

#include "Cell.h"

class Character : public Cell {
public:
    Character(int x, int y) : Cell(x, y, 'C') {}

    void move(int dx, int dy) {
        auto [x, y] = getPos();
        setPos(x + dx, y + dy);
    }
};

#endif // CHARACTER_H

