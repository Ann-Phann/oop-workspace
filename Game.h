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

    void initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight) {
        // Initialize characters at random positions
        for (int i = 0; i < numCharacters; ++i) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            grid.push_back(new Character(std::get<0>(pos), std::get<1>(pos)));
        }

        // Initialize traps at random positions
        for (int i = 0; i < numTraps; ++i) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            grid.push_back(new Trap(std::get<0>(pos), std::get<1>(pos)));
        }
    }



~Game() {
        for (auto& cell : grid) {
            delete cell;
        }
    }


#endif // GAME_H
