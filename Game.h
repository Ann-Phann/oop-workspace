


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


/*All files found, +1 marks.
Successfully compiled program.out with files main-3.cpp. +2 marks
program.out failed to compile using files source/test-3-1.cpp
Compiler stdout:

-------
Compiler stderr:
In file included from source/test-3-1.cpp:1:0:
source/Game.h: In member function ‘void Game::gameLoop(int, double, int, int)’:
source/Game.h:54:26: warning: decomposition declaration only available with -std=c++1z or -std=gnu++1z
                     auto [x, y] = character->getPos();
                          ^
source/test-3-1.cpp: In function ‘int main()’:
source/test-3-1.cpp:19:26: error: no matching function for call to ‘Game::gameLoop(int, double)’
     game.gameLoop(20, 2.0);
                          ^
In file included from source/test-3-1.cpp:1:0:
source/Game.h:46:10: note: candidate: void Game::gameLoop(int, double, int, int)
     void gameLoop(int maxIterations, double trapActivationDistance, int gridWidth, int gridHeight) {
          ^~~~~~~~
source/Game.h:46:10: note:   candidate expects 4 arguments, 2 provided
source/test-3-1.cpp:33:27: error: no matching function for call to ‘Game::gameLoop(int, double)’
     game2.gameLoop(20, 2.0);
                           ^
In file included from source/test-3-1.cpp:1:0:
source/Game.h:46:10: note: candidate: void Game::gameLoop(int, double, int, int)
     void gameLoop(int maxIterations, double trapActivationDistance, int gridWidth, int gridHeight) {
          ^~~~~~~~
source/Game.h:46:10: note:   candidate expects 4 arguments, 2 provided*/