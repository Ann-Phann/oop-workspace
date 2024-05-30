#ifndef CELL_H
#define CELL_H

#include <tuple>
#include <iostream>

class Cell {
private:
    char type;
    std::tuple<int, int> position;

public:
    Cell(int x, int y, char type)
    {
        this->position = std::make_tuple(x, y);
        this->type = type;
    }

    std::tuple<int, int> getPos()
    {
        return this->position;
    }

    char getType()
    {
        return this->type;
    }

    void setPos(int x, int y)
    {
        this->position = std::make_tuple(x, y);
    }

    void setType(char type)
    {
        this->type = type;
    }
};
#endif