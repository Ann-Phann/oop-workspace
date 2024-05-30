


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

        //or 
        // std::srand(static_cast<unsigned int>(std::time(0)));
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

    void gameLoop(int maxIterations, double trapActivationDistance, int gridWidth, int gridHeight) {
        for (int iteration = 0; iteration < maxIterations; ++iteration) {
            for (auto& cell : grid) {
                // Move characters
                if (Character* character = static_cast<Character*>(cell)) {
                    character->move(1, 0);

                    // Check if the character has won the game
                    auto [x, y] = character->getPos();
                    if (x >= gridWidth || y >= gridHeight || x < 0 || y < 0) {
                        std::cout << "Character has won the game!" << std::endl;
                        return;
                    }

                    // Check for nearby traps
                    for (auto& otherCell : grid) {
                        if (Trap* trap = static_cast<Trap*>(otherCell)) {
                            if (trap->isActive() && Utils::calculateDistance(character->getPos(), trap->getPos()) <= trapActivationDistance) {
                                trap->apply(*character);
                            }
                        }
                    }
                }
            }
        }
        std::cout << "Maximum number of iterations reached. Game over." << std::endl;
    }

    ~Game() {
        for (auto& cell : grid) {
            delete cell;
        }
    }
};

#endif // GAME_H