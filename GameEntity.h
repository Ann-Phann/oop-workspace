#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>
#include <tuple>

class GameEntity
{
private:
    std::tuple<int, int> position;
    char type;

public:
    GameEntity(int x, int y, char type)
    {
        this->type = type;
        this->position = std::make_tuple(x, y);
    }

    std::tuple <int, int> getPos()
    {
        return position;
    }

    char getType()
    {
        return type;
    }
};

#endif // GAMEENTITY_H
