#ifndef CELL_H
#define CELL_H

#include <tuple>

class Cell {
private:
    std::tuple<int, int> position;
    char type;

public:
    Cell(int x, int y, char type){
        this->type = type;
        this->position = std::make_tuple(x, y);
    }

    std::tuple<int, int> getPos() const {
        return position;
    }

    char getType() const {
        return type;
    }

    void setPos(int x, int y) {
        position = std::make_tuple(x, y);
    }

    void setType(char type) {
        this->type = type;
    }
};

#endif // CELL_H

