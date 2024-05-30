#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Cell.h"
#include "Character.h"
#include "Trap.h"
#include "Utils.h"


class Game {
private:
    std::vector<Cell*> grid;

public:
    Game() {
        std::srand(std::time(0)); // Seed for random number generation
    }

    std::vector<Cell*>& getGrid() {
        return grid;
    }
    ~Game() {
        for (auto& cell : grid) {
            delete cell;
        }
    }


#endif // GAME_H
