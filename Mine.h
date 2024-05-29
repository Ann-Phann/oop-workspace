#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"
#include <iostream>

/**
 * @class Mine
 * @brief Represents a mine entity in the game.
 *        Inherits from GameEntity.
 */
class Mine : public GameEntity {
public:
    /**
     * @brief Constructor to initialize the Mine with a position.
     * @param x The x-coordinate of the mine.
     * @param y The y-coordinate of the mine.
     */
    Mine(int x, int y) : GameEntity(x, y, 'M') {}

    /**
     * @brief Creates an Explosion object at the mine's position.
     *        Changes the mine's type to 'X' to indicate it has exploded.
     * @return An Explosion object at the mine's current position.
     */
    Explosion explode() {
        this->setType('X');
        std::tuple<int, int> pos = getPos();
        return Explosion(std::get<0>(pos), std::get<1>(pos));
    }
};

#endif // MINE_H
