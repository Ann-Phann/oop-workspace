#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>
#include <tuple>


class GameEntity
{
protected:
    std::tuple<int, int> position;
    char type;

public:
    GameEntity(int x, int y, char type) 
    {
        position = std::make_tuple(x, y);
        this->type = type;
    }

    std::tuple<int, int> getPos() 
    {
        return position;
    }

    char getType() 
    {
        return type;
    }

    void setPos(int x, int y) 
    {
        position = std::make_tuple(x, y);
    }

    void setType(char type) 
    {
        this->type = type;
    }
};

#endif